
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

char *FUNC_2 (char *VAR_2) {
  if (FUNC_0 (VAR_2) >= VAR_0) {
    return VAR_2;
  }

  char *VAR_3 = VAR_1;
  int VAR_4;

  while (*VAR_2 != 0) {
    VAR_4 = !FUNC_1 (VAR_2, "amp+", 4) ||
           !FUNC_1 (VAR_2, "gt+", 3) ||
           !FUNC_1 (VAR_2, "lt+", 3) ||
           !FUNC_1 (VAR_2, "quot+", 5) ||
           !FUNC_1 (VAR_2, "ft+", 3) ||
           !FUNC_1 (VAR_2, "feat+", 5) ||
           (((VAR_2[0] == '1' && VAR_2[1] == '9') || (VAR_2[0] == '2' && VAR_2[1] == '0')) && ('0' <= VAR_2[2] && VAR_2[2] <= '9') && ('0' <= VAR_2[3] && VAR_2[3] <= '9') && VAR_2[4] == '+') ||
           !FUNC_1 (VAR_2, "092+", 4) ||
           !FUNC_1 (VAR_2, "33+", 3) ||
           !FUNC_1 (VAR_2, "34+", 3) ||
           !FUNC_1 (VAR_2, "36+", 3) ||
           !FUNC_1 (VAR_2, "39+", 3) ||
           !FUNC_1 (VAR_2, "60+", 3) ||
           !FUNC_1 (VAR_2, "62+", 3) ||
           !FUNC_1 (VAR_2, "8232+", 5) ||
           !FUNC_1 (VAR_2, "8233+", 5);
    do {
      *VAR_3 = *VAR_2;
      if (!VAR_4) {
        VAR_3++;
      }
    } while (*VAR_2++ != '+');
  }
  *VAR_3 = 0;

  return VAR_1;
}
