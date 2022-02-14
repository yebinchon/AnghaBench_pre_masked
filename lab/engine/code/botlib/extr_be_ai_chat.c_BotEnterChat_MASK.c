
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chatmessage; int client; } ;
typedef TYPE_1__ bot_chatstate_t ;
struct TYPE_5__ {int (* Print ) (int ,char*,int ) ;} ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*,int,...) ;

void FUNC_8(int VAR_2, int VAR_3, int VAR_4)
{
 bot_chatstate_t *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5) return;

 if (FUNC_5(VAR_5->chatmessage))
 {
  FUNC_1(VAR_5->chatmessage);
  if (FUNC_3("bot_testichat")) {
   VAR_1.Print(VAR_0, "%s\n", VAR_5->chatmessage);
  }
  else {
   switch(VAR_4) {
    case 129:
     FUNC_2(VAR_5->client, FUNC_7("say_team %s", VAR_5->chatmessage));
     break;
    case 128:
     FUNC_2(VAR_5->client, FUNC_7("tell %d %s", VAR_3, VAR_5->chatmessage));
     break;
    default:
     FUNC_2(VAR_5->client, FUNC_7("say %s", VAR_5->chatmessage));
     break;
   }
  }

  FUNC_4(VAR_5->chatmessage, "");
 }
}
