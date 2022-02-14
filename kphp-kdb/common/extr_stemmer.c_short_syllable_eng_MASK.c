
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 scalar_t__* VAR_1 ;

int FUNC_0 (int *VAR_2, int VAR_3) {
  if (VAR_3 >= 2 && VAR_1[VAR_2[VAR_3 - 2]]) {
     if ((VAR_3 == 2 && !VAR_1[VAR_2[VAR_3 - 1]]) ||
                   (!VAR_1[VAR_2[VAR_3 - 3]] && !VAR_1[VAR_2[VAR_3 - 1]] && !VAR_0[VAR_2[VAR_3 - 1]])) {
       return 1;
     }
  }
  return 0;
}
