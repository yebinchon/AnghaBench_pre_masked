
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int counters_mask; } ;
typedef TYPE_1__ weights_vector_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ weights_counters_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static weights_counters_t *FUNC_2 (weights_vector_t *VAR_1, weights_counters_t *VAR_2, weights_counters_t *VAR_3, int VAR_4) {
  VAR_0++;
  weights_counters_t *VAR_5 = FUNC_1 (sizeof (weights_counters_t));
  VAR_5->next = VAR_3;
  FUNC_0 (VAR_2);
  VAR_2->next = VAR_5;
  VAR_1->counters_mask |= 1 << VAR_4;
  return VAR_5;
}
