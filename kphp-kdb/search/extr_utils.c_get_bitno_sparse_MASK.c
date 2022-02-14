
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1) {
  int VAR_2, VAR_3 = 1 << VAR_1;
  if (0 == (VAR_0 & VAR_3) ) return -1;
  for (VAR_2 = 0;;VAR_2++) {
    int VAR_4 = VAR_0 & (VAR_0 - 1);
    if (VAR_3 == (VAR_4 ^ VAR_0)) return VAR_2;
    VAR_0 = VAR_4;
  }
}
