
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* firstchatmessage; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_replychat_t ;
struct TYPE_5__ {scalar_t__ time; struct TYPE_5__* next; } ;
typedef TYPE_2__ bot_chatmessage_t ;


 TYPE_1__* VAR_0 ;

void FUNC_0(void)
{
 bot_replychat_t *VAR_1;
 bot_chatmessage_t *VAR_2;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
 {
  for (VAR_2 = VAR_1->firstchatmessage; VAR_2; VAR_2 = VAR_2->next)
  {
   VAR_2->time = 0;
  }
 }
}
