
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0 (char *VAR_0, char *VAR_1) {
  while (1) {
    while (VAR_0 < VAR_1 && (*VAR_0 == ' ' || *VAR_0 == 9 || *VAR_0 == 13 || *VAR_0 == 10)) {
      VAR_0++;
    }
    if (VAR_0 + 2 <= VAR_1 && VAR_0[0] == '*' && VAR_0[1] == '/') {
      VAR_0 += 2;
      continue;
    }
    if (VAR_0 + 2 > VAR_1 || VAR_0[0] != '/' || VAR_0[1] != '*') {
      break;
    }
    VAR_0 += 2;
    if (VAR_0 < VAR_1 && (VAR_0[0] == '!' || VAR_0[0] == '?')) {
      VAR_0++;
      continue;
    }
    while (VAR_0 + 2 <= VAR_1 && (VAR_0[0] != '*' || VAR_0[1] != '/')) {
      VAR_0++;
    }
    if (VAR_0 + 2 > VAR_1) {
      return VAR_1;
    }
    VAR_0 += 2;
  }
  return VAR_0;
}
