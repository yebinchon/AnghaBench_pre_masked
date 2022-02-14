
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int flags; char* string; int match; struct TYPE_17__* next; } ;
typedef TYPE_2__ bot_replychatkey_t ;
struct TYPE_18__ {int priority; TYPE_6__* firstchatmessage; TYPE_2__* keys; struct TYPE_18__* next; } ;
typedef TYPE_3__ bot_replychat_t ;
struct TYPE_19__ {char* string; TYPE_1__* variables; } ;
typedef TYPE_4__ bot_match_t ;
struct TYPE_20__ {scalar_t__ gender; int chatmessage; int name; } ;
typedef TYPE_5__ bot_chatstate_t ;
struct TYPE_21__ {scalar_t__ time; int chatmessage; struct TYPE_21__* next; } ;
typedef TYPE_6__ bot_chatmessage_t ;
struct TYPE_22__ {int (* Print ) (int ,char*,int ) ;} ;
struct TYPE_16__ {int offset; int length; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ,int,TYPE_4__*,int,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (char*,int ,int) ;
 int * FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 TYPE_8__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 () ;
 TYPE_3__* VAR_17 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,char*,int ) ;

int FUNC_15(int VAR_18, char *VAR_19, int VAR_20, int VAR_21, char *VAR_22, char *VAR_23, char *VAR_24, char *VAR_25, char *VAR_26, char *VAR_27, char *VAR_28, char *VAR_29)
{
 bot_replychat_t *VAR_30, *VAR_31;
 bot_replychatkey_t *VAR_32;
 bot_chatmessage_t *VAR_33, *VAR_34;
 bot_match_t VAR_35, VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
 bot_chatstate_t *VAR_43;

 VAR_43 = FUNC_1(VAR_18);
 if (!VAR_43) return VAR_15;
 FUNC_5(&VAR_35, 0, sizeof(bot_match_t));
 FUNC_12(VAR_35.string, VAR_19);
 VAR_37 = -1;
 VAR_34 = ((void*)0);
 VAR_31 = ((void*)0);

 for (VAR_30 = VAR_17; VAR_30; VAR_30 = VAR_30->next)
 {
  VAR_39 = VAR_15;
  for (VAR_32 = VAR_30->keys; VAR_32; VAR_32 = VAR_32->next)
  {
   VAR_40 = VAR_15;

   if (VAR_32->flags & VAR_10) VAR_40 = (FUNC_7(VAR_19, VAR_43->name, VAR_15) != -1);
   else if (VAR_32->flags & VAR_6) VAR_40 = (FUNC_7(VAR_32->string, VAR_43->name, VAR_15) != -1);
   else if (VAR_32->flags & VAR_7) VAR_40 = (VAR_43->gender == VAR_1);
   else if (VAR_32->flags & VAR_9) VAR_40 = (VAR_43->gender == VAR_3);
   else if (VAR_32->flags & VAR_8) VAR_40 = (VAR_43->gender == VAR_2);
   else if (VAR_32->flags & VAR_13) VAR_40 = FUNC_9(VAR_32->match, &VAR_35);
   else if (VAR_32->flags & VAR_12) VAR_40 = (FUNC_8(VAR_19, VAR_32->string, VAR_15) != ((void*)0));

   if (VAR_32->flags & VAR_5)
   {
    if (!VAR_40)
    {
     VAR_39 = VAR_15;
     break;
    }
   }

   else if (VAR_32->flags & VAR_11)
   {
    if (VAR_40)
    {
     VAR_39 = VAR_15;
     break;
    }
   }
   else if (VAR_40)
   {
    VAR_39 = VAR_16;
   }
  }

  if (VAR_39)
  {
   if (VAR_30->priority > VAR_37)
   {
    VAR_41 = 0;
    for (VAR_33 = VAR_30->firstchatmessage; VAR_33; VAR_33 = VAR_33->next)
    {
     if (VAR_33->time > FUNC_0()) continue;
     VAR_41++;
    }
    VAR_38 = FUNC_10() * VAR_41;
    for (VAR_33 = VAR_30->firstchatmessage; VAR_33; VAR_33 = VAR_33->next)
    {
     if (--VAR_38 < 0) break;
     if (VAR_33->time > FUNC_0()) continue;
    }

    if (VAR_33)
    {
     FUNC_4(&VAR_36, &VAR_35, sizeof(bot_match_t));
     VAR_34 = VAR_33;
     VAR_31 = VAR_30;
     VAR_37 = VAR_30->priority;
    }
   }
  }
 }
 if (VAR_34)
 {
  VAR_42 = FUNC_13(VAR_36.string);
  if( VAR_22 ) {
   FUNC_11(VAR_36.string, VAR_22);
   VAR_36.variables[0].offset = VAR_42;
   VAR_36.variables[0].length = FUNC_13(VAR_22);
   VAR_42 += FUNC_13(VAR_22);
  }
  if( VAR_23 ) {
   FUNC_11(VAR_36.string, VAR_23);
   VAR_36.variables[1].offset = VAR_42;
   VAR_36.variables[1].length = FUNC_13(VAR_23);
   VAR_42 += FUNC_13(VAR_23);
  }
  if( VAR_24 ) {
   FUNC_11(VAR_36.string, VAR_24);
   VAR_36.variables[2].offset = VAR_42;
   VAR_36.variables[2].length = FUNC_13(VAR_24);
   VAR_42 += FUNC_13(VAR_24);
  }
  if( VAR_25 ) {
   FUNC_11(VAR_36.string, VAR_25);
   VAR_36.variables[3].offset = VAR_42;
   VAR_36.variables[3].length = FUNC_13(VAR_25);
   VAR_42 += FUNC_13(VAR_25);
  }
  if( VAR_26 ) {
   FUNC_11(VAR_36.string, VAR_26);
   VAR_36.variables[4].offset = VAR_42;
   VAR_36.variables[4].length = FUNC_13(VAR_26);
   VAR_42 += FUNC_13(VAR_26);
  }
  if( VAR_27 ) {
   FUNC_11(VAR_36.string, VAR_27);
   VAR_36.variables[5].offset = VAR_42;
   VAR_36.variables[5].length = FUNC_13(VAR_27);
   VAR_42 += FUNC_13(VAR_27);
  }
  if( VAR_28 ) {
   FUNC_11(VAR_36.string, VAR_28);
   VAR_36.variables[6].offset = VAR_42;
   VAR_36.variables[6].length = FUNC_13(VAR_28);
   VAR_42 += FUNC_13(VAR_28);
  }
  if( VAR_29 ) {
   FUNC_11(VAR_36.string, VAR_29);
   VAR_36.variables[7].offset = VAR_42;
   VAR_36.variables[7].length = FUNC_13(VAR_29);
  }
  if (FUNC_6("bot_testrchat"))
  {
   for (VAR_33 = VAR_31->firstchatmessage; VAR_33; VAR_33 = VAR_33->next)
   {
    FUNC_2(VAR_43, VAR_33->chatmessage, VAR_20, &VAR_36, VAR_21, VAR_16);
    FUNC_3(VAR_43->chatmessage);
    VAR_14.Print(VAR_4, "%s\n", VAR_43->chatmessage);
   }
  }
  else
  {
   VAR_34->time = FUNC_0() + VAR_0;
   FUNC_2(VAR_43, VAR_34->chatmessage, VAR_20, &VAR_36, VAR_21, VAR_16);
  }
  return VAR_16;
 }
 return VAR_15;
}
