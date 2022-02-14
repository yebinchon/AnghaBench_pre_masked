
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (char *VAR_0) {
  int VAR_1 = 0;
  char *VAR_2 = VAR_0;
  if (!*VAR_0 || *VAR_0 == '/' || *VAR_0 == '.') {
    return 0;
  }
  while (*VAR_2) {
    if (!(*VAR_2 == '/' || *VAR_2 == '.' || *VAR_2 == '-' || *VAR_2 == '_' || (*VAR_2 >= '0' && *VAR_2 <= '9') || (*VAR_2 >= 'a' && *VAR_2 <= 'z') || (*VAR_2 >= 'A' && *VAR_2 <= 'Z'))) {
      return 0;
    }
    if (*VAR_2 == '.' && (VAR_2[-1] == '.' || VAR_2[-1] == '/' || VAR_2[-1] == '_' || VAR_2[-1] == '-')) {
      return 0;
    }
    VAR_2++;
    VAR_1++;
  }
  if (VAR_1 >= 64 || VAR_2[-1] == '.' || VAR_2[-1] == '/') {
    return 0;
  }
  return 1;
}
