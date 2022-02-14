
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* activatestack; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_5__ {int inuse; struct TYPE_5__* next; int justused_time; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(bot_state_t *VAR_2) {
 if (!VAR_2->activatestack)
  return VAR_0;
 FUNC_0(VAR_2->activatestack, VAR_1);
 VAR_2->activatestack->inuse = VAR_0;
 VAR_2->activatestack->justused_time = FUNC_1();
 VAR_2->activatestack = VAR_2->activatestack->next;
 return VAR_1;
}
