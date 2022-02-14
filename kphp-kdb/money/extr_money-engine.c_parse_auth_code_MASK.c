
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (char *VAR_0) {
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
    if ((VAR_0[VAR_1] < 'a' && VAR_0[VAR_1] > '9') || VAR_0[VAR_1] < '0' || VAR_0[VAR_1] > 'f') {
      return 0;
    }
  }

  return 32;
}
