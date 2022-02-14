
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* hi_exp; double* lo_exp; int c; } ;
typedef TYPE_1__ time_amortization_table_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (int) ;

extern inline double FUNC_1 (time_amortization_table_t *VAR_3, int VAR_4) {
  return (VAR_4 < VAR_0 * VAR_0) ?
          VAR_3->hi_exp[VAR_4 >> VAR_1] * VAR_3->lo_exp[VAR_4 & VAR_2] :
          FUNC_0 (VAR_3->c * VAR_4);
}
