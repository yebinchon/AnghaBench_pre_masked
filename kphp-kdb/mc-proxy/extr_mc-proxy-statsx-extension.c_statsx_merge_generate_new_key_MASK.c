
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;

int FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2, void *VAR_3) {
  int VAR_4;
  if (VAR_1[0] == '%') {
    VAR_4 = FUNC_0 (VAR_0, "%s", VAR_1);
  } else {
    VAR_4 = FUNC_0 (VAR_0, "%%%s", VAR_1);
  }
  if (VAR_0[VAR_4 - 1] == '!') {
    VAR_0[--VAR_4] = 0;
  }
  return VAR_4;
}
