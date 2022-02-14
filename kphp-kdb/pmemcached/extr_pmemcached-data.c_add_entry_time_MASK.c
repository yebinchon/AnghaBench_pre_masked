
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ exp_time; struct TYPE_5__* prev_time; struct TYPE_5__* next_time; } ;
typedef TYPE_1__ hash_entry_t ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;

void FUNC_2 (hash_entry_t *VAR_2) {
  FUNC_1 (VAR_2);

  if (VAR_2->exp_time >=0) {
    int VAR_3 = VAR_1[FUNC_0 (VAR_2->exp_time)];
    hash_entry_t *VAR_4 = &VAR_0[VAR_3];
    FUNC_1 (VAR_4->next_time);
    FUNC_1 (VAR_4->prev_time);
    VAR_2->next_time = VAR_4;
    VAR_2->prev_time = VAR_4->prev_time;
    VAR_2->next_time->prev_time = VAR_2;
    VAR_2->prev_time->next_time = VAR_2;
    FUNC_1 (VAR_4->next_time);
    FUNC_1 (VAR_4->prev_time);
  } else {
    VAR_2->next_time = VAR_2;
    VAR_2->prev_time = VAR_2;
  }
}
