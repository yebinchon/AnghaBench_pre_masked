
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0 (const char *VAR_0, int *VAR_1, const char *VAR_2) {
  int VAR_3, VAR_4 = 0;
  for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++) {
    while (VAR_4 && VAR_0[VAR_4] != VAR_2[VAR_3]) {
      VAR_4 = VAR_1[VAR_4];
    }
    if (VAR_0[VAR_4] == VAR_2[VAR_3]) {
      VAR_4++;
    }

    if (!VAR_0[VAR_4]) {
      return (char *)(VAR_2 + VAR_3 - VAR_4 + 1);
    }
  }
  return ((void*)0);
}
