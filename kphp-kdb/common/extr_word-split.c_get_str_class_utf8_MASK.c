
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

int FUNC_0 (const char *VAR_1, int VAR_2) {
  int VAR_3 = -1;
  while (VAR_2 > 0) {
    int VAR_4 = (unsigned char) *VAR_1++;
    if (VAR_4 >= 0xc2 && VAR_4 < 0xe0 && VAR_2 > 1 && (signed char) *VAR_1 < -0x40) {
      VAR_4 = ((VAR_4 & 0x1f) << 6) | (*VAR_1++ & 0x3f);
      VAR_2 -= 2;
      VAR_3 &= VAR_0[VAR_4];
    } else if (VAR_4 < 0x80) {
      VAR_3 &= VAR_0[VAR_4];
      VAR_2--;
    } else {
      return 0;
    }
  }
  return VAR_3;
}
