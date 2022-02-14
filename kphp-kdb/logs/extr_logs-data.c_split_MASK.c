
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1 (char *VAR_0, char **VAR_1, int *VAR_2, int VAR_3) {
  int VAR_4 = 0;
  int VAR_5 = 0;
  int VAR_6 = 0;


  *VAR_2 = 0;
  if (VAR_5 < VAR_3) {VAR_1[VAR_5++] = VAR_0;} else {*VAR_2 = 0; return;};
  while (*VAR_0) {
    if (*VAR_0 == '\'') {
      VAR_6 ^= 1;
    } else if (*VAR_0 == '(') {
      if (!VAR_6) {
        VAR_4++;
      }
    } else if (*VAR_0 == ')') {
      if (!VAR_6) {
        VAR_4--;
      }
    } else if (*VAR_0 == ',' && VAR_4 == 0 && !VAR_6) {
      *VAR_0 = 0;
      if (VAR_5 < VAR_3) {VAR_1[VAR_5++] = VAR_0 + 1;} else {*VAR_2 = 0; return;};
    }
    VAR_0++;
  }

  *VAR_2 = VAR_5;

}
