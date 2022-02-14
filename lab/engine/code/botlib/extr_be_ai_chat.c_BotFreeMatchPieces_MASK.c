
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* next; struct TYPE_5__* firststring; } ;
typedef TYPE_1__ bot_matchstring_t ;
typedef TYPE_1__ bot_matchpiece_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(bot_matchpiece_t *VAR_1)
{
 bot_matchpiece_t *VAR_2, *VAR_3;
 bot_matchstring_t *VAR_4, *VAR_5;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->next;
  if (VAR_2->type == VAR_0)
  {
   for (VAR_4 = VAR_2->firststring; VAR_4; VAR_4 = VAR_5)
   {
    VAR_5 = VAR_4->next;
    FUNC_0(VAR_4);
   }
  }
  FUNC_0(VAR_2);
 }
}
