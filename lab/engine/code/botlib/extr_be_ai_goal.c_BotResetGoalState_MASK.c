
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ goalstacktop; int goalstack; } ;
typedef TYPE_1__ bot_goalstate_t ;
typedef int bot_goal_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;

void FUNC_3(int VAR_1)
{
 bot_goalstate_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) return;
 FUNC_2(VAR_2->goalstack, 0, VAR_0 * sizeof(bot_goal_t));
 VAR_2->goalstacktop = 0;
 FUNC_1(VAR_1);
}
