
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int counters_mask; TYPE_2__ head; } ;
typedef TYPE_1__ weights_vector_t ;
typedef TYPE_2__ weights_counters_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static weights_counters_t *FUNC_2 (weights_vector_t *VAR_0, int VAR_1) {
  const int VAR_2 = VAR_1 >> 5;
  if (!(((int) VAR_0->counters_mask) & (1 << VAR_2))) {
    return ((void*)0);
  }
  int VAR_3 = VAR_0->counters_mask;
  weights_counters_t *VAR_4 = &VAR_0->head;
  while (1) {
    FUNC_0 (VAR_3);
    int VAR_5 = FUNC_1 (VAR_3) - 1;
    if (VAR_5 == VAR_2) {
      return VAR_4;
    }
    VAR_3 ^= 1 << VAR_5;
    VAR_4 = VAR_4->next;
  }
  return ((void*)0);
}
