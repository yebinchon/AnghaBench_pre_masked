
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; char* string; struct TYPE_8__* next; TYPE_4__* match; } ;
typedef TYPE_2__ bot_replychatkey_t ;
struct TYPE_9__ {double priority; TYPE_5__* firstchatmessage; TYPE_2__* keys; struct TYPE_9__* next; } ;
typedef TYPE_3__ bot_replychat_t ;
struct TYPE_10__ {scalar_t__ type; int variable; struct TYPE_10__* next; TYPE_1__* firststring; } ;
typedef TYPE_4__ bot_matchpiece_t ;
struct TYPE_11__ {char* chatmessage; struct TYPE_11__* next; } ;
typedef TYPE_5__ bot_chatmessage_t ;
struct TYPE_7__ {char* string; } ;
typedef int FILE ;


 int * FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,...) ;

void FUNC_2(bot_replychat_t *VAR_9)
{
 FILE *VAR_10;
 bot_replychat_t *VAR_11;
 bot_replychatkey_t *VAR_12;
 bot_chatmessage_t *VAR_13;
 bot_matchpiece_t *VAR_14;

 VAR_10 = FUNC_0();
 if (!VAR_10) return;
 FUNC_1(VAR_10, "BotDumpReplyChat:\n");
 for (VAR_11 = VAR_9; VAR_11; VAR_11 = VAR_11->next)
 {
  FUNC_1(VAR_10, "[");
  for (VAR_12 = VAR_11->keys; VAR_12; VAR_12 = VAR_12->next)
  {
   if (VAR_12->flags & VAR_1) FUNC_1(VAR_10, "&");
   else if (VAR_12->flags & VAR_6) FUNC_1(VAR_10, "!");

   if (VAR_12->flags & VAR_5) FUNC_1(VAR_10, "name");
   else if (VAR_12->flags & VAR_2) FUNC_1(VAR_10, "female");
   else if (VAR_12->flags & VAR_4) FUNC_1(VAR_10, "male");
   else if (VAR_12->flags & VAR_3) FUNC_1(VAR_10, "it");
   else if (VAR_12->flags & VAR_8)
   {
    FUNC_1(VAR_10, "(");
    for (VAR_14 = VAR_12->match; VAR_14; VAR_14 = VAR_14->next)
    {
     if (VAR_14->type == VAR_0) FUNC_1(VAR_10, "\"%s\"", VAR_14->firststring->string);
     else FUNC_1(VAR_10, "%d", VAR_14->variable);
     if (VAR_14->next) FUNC_1(VAR_10, ", ");
    }
    FUNC_1(VAR_10, ")");
   }
   else if (VAR_12->flags & VAR_7)
   {
    FUNC_1(VAR_10, "\"%s\"", VAR_12->string);
   }
   if (VAR_12->next) FUNC_1(VAR_10, ", ");
   else FUNC_1(VAR_10, "] = %1.0f\n", VAR_11->priority);
  }
  FUNC_1(VAR_10, "{\n");
  for (VAR_13 = VAR_11->firstchatmessage; VAR_13; VAR_13 = VAR_13->next)
  {
   FUNC_1(VAR_10, "\t\"%s\";\n", VAR_13->chatmessage);
  }
  FUNC_1(VAR_10, "}\n");
 }
}
