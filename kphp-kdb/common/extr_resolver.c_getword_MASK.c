
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static char *FUNC_1 (char **VAR_0, int *VAR_1) {
  char *VAR_2 = FUNC_0 (*VAR_0), *VAR_3 = VAR_2;

  while (*VAR_3 && *VAR_3 != ' ' && *VAR_3 != '\t' && *VAR_3 != '\n') {
    ++VAR_3;
  }

  *VAR_0 = VAR_3;
  *VAR_1 = VAR_3 - VAR_2;

  if (!*VAR_1) {
    return 0;
  }

  return VAR_2;
}
