
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t next_time; size_t prev_time; } ;
typedef TYPE_1__ hash_entry_t ;


 TYPE_1__* VAR_0 ;

void FUNC_0 (int VAR_1) {
  hash_entry_t *VAR_2 = &VAR_0[VAR_1];
  VAR_0[VAR_2->next_time].prev_time = VAR_2->prev_time;
  VAR_0[VAR_2->prev_time].next_time = VAR_2->next_time;
}
