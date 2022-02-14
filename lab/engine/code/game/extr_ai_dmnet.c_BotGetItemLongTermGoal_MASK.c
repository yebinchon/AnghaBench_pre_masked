
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int netname ;
struct TYPE_5__ {scalar_t__ ltg_time; int gs; int ms; int client; int inventory; int origin; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_goal_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(bot_state_t *VAR_2, int VAR_3, bot_goal_t *VAR_4) {

 if (!FUNC_6(VAR_2->gs, VAR_4)) {

  VAR_2->ltg_time = 0;
 }

 else if (FUNC_2(VAR_2, VAR_4)) {
  FUNC_1(VAR_2);
  VAR_2->ltg_time = 0;
 }

 if (VAR_2->ltg_time < FUNC_4()) {

  FUNC_7(VAR_2->gs);



  if (FUNC_5(VAR_2->gs, VAR_2->origin, VAR_2->inventory, VAR_3)) {







   VAR_2->ltg_time = FUNC_4() + 20;
  }
  else {
   FUNC_8(VAR_2->gs);
   FUNC_9(VAR_2->ms);
  }

  return FUNC_6(VAR_2->gs, VAR_4);
 }
 return VAR_1;
}
