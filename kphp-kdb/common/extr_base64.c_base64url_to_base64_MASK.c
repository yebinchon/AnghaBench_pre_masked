
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int FUNC_1 (const char *const VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = 0;
  while (VAR_0[VAR_3] && VAR_3 < VAR_2) {
    if (VAR_0[VAR_3] == '-') {
      VAR_1[VAR_3] = '+';
    } else if (VAR_0[VAR_3] == '_') {
      VAR_1[VAR_3] = '/';
    } else {
      VAR_1[VAR_3] = VAR_0[VAR_3];
    }
    VAR_3++;
  }
  if (((VAR_3 + 3) & -4) >= VAR_2) {
    return -1;
  }
  while (VAR_3 & 3) {
    VAR_1[VAR_3++] = '=';
  }
  VAR_1[VAR_3] = 0;
  FUNC_0 (VAR_3 < VAR_2);
  return 0;
}
