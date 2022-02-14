
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int first; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_matchtemplate_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(bot_matchtemplate_t *VAR_0)
{
 bot_matchtemplate_t *VAR_1;

 for (; VAR_0; VAR_0 = VAR_1)
 {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->first);
  FUNC_1(VAR_0);
 }
}
