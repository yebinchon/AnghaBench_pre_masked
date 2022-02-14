
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gs; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_6__ {int number; } ;
typedef TYPE_2__ bot_goal_t ;


 int FUNC_0 (int,char*,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(bot_state_t *VAR_0, char *VAR_1) {
 bot_goal_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(-1, VAR_1, &VAR_2);
 while(VAR_3 >= 0) {
  FUNC_1(VAR_0->gs, VAR_2.number);
  VAR_3 = FUNC_0(VAR_3, VAR_1, &VAR_2);
 }
}
