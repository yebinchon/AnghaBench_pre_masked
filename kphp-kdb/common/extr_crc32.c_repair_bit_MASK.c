
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (unsigned char *VAR_0, int VAR_1, int VAR_2) {
  if (VAR_2 < 0) {
    return -1;
  }
  int VAR_3 = VAR_2 >> 5, VAR_4 = VAR_2 & 31, VAR_5 = (VAR_1 - 1) - (VAR_3 - 1) * 4;
  while (VAR_4 >= 8) {
    VAR_5--;
    VAR_4 -= 8;
  }
  if (VAR_5 < 0) {
    return -2;
  }
  if (VAR_5 >= VAR_1) {
    return -3;
  }
  int VAR_6 = 7 - VAR_4;
  VAR_0[VAR_5] ^= 1 << VAR_6;
  return 0;
}
