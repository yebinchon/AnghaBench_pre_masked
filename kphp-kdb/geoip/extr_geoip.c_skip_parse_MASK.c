
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 size_t VAR_1 ;

int FUNC_0 (void) {
  int VAR_2 = 0;
  while (VAR_0[VAR_1] && VAR_0[VAR_1] != 10 && VAR_0[VAR_1] != 13) {
    if (VAR_0[VAR_1] == ',') {
      VAR_2 ++;
    }
    VAR_1 ++;
  }
  return VAR_2;
}
