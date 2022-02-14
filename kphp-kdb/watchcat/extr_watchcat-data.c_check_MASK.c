
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int FUNC_0 (long long *VAR_0, int VAR_1, long long *VAR_2, int VAR_3) {
  int VAR_4, VAR_5;

  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1; VAR_4++) {
    while (VAR_5 + 1 < VAR_3 && VAR_2[VAR_5] < VAR_0[VAR_4]) {
      VAR_5++;
    }
    if (VAR_2[VAR_5] != VAR_0[VAR_4]) {
      return 0;
    }
  }
  return 1;
}
