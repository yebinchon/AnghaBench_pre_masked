
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int * values; } ;
struct TYPE_6__ {void* relaxation_time; int counters_mask; TYPE_2__ head; } ;
typedef TYPE_1__ weights_vector_t ;
typedef TYPE_2__ weights_counters_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 void* VAR_1 ;
 int FUNC_4 (int ,int const) ;

__attribute__((used)) static void FUNC_5 (weights_vector_t *VAR_2) {
  const int VAR_3 = VAR_1 - VAR_2->relaxation_time;
  if (VAR_3 < 0) {
    return;
  }
  if (VAR_3 > 0) {
    weights_counters_t *VAR_4 = &VAR_2->head;
    int VAR_5 = VAR_2->counters_mask;
    do {
      int VAR_6 = FUNC_3 (VAR_5) - 1;
      VAR_5 ^= 1 << VAR_6;
      VAR_6 *= 32;
      int VAR_7;
      for (VAR_7 = 0; VAR_7 < 32; VAR_7++, VAR_6++) {
        VAR_4->values[VAR_7] *= FUNC_4 (VAR_0[VAR_6], VAR_3);
      }
      VAR_4 = VAR_4->next;
    } while (VAR_4);
    FUNC_1 (!VAR_5);
    VAR_2->relaxation_time = VAR_1;
  }
  FUNC_2 (VAR_2);
  FUNC_0 (VAR_2);
}
