
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (char *VAR_0, int *VAR_1) {
  int VAR_2;
  *VAR_1 = 0;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
    if ('0' <= VAR_0[VAR_2] && VAR_0[VAR_2] <= '9') {
      *VAR_1 = (*VAR_1) * 16 + VAR_0[VAR_2] - '0';
    } else if ('a' <= VAR_0[VAR_2] && VAR_0[VAR_2] <= 'f') {
      *VAR_1 = (*VAR_1) * 16 + VAR_0[VAR_2] - 'a' + 10;
    } else {
      return 0;
    }
  }
  return 1;
}
