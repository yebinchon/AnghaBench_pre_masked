
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int goal; } ;
typedef TYPE_1__ bot_waypoint_t ;
struct TYPE_6__ {int checkpoints; } ;
typedef TYPE_2__ bot_state_t ;
typedef int bot_goal_t ;


 TYPE_1__* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(bot_state_t *VAR_2, char *VAR_3, bot_goal_t *VAR_4) {
 bot_waypoint_t *VAR_5;

 if (FUNC_1(VAR_3, VAR_4)) return VAR_1;

 VAR_5 = FUNC_0(VAR_2->checkpoints, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4, &VAR_5->goal, sizeof(bot_goal_t));
  return VAR_1;
 }
 return VAR_0;
}
