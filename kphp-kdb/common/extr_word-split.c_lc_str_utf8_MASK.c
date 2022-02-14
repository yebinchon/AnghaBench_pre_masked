
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;

void FUNC_0 (char *VAR_1, const char *VAR_2, int VAR_3) {
  while (VAR_3 > 0) {
    int VAR_4 = (unsigned char) *VAR_2++;
    if (VAR_4 >= 0xc2 && VAR_4 < 0xe0 && VAR_3 > 1 && (signed char) *VAR_2 < -0x40) {
      VAR_4 = ((VAR_4 & 0x1f) << 6) | (*VAR_2++ & 0x3f);
      int VAR_5 = VAR_0[VAR_4];
      *VAR_1++ = 0xc0 + (VAR_5 >> 6);
      *VAR_1++ = 0x80 + (VAR_5 & 0x3f);
      VAR_3 -= 2;
    } else if (VAR_4 < 0x80) {
      *VAR_1++ = VAR_0[VAR_4];
      VAR_3--;
    } else {
      *VAR_1++ = VAR_4;
      VAR_3--;
    }
  }
  *VAR_1 = 0;
}
