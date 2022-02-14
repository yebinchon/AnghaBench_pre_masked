
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int,char const*) ;

int FUNC_1 (const char *VAR_1) {
  static int VAR_2 = 0;
  int VAR_3 = 0, VAR_4 = 0;
  int VAR_5 = (unsigned char) *VAR_1;
  if (VAR_0[VAR_5] & 0x40) {
    if (VAR_5 == '*') {
      VAR_2 = 1;
    }
    int VAR_6 = FUNC_0 (VAR_5, VAR_1 + 1);
    if (VAR_5 == '*') {
      VAR_2 = 0;
    }
    if (VAR_6 >= 0 && VAR_6 < 127) {
      return VAR_6 + 1;
    }
  }
  while (VAR_3 <= 120) {
    VAR_5 = (unsigned char) *VAR_1;
    if (VAR_5 >= 0xc2 && VAR_5 <= 0xdf && (signed char) VAR_1[1] < -0x40) {
      VAR_5 = ((VAR_5 & 0x1f) << 6) | (VAR_1[1] & 0x3f);
      if (VAR_0[VAR_5] & 8) {
 VAR_1 += 2;
 VAR_3 += 2;
 if (VAR_3 >= 126) {
   break;
 }
      } else {
 break;
      }
    } else if (VAR_0[VAR_5] & 8) {
      VAR_1++;
      if (++VAR_3 == 126) {
 break;
      }
    } else if (VAR_0[VAR_5] & 4) {
      if (VAR_4 == (VAR_2 ? 30 : 4)) {
 break;
      }
      VAR_1++;
      VAR_4++;
      VAR_3++;
      break;
    } else {
      break;
    }
  }
  return VAR_3;
}
