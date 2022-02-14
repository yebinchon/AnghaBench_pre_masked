
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vector_id; int counters_mask; struct TYPE_7__* hnext; } ;
typedef TYPE_1__ weights_vector_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;

weights_vector_t *FUNC_3 (int VAR_4, int VAR_5) {
  const int VAR_6 = VAR_4 % VAR_3;
  weights_vector_t **VAR_7 = &VAR_0[VAR_6], *VAR_8;
  while (*VAR_7) {
    VAR_8 = *VAR_7;
    if (VAR_8->vector_id == VAR_4) {
      *VAR_7 = VAR_8->hnext;
      if (VAR_5 >= 0) {
        VAR_8->hnext = VAR_0[VAR_6];
        VAR_0[VAR_6] = VAR_8;
      } else {
        FUNC_1 (VAR_8);
      }
      return VAR_8;
    }
    VAR_7 = &VAR_8->hnext;
  }
  if (VAR_5 > 0) {
    VAR_2++;
    VAR_1++;
    VAR_8 = FUNC_2 (sizeof (weights_vector_t));
    VAR_8->counters_mask = 1;
    VAR_8->vector_id = VAR_4;
    VAR_8->hnext = VAR_0[VAR_6];
    FUNC_0 (VAR_8);
    return VAR_0[VAR_6] = VAR_8;
  }
  return ((void*)0);
}
