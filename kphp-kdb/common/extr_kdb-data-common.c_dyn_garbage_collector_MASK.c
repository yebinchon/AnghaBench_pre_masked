
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

void FUNC_0 (void) {
  int VAR_4, VAR_5, VAR_6 = -1, VAR_7 = 0;
  for (VAR_4 = VAR_1 + 3; VAR_4 >= VAR_2; VAR_4--) {
    VAR_5 = VAR_0[VAR_4] * VAR_4;
    if (VAR_5 > VAR_6) {
      VAR_6 = VAR_5;
      VAR_7 = VAR_4;
    }
    VAR_3[VAR_4-VAR_2] = VAR_7;
  }
}
