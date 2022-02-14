
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handle; int message; int type; int time; } ;
typedef TYPE_1__ bot_consolemessage_t ;
struct TYPE_6__ {TYPE_1__* firstmessage; } ;
typedef TYPE_2__ bot_chatstate_t ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(int VAR_0, bot_consolemessage_t *VAR_1)
{
 bot_chatstate_t *VAR_2;
 bot_consolemessage_t *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2) return 0;
 if ((VAR_3 = VAR_2->firstmessage))
 {
  VAR_1->handle = VAR_3->handle;
  VAR_1->time = VAR_3->time;
  VAR_1->type = VAR_3->type;
  FUNC_1(VAR_1->message, VAR_3->message,
      sizeof(VAR_1->message));
  return VAR_1->handle;
 }
 return 0;
}
