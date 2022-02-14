
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float thinktime; } ;
typedef TYPE_1__ bot_input_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(int VAR_1, float VAR_2, bot_input_t *VAR_3)
{
 bot_input_t *VAR_4;

 VAR_4 = &VAR_0[VAR_1];
 VAR_4->thinktime = VAR_2;
 FUNC_0(VAR_3, VAR_4, sizeof(bot_input_t));
}
