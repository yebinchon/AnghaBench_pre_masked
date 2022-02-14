
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 size_t VAR_1 ;

int FUNC_1 (void) {
  if (VAR_0[VAR_1] == ',') {
    VAR_1 ++;
  }
  while (VAR_0[VAR_1] == ' ') {
    VAR_1 ++;
  }
  FUNC_0 (VAR_0[VAR_1 ++] == '"');
  int VAR_2 = 0;
  while (VAR_0[VAR_1 ++] != '"') {
    FUNC_0 (VAR_0[VAR_1]);
    VAR_2++;
  }
  FUNC_0 (!VAR_0[VAR_1] || VAR_0[VAR_1] == ',' || VAR_0[VAR_1] == 10 || VAR_0[VAR_1] == 13);
  return VAR_2 + 1;
}
