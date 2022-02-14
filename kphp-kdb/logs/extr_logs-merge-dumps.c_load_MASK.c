
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int * VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;

int FUNC_3 (int VAR_6) {
  if (VAR_5[VAR_6] <= 0) {
    FUNC_0 (VAR_5[VAR_6] == 0);
    return -1;
  }
  if (VAR_2[VAR_6] < VAR_3[VAR_6]) {

    FUNC_0 (VAR_2[VAR_6] > VAR_3[VAR_6] - VAR_2[VAR_6]);
    FUNC_1 (VAR_1[VAR_6], VAR_1[VAR_6] + VAR_2[VAR_6], VAR_3[VAR_6] - VAR_2[VAR_6]);
  }
  VAR_3[VAR_6] -= VAR_2[VAR_6];
  VAR_2[VAR_6] = 0;
  FUNC_0 (0 <= VAR_3[VAR_6]);

  int VAR_7 = VAR_0 - VAR_3[VAR_6];
  if (VAR_5[VAR_6] < VAR_7) {
    VAR_7 = VAR_5[VAR_6];
  }


  FUNC_0 (FUNC_2 (VAR_4[VAR_6], VAR_1[VAR_6] + VAR_3[VAR_6], VAR_7) == VAR_7);
  VAR_3[VAR_6] += VAR_7;
  VAR_5[VAR_6] -= VAR_7;

  return 1;
}
