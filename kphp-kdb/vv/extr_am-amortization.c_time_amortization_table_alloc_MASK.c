
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcnt; int c; int T; double* hi_exp; double* lo_exp; } ;
typedef TYPE_1__ time_amortization_table_t ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

time_amortization_table_t *FUNC_2 (int VAR_2) {
  int VAR_3;
  time_amortization_table_t *VAR_4 = FUNC_1 (sizeof (time_amortization_table_t));
  VAR_4->refcnt = 1;
  VAR_4->c = -(VAR_1 / VAR_2);
  VAR_4->T = VAR_2;
  const double VAR_5 = FUNC_0 (VAR_4->c * VAR_0), VAR_6 = FUNC_0 (VAR_4->c);
  VAR_4->hi_exp[0] = VAR_4->lo_exp[0] = 1.0;
  for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
    VAR_4->hi_exp[VAR_3] = VAR_4->hi_exp[VAR_3-1] * VAR_5;
    VAR_4->lo_exp[VAR_3] = VAR_4->lo_exp[VAR_3-1] * VAR_6;
  }
  return VAR_4;
}
