
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1 (char *VAR_3) {
  VAR_2 = 0;
  while (VAR_0) {
    int VAR_4 = 0;
    while (!VAR_4 && *VAR_3 && FUNC_0 (*VAR_3)) {
      if (*VAR_3 == '\t') {
        VAR_4 = 1;
      }
      *VAR_3++ = 0;
    }
    if (!*VAR_3) {
      break;
    }
    VAR_1[VAR_2++] = VAR_3;
    while (*VAR_3 && !FUNC_0 (*VAR_3)) {
      VAR_3++;
    }
  }
}
