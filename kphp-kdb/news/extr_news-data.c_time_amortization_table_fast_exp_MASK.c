
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* hi_exp; double* lo_exp; int c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 double FUNC_0 (int) ;

__attribute__((used)) static inline double FUNC_1 (int VAR_4) {
  return (VAR_4 < VAR_0 * VAR_0) ?
          VAR_3.hi_exp[VAR_4 >> VAR_1] * VAR_3.lo_exp[VAR_4 & VAR_2] :
          FUNC_0 (VAR_3.c * VAR_4);
}
