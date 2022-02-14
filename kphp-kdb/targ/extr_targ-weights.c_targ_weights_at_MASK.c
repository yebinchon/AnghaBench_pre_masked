
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relaxation_time; double* values; } ;
typedef TYPE_1__ targ_weights_vector_t ;


 int * VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ,int const) ;
 int VAR_2 ;

double FUNC_1 (targ_weights_vector_t *VAR_3, int VAR_4) {
  if (VAR_3 == ((void*)0) || VAR_4 < 0 || VAR_4 >= VAR_2 || VAR_0 == ((void*)0)) {
    return 0.0;
  }
  const int VAR_5 = VAR_1 - VAR_3->relaxation_time;
  double VAR_6 = VAR_3->values[VAR_4];
  if (VAR_5 > 0) {
    VAR_6 *= FUNC_0 (VAR_0[VAR_4], VAR_5);
  }
  return VAR_6;
}
