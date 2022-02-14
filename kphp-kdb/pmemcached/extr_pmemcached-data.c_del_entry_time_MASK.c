
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_time; struct TYPE_4__* prev_time; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (hash_entry_t *VAR_0) {
  FUNC_0 (VAR_0);


  FUNC_0 (VAR_0->prev_time);
  FUNC_0 (VAR_0->next_time);
  VAR_0->next_time->prev_time = VAR_0->prev_time;
  VAR_0->prev_time->next_time = VAR_0->next_time;
}
