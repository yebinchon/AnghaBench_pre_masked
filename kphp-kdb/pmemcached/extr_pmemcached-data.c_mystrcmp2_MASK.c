
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
  while (VAR_4 < VAR_1 && VAR_4 < VAR_3) {
    if (VAR_0[VAR_4] < VAR_2[VAR_4]) {
      return -VAR_4 - 1;
    }
    if (VAR_0[VAR_4] > VAR_2[VAR_4]) {
      return VAR_4 + 1;
    }
    VAR_4++;
  }
  if (VAR_1 < VAR_3) {
    return -VAR_4 - 1;
  }
  if (VAR_1 > VAR_3) {
    return VAR_4 + 1;
  }
  return 0;
}
