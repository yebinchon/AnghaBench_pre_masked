
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ areanum; } ;
struct TYPE_8__ {TYPE_2__ altroutegoal; scalar_t__ reachedaltroutegoal_time; int tfl; int origin; int areanum; } ;
typedef TYPE_1__ bot_state_t ;
typedef TYPE_2__ bot_goal_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;

bot_goal_t *FUNC_3(bot_state_t *VAR_0, bot_goal_t *VAR_1) {
 int VAR_2;


 if (VAR_0->altroutegoal.areanum) {

  if (VAR_0->reachedaltroutegoal_time)
   return VAR_1;

  VAR_2 = FUNC_2(VAR_0->areanum, VAR_0->origin, VAR_0->altroutegoal.areanum, VAR_0->tfl);
  if (VAR_2 && VAR_2 < 20) {

   VAR_0->reachedaltroutegoal_time = FUNC_0();
  }
  FUNC_1(VAR_1, &VAR_0->altroutegoal, sizeof(bot_goal_t));
  return &VAR_0->altroutegoal;
 }
 return VAR_1;
}
