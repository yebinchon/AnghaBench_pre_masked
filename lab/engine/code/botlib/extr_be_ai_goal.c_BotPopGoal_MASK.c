
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ goalstacktop; } ;
typedef TYPE_1__ bot_goalstate_t ;


 TYPE_1__* FUNC_0 (int) ;

void FUNC_1(int VAR_0)
{
 bot_goalstate_t *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) return;
 if (VAR_1->goalstacktop > 0) VAR_1->goalstacktop--;
}
