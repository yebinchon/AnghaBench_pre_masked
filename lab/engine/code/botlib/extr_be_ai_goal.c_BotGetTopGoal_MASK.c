
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t goalstacktop; int * goalstack; } ;
typedef TYPE_1__ bot_goalstate_t ;
typedef int bot_goal_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(int VAR_2, bot_goal_t *VAR_3)
{
 bot_goalstate_t *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4) return VAR_0;
 if (!VAR_4->goalstacktop) return VAR_0;
 FUNC_1(VAR_3, &VAR_4->goalstack[VAR_4->goalstacktop], sizeof(bot_goal_t));
 return VAR_1;
}
