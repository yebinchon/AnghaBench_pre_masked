
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int teammate; int lastgoal_teammate; int teamgoal; int lastgoal_teamgoal; int ltgtype; int lastgoal_ltgtype; int decisionmaker; int lastgoal_decisionmaker; int ordered; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_goal_t ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(bot_state_t *VAR_0) {
 if (!VAR_0->ordered) {
  return;
 }
 VAR_0->lastgoal_decisionmaker = VAR_0->decisionmaker;
 VAR_0->lastgoal_ltgtype = VAR_0->ltgtype;
 FUNC_0(&VAR_0->lastgoal_teamgoal, &VAR_0->teamgoal, sizeof(bot_goal_t));
 VAR_0->lastgoal_teammate = VAR_0->teammate;
}
