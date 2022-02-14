
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (int VAR_0, int VAR_1[], int VAR_2) {
  int VAR_3 = -1, VAR_4 = VAR_2, VAR_5;
  while (VAR_4 - VAR_3 > 1) {
    VAR_5 = ((VAR_3 + VAR_4) >> 1);
    if (VAR_1[VAR_5] <= VAR_0) {
      VAR_3 = VAR_5;
    } else {
      VAR_4 = VAR_5;
    }
  }
  if (VAR_3 >= 0 && VAR_1[VAR_3] == VAR_0) {
    return VAR_3;
  } else {
    return -1;
  }
}
