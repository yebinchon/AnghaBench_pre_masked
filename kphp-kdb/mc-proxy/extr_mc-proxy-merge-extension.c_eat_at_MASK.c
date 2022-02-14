
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (const char *VAR_0, int VAR_1) {
  if (!VAR_1) {
    return 0;
  }
  int VAR_2 = 0;
  if (VAR_0[VAR_2] == '-') {
    VAR_2++;
  }
  while (VAR_2 < VAR_1 && VAR_0[VAR_2] >= '0' && VAR_0[VAR_2] <= '9') {
    VAR_2++;
  }
  if (VAR_2 == VAR_1 || VAR_2 == 0 || VAR_0[VAR_2] != '@') {
    return 0;
  } else {
    VAR_2++;
    return VAR_2;
  }
}
