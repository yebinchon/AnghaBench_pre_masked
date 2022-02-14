
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_int32_t ;



utf8_int32_t FUNC_0(utf8_int32_t VAR_0) {
  if (((0x0041 <= VAR_0) && (0x005a >= VAR_0)) ||
      ((0x00c0 <= VAR_0) && (0x00d6 >= VAR_0)) ||
      ((0x00d8 <= VAR_0) && (0x00de >= VAR_0)) ||
      ((0x0391 <= VAR_0) && (0x03a1 >= VAR_0)) ||
      ((0x03a3 <= VAR_0) && (0x03ab >= VAR_0))) {
    VAR_0 += 32;
  } else if (((0x0100 <= VAR_0) && (0x012f >= VAR_0)) ||
             ((0x0132 <= VAR_0) && (0x0137 >= VAR_0)) ||
             ((0x014a <= VAR_0) && (0x0177 >= VAR_0)) ||
             ((0x0182 <= VAR_0) && (0x0185 >= VAR_0)) ||
             ((0x01a0 <= VAR_0) && (0x01a5 >= VAR_0)) ||
             ((0x01de <= VAR_0) && (0x01ef >= VAR_0)) ||
             ((0x01f8 <= VAR_0) && (0x021f >= VAR_0)) ||
             ((0x0222 <= VAR_0) && (0x0233 >= VAR_0)) ||
             ((0x0246 <= VAR_0) && (0x024f >= VAR_0)) ||
             ((0x03d8 <= VAR_0) && (0x03ef >= VAR_0))) {
    VAR_0 |= 0x1;
  } else if (((0x0139 <= VAR_0) && (0x0148 >= VAR_0)) ||
             ((0x0179 <= VAR_0) && (0x017e >= VAR_0)) ||
             ((0x01af <= VAR_0) && (0x01b0 >= VAR_0)) ||
             ((0x01b3 <= VAR_0) && (0x01b6 >= VAR_0)) ||
             ((0x01cd <= VAR_0) && (0x01dc >= VAR_0))) {
    VAR_0 += 1;
    VAR_0 &= ~0x1;
  } else {
    switch (VAR_0) {
    default: break;
    case 0x0178: VAR_0 = 0x00ff; break;
    case 0x0243: VAR_0 = 0x0180; break;
    case 0x018e: VAR_0 = 0x01dd; break;
    case 0x023d: VAR_0 = 0x019a; break;
    case 0x0220: VAR_0 = 0x019e; break;
    case 0x01b7: VAR_0 = 0x0292; break;
    case 0x01c4: VAR_0 = 0x01c6; break;
    case 0x01c7: VAR_0 = 0x01c9; break;
    case 0x01ca: VAR_0 = 0x01cc; break;
    case 0x01f1: VAR_0 = 0x01f3; break;
    case 0x01f7: VAR_0 = 0x01bf; break;
    case 0x0187: VAR_0 = 0x0188; break;
    case 0x018b: VAR_0 = 0x018c; break;
    case 0x0191: VAR_0 = 0x0192; break;
    case 0x0198: VAR_0 = 0x0199; break;
    case 0x01a7: VAR_0 = 0x01a8; break;
    case 0x01ac: VAR_0 = 0x01ad; break;
    case 0x01af: VAR_0 = 0x01b0; break;
    case 0x01b8: VAR_0 = 0x01b9; break;
    case 0x01bc: VAR_0 = 0x01bd; break;
    case 0x01f4: VAR_0 = 0x01f5; break;
    case 0x023b: VAR_0 = 0x023c; break;
    case 0x0241: VAR_0 = 0x0242; break;
    case 0x03fd: VAR_0 = 0x037b; break;
    case 0x03fe: VAR_0 = 0x037c; break;
    case 0x03ff: VAR_0 = 0x037d; break;
    case 0x037f: VAR_0 = 0x03f3; break;
    case 0x0386: VAR_0 = 0x03ac; break;
    case 0x0388: VAR_0 = 0x03ad; break;
    case 0x0389: VAR_0 = 0x03ae; break;
    case 0x038a: VAR_0 = 0x03af; break;
    case 0x038c: VAR_0 = 0x03cc; break;
    case 0x038e: VAR_0 = 0x03cd; break;
    case 0x038f: VAR_0 = 0x03ce; break;
    case 0x0370: VAR_0 = 0x0371; break;
    case 0x0372: VAR_0 = 0x0373; break;
    case 0x0376: VAR_0 = 0x0377; break;
    case 0x03f4: VAR_0 = 0x03d1; break;
    case 0x03cf: VAR_0 = 0x03d7; break;
    case 0x03f9: VAR_0 = 0x03f2; break;
    case 0x03f7: VAR_0 = 0x03f8; break;
    case 0x03fa: VAR_0 = 0x03fb; break;
    };
  }

  return VAR_0;
}
