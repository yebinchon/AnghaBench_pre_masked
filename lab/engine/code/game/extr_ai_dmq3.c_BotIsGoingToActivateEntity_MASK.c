
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* activategoalheap; TYPE_5__* activatestack; } ;
typedef TYPE_4__ bot_state_t ;
struct TYPE_9__ {int entitynum; } ;
struct TYPE_11__ {int time; TYPE_3__ goal; struct TYPE_11__* next; } ;
typedef TYPE_5__ bot_activategoal_t ;
struct TYPE_7__ {int entitynum; } ;
struct TYPE_8__ {int justused_time; TYPE_1__ goal; scalar_t__ inuse; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(bot_state_t *VAR_3, int VAR_4) {
 bot_activategoal_t *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3->activatestack; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->time < FUNC_0())
   continue;
  if (VAR_5->goal.entitynum == VAR_4)
   return VAR_2;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->activategoalheap[VAR_6].inuse)
   continue;

  if (VAR_3->activategoalheap[VAR_6].goal.entitynum == VAR_4) {

   if (VAR_3->activategoalheap[VAR_6].justused_time > FUNC_0() - 2)
    return VAR_2;
  }
 }
 return VAR_1;
}
