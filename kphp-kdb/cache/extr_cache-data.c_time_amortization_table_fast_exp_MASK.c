
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct time_amortization_table {double* hi_exp; double* lo_exp; int c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (int) ;

inline double FUNC_1 (struct time_amortization_table *VAR_3, int VAR_4) {
  return (VAR_4 < VAR_0 * VAR_0) ?
          VAR_3->hi_exp[VAR_4 >> VAR_1] * VAR_3->lo_exp[VAR_4 & VAR_2] :
          FUNC_0 (VAR_3->c * VAR_4);
}
