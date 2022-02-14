
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int,scalar_t__,int) ;

void FUNC_2 (void) {
  int VAR_3, VAR_4;
  if (VAR_1[2] < VAR_2[2]) {
    VAR_4 = VAR_2[2] - VAR_1[2];
    VAR_3 = FUNC_1 (1, VAR_1[2], VAR_4);
    FUNC_0 (VAR_3 == VAR_4);
  }
  VAR_1[2] = VAR_2[2] = VAR_0[2];
}
