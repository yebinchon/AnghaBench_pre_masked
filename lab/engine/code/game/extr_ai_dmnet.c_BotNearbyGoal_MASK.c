
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int areanum; } ;
struct TYPE_9__ {int inventory; int origin; int gs; TYPE_1__ teamgoal; int areanum; } ;
typedef TYPE_2__ bot_state_t ;
typedef int bot_goal_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int *,float) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int,int *,float) ;

int FUNC_6(bot_state_t *VAR_2, int VAR_3, bot_goal_t *VAR_4, float VAR_5) {
 int VAR_6;


 if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5)) return VAR_1;

 if (FUNC_1(VAR_2)



  ) {

  if (FUNC_4(VAR_2->areanum, VAR_2->origin,
    VAR_2->teamgoal.areanum, VAR_0) < 300) {

   VAR_5 = 50;
  }
 }

 VAR_6 = FUNC_5(VAR_2->gs, VAR_2->origin, VAR_2->inventory, VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
