
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int* VAR_1 ;

void FUNC_1 (void) {
  int VAR_2;
  for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
    VAR_1[FUNC_0(VAR_0[VAR_2])] = 1;
  }
}
