
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (char *VAR_0, char **VAR_1) {
  int VAR_2, VAR_3 = 0;

  for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
    if (*VAR_0 < 'A' || *VAR_0 > 'Z') {
      break;
    }
    VAR_3 = VAR_3 * 27 + (*VAR_0 - 'A') + 1;
    ++VAR_0;
  }

  *VAR_1 = VAR_0;
  return VAR_3;
}
