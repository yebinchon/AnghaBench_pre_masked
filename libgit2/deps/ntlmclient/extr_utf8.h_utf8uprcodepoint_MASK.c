
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_int32_t ;



utf8_int32_t FUNC_0(utf8_int32_t VAR_0) {
  if (((0x0061 <= VAR_0) && (0x007a >= VAR_0)) ||
      ((0x00e0 <= VAR_0) && (0x00f6 >= VAR_0)) ||
      ((0x00f8 <= VAR_0) && (0x00fe >= VAR_0)) ||
      ((0x03b1 <= VAR_0) && (0x03c1 >= VAR_0)) ||
      ((0x03c3 <= VAR_0) && (0x03cb >= VAR_0))) {
    VAR_0 -= 32;
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
    VAR_0 &= ~0x1;
  } else if (((0x0139 <= VAR_0) && (0x0148 >= VAR_0)) ||
             ((0x0179 <= VAR_0) && (0x017e >= VAR_0)) ||
             ((0x01af <= VAR_0) && (0x01b0 >= VAR_0)) ||
             ((0x01b3 <= VAR_0) && (0x01b6 >= VAR_0)) ||
             ((0x01cd <= VAR_0) && (0x01dc >= VAR_0))) {
    VAR_0 -= 1;
    VAR_0 |= 0x1;
  } else {
    switch (VAR_0) {
    default: break;
    case 0x00ff: VAR_0 = 0x0178; break;
    case 0x0180: VAR_0 = 0x0243; break;
    case 0x01dd: VAR_0 = 0x018e; break;
    case 0x019a: VAR_0 = 0x023d; break;
    case 0x019e: VAR_0 = 0x0220; break;
    case 0x0292: VAR_0 = 0x01b7; break;
    case 0x01c6: VAR_0 = 0x01c4; break;
    case 0x01c9: VAR_0 = 0x01c7; break;
    case 0x01cc: VAR_0 = 0x01ca; break;
    case 0x01f3: VAR_0 = 0x01f1; break;
    case 0x01bf: VAR_0 = 0x01f7; break;
    case 0x0188: VAR_0 = 0x0187; break;
    case 0x018c: VAR_0 = 0x018b; break;
    case 0x0192: VAR_0 = 0x0191; break;
    case 0x0199: VAR_0 = 0x0198; break;
    case 0x01a8: VAR_0 = 0x01a7; break;
    case 0x01ad: VAR_0 = 0x01ac; break;
    case 0x01b0: VAR_0 = 0x01af; break;
    case 0x01b9: VAR_0 = 0x01b8; break;
    case 0x01bd: VAR_0 = 0x01bc; break;
    case 0x01f5: VAR_0 = 0x01f4; break;
    case 0x023c: VAR_0 = 0x023b; break;
    case 0x0242: VAR_0 = 0x0241; break;
    case 0x037b: VAR_0 = 0x03fd; break;
    case 0x037c: VAR_0 = 0x03fe; break;
    case 0x037d: VAR_0 = 0x03ff; break;
    case 0x03f3: VAR_0 = 0x037f; break;
    case 0x03ac: VAR_0 = 0x0386; break;
    case 0x03ad: VAR_0 = 0x0388; break;
    case 0x03ae: VAR_0 = 0x0389; break;
    case 0x03af: VAR_0 = 0x038a; break;
    case 0x03cc: VAR_0 = 0x038c; break;
    case 0x03cd: VAR_0 = 0x038e; break;
    case 0x03ce: VAR_0 = 0x038f; break;
    case 0x0371: VAR_0 = 0x0370; break;
    case 0x0373: VAR_0 = 0x0372; break;
    case 0x0377: VAR_0 = 0x0376; break;
    case 0x03d1: VAR_0 = 0x03f4; break;
    case 0x03d7: VAR_0 = 0x03cf; break;
    case 0x03f2: VAR_0 = 0x03f9; break;
    case 0x03f8: VAR_0 = 0x03f7; break;
    case 0x03fb: VAR_0 = 0x03fa; break;
    };
  }

  return VAR_0;
}
