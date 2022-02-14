
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int* VAR_1 ;
 int ** VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5 (int VAR_6) {
  FUNC_0 (0 <= VAR_6 && VAR_6 < VAR_0);
  FUNC_0 (VAR_1[VAR_6] != -1);

  if (!VAR_4[VAR_6]) {
    FUNC_0 (FUNC_3 (VAR_1[VAR_6]) >= 0);
  } else {
    VAR_4[VAR_6] = 0;
  }
  FUNC_0 (FUNC_1 (VAR_1[VAR_6]) >= 0);
  VAR_1[VAR_6] = -1;

  VAR_5[VAR_6] = 0;
  VAR_3[VAR_6] = 0;
  FUNC_2 (VAR_2[VAR_6], FUNC_4 (VAR_2[VAR_6]) + 1);
  VAR_2[VAR_6] = ((void*)0);
}
