
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ainode; int gs; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_7__ {int number; } ;
typedef TYPE_2__ bot_goal_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*,int) ;

void FUNC_3(bot_state_t *VAR_1, char *VAR_2) {
 bot_goal_t VAR_3;
 char VAR_4[144];

 if (FUNC_1(VAR_1->gs, &VAR_3)) {
  FUNC_2(VAR_3.number, VAR_4, 144);
  FUNC_0(VAR_1, "seek NBG", VAR_4, VAR_2);
 }
 else {
  FUNC_0(VAR_1, "seek NBG", "no goal", VAR_2);
 }
 VAR_1->ainode = VAR_0;
}
