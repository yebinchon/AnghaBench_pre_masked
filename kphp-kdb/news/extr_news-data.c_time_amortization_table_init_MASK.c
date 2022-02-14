
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int T; int c; double* hi_exp; double* lo_exp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 double FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (int VAR_3) {
  int VAR_4;
  if (VAR_2.T == VAR_3) { return; }
  VAR_2.c = -(VAR_1 / VAR_3);
  VAR_2.T = VAR_3;
  double VAR_5 = FUNC_0 (VAR_2.c * VAR_0);
  double VAR_6 = FUNC_0 (VAR_2.c);
  VAR_2.hi_exp[0] = VAR_2.lo_exp[0] = 1.0;
  for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
    VAR_2.hi_exp[VAR_4] = VAR_2.hi_exp[VAR_4-1] * VAR_5;
    VAR_2.lo_exp[VAR_4] = VAR_2.lo_exp[VAR_4-1] * VAR_6;
  }
}
