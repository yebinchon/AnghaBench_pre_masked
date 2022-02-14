
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1 (char *VAR_1, char **VAR_2) {
  int VAR_3 = 0;
  while (VAR_0) {
    int VAR_4 = 0;
    while (!VAR_4 && *VAR_1 && FUNC_0 (*VAR_1)) {
      if (*VAR_1 == '\t') {
        VAR_4 = 1;
      }
      *VAR_1++ = 0;
    }
    if (!*VAR_1 || VAR_3 == 5) {
      break;
    }
    VAR_2[VAR_3++] = VAR_1;
    while (*VAR_1 && !FUNC_0 (*VAR_1)) {
      VAR_1++;
    }
  }
  return (VAR_3 == 5) && (*VAR_1 == 0);
}
