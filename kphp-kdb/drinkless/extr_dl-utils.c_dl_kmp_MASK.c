
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (const char *VAR_0, int *VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }
  int VAR_2, VAR_3 = 0;
  VAR_1[0] = 0;
  for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
    while (VAR_3 && VAR_0[VAR_2] != VAR_0[VAR_3]) {
      VAR_3 = VAR_1[VAR_3];
    }
    if (VAR_2 != VAR_3 && VAR_0[VAR_2] == VAR_0[VAR_3]) {
      VAR_3++;
    }
    VAR_1[VAR_2 + 1] = VAR_3;
  }
}
