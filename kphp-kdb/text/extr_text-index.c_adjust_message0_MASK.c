
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3 (int VAR_4, int VAR_5, int VAR_6, int VAR_7, int *VAR_8) {
  int VAR_9 = FUNC_1 (VAR_4);
  if (VAR_9 < 0 || VAR_5 <= 0) {
    VAR_3++;
    return;
  }
  VAR_0[VAR_9]++;
  if (VAR_8) {
    FUNC_0 (!(VAR_6 & ~VAR_2) && VAR_6);
    VAR_1[VAR_9] += FUNC_2 (VAR_6 & VAR_2);
  }
}
