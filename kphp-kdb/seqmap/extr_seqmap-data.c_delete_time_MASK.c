
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct item {TYPE_1__* prev_time; TYPE_1__* next_time; } ;
struct TYPE_2__ {struct TYPE_2__* next_time; struct TYPE_2__* prev_time; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (struct item *VAR_0) {
  if (!VAR_0->next_time) { return; }
  FUNC_0 (VAR_0->prev_time);
  VAR_0->next_time->prev_time = VAR_0->prev_time;
  VAR_0->prev_time->next_time = VAR_0->next_time;
  VAR_0->next_time = VAR_0->prev_time = 0;
}
