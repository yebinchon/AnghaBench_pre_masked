
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avoidgoaltimes; int avoidgoals; } ;
typedef TYPE_1__ bot_goalstate_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;

void FUNC_2(int VAR_1)
{
 bot_goalstate_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) return;
 FUNC_1(VAR_2->avoidgoals, 0, VAR_0 * sizeof(int));
 FUNC_1(VAR_2->avoidgoaltimes, 0, VAR_0 * sizeof(float));
}
