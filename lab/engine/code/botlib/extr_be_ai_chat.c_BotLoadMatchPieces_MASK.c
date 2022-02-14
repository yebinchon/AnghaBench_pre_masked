
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int subtype; scalar_t__ intvalue; scalar_t__ string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;
struct TYPE_9__ {char* string; struct TYPE_9__* next; } ;
typedef TYPE_2__ bot_matchstring_t ;
struct TYPE_10__ {scalar_t__ variable; TYPE_2__* firststring; struct TYPE_10__* next; int type; } ;
typedef TYPE_3__ bot_matchpiece_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,scalar_t__,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

bot_matchpiece_t *FUNC_11(source_t *VAR_8, char *VAR_9)
{
 int VAR_10, VAR_11;
 token_t VAR_12;
 bot_matchpiece_t *VAR_13, *VAR_14, *VAR_15;
 bot_matchstring_t *VAR_16, *VAR_17;

 VAR_14 = ((void*)0);
 VAR_15 = ((void*)0);

 VAR_10 = VAR_6;

 while(FUNC_6(VAR_8, &VAR_12))
 {
  if (VAR_12.type == VAR_4 && (VAR_12.subtype & VAR_3))
  {
   if (VAR_12.intvalue >= VAR_0)
   {
    FUNC_7(VAR_8, "can't have more than %d match variables", VAR_0);
    FUNC_1(VAR_8);
    FUNC_0(VAR_14);
    return ((void*)0);
   }
   if (VAR_10)
   {
    FUNC_7(VAR_8, "not allowed to have adjacent variables");
    FUNC_1(VAR_8);
    FUNC_0(VAR_14);
    return ((void*)0);
   }
   VAR_10 = VAR_7;

   VAR_13 = (bot_matchpiece_t *) FUNC_2(sizeof(bot_matchpiece_t));
   VAR_13->type = VAR_2;
   VAR_13->variable = VAR_12.intvalue;
   VAR_13->next = ((void*)0);
   if (VAR_15) VAR_15->next = VAR_13;
   else VAR_14 = VAR_13;
   VAR_15 = VAR_13;
  }
  else if (VAR_12.type == VAR_5)
  {

   VAR_13 = (bot_matchpiece_t *) FUNC_2(sizeof(bot_matchpiece_t));
   VAR_13->firststring = ((void*)0);
   VAR_13->type = VAR_1;
   VAR_13->variable = 0;
   VAR_13->next = ((void*)0);
   if (VAR_15) VAR_15->next = VAR_13;
   else VAR_14 = VAR_13;
   VAR_15 = VAR_13;

   VAR_17 = ((void*)0);
   VAR_11 = VAR_6;

   do
   {
    if (VAR_13->firststring)
    {
     if (!FUNC_5(VAR_8, VAR_5, 0, &VAR_12))
     {
      FUNC_1(VAR_8);
      FUNC_0(VAR_14);
      return ((void*)0);
     }
    }
    FUNC_8(VAR_12.string);
    VAR_16 = (bot_matchstring_t *) FUNC_2(sizeof(bot_matchstring_t) + FUNC_10(VAR_12.string) + 1);
    VAR_16->string = (char *) VAR_16 + sizeof(bot_matchstring_t);
    FUNC_9(VAR_16->string, VAR_12.string);
    if (!FUNC_10(VAR_12.string)) VAR_11 = VAR_7;
    VAR_16->next = ((void*)0);
    if (VAR_17) VAR_17->next = VAR_16;
    else VAR_13->firststring = VAR_16;
    VAR_17 = VAR_16;
   } while(FUNC_3(VAR_8, "|"));

   if (!VAR_11) VAR_10 = VAR_6;
  }
  else
  {
   FUNC_7(VAR_8, "invalid token %s", VAR_12.string);
   FUNC_1(VAR_8);
   FUNC_0(VAR_14);
   return ((void*)0);
  }
  if (FUNC_3(VAR_8, VAR_9)) break;
  if (!FUNC_4(VAR_8, ","))
  {
   FUNC_1(VAR_8);
   FUNC_0(VAR_14);
   return ((void*)0);
  }
 }
 return VAR_14;
}
