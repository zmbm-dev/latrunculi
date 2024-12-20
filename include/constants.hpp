#ifndef LATRUNCULI_CONSTANTS_H
#define LATRUNCULI_CONSTANTS_H

#include <array>
#include <sstream>
#include <string>
#include <vector>

#include "types.hpp"

const auto STARTFEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1",
           POS2 = "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1",
           POS3 = "8/2p5/3p4/KP5r/1R3p1k/8/4P1P1/8 w - - 0 1",
           POS4W = "r3k2r/Pppp1ppp/1b3nbN/nP6/BBP1P3/q4N2/Pp1P2PP/R2Q1RK1 w kq - 0 1",
           POS4B = "r2q1rk1/pP1p2pp/Q4n2/bbp1p3/Np6/1B3NBn/pPPP1PPP/R3K2R b KQ - 0 1",
           POS5 = "rnbq1k1r/pp1Pbppp/2p5/8/2B5/8/PPP1NnPP/RNBQK2R w KQ - 1 8";

const std::string FENS[6] = {STARTFEN, POS2, POS3, POS4W, POS4B, POS5};

const auto EMPTYFEN = "4k3/8/8/8/8/8/8/4K3 w - - 0 1",
           E2PAWN = "4k3/8/8/8/8/8/4P3/4K3 w - - 0 1",
           E4PAWN = "4k3/8/8/8/4P3/8/8/4K3 w - - 0 1",
           A3ENPASSANT = "4k3/8/8/8/Pp6/8/8/4K3 b - a3 0 1",
           A7PAWN = "4k3/P7/8/8/8/8/8/4K3 w - - 0 1",
           BLACKMOVE = "4k3/8/8/8/8/8/8/4K3 b - - 0 1";

const Square KingOrigin[2] = {E8, E1};
const Square KingDestinationOO[2] = {G8, G1};
const Square KingDestinationOOO[2] = {C8, C1};
const Square RookOriginOO[2] = {H8, H1};
const Square RookOriginOOO[2] = {A8, A1};

#endif
