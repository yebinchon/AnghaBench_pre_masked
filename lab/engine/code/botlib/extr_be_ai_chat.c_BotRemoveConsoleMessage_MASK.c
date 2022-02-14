
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int handle; struct TYPE_7__* next; TYPE_1__* prev; } ;
typedef TYPE_2__ bot_consolemessage_t ;
struct TYPE_8__ {int numconsolemessages; TYPE_2__* firstmessage; TYPE_1__* lastmessage; } ;
typedef TYPE_3__ bot_chatstate_t ;
struct TYPE_6__ {TYPE_2__* next; } ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(int VAR_0, int VAR_1)
{
 bot_consolemessage_t *VAR_2, *VAR_3;
 bot_chatstate_t *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (!VAR_4) return;

 for (VAR_2 = VAR_4->firstmessage; VAR_2; VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->next;
  if (VAR_2->handle == VAR_1)
  {
   if (VAR_2->next) VAR_2->next->prev = VAR_2->prev;
   else VAR_4->lastmessage = VAR_2->prev;
   if (VAR_2->prev) VAR_2->prev->next = VAR_2->next;
   else VAR_4->firstmessage = VAR_2->next;

   FUNC_1(VAR_2);
   VAR_4->numconsolemessages--;
   break;
  }
 }
}
