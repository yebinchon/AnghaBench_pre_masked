
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; char* string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;
struct TYPE_8__ {char* string; struct TYPE_8__* next; } ;
typedef TYPE_2__ bot_randomstring_t ;
struct TYPE_9__ {char* string; TYPE_2__* firstrandomstring; scalar_t__ numstrings; struct TYPE_9__* next; } ;
typedef TYPE_3__ bot_randomlist_t ;
struct TYPE_10__ {int (* Print ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (char*) ;
 int VAR_1 ;
 size_t FUNC_4 (size_t,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,char*) ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (int ,char*,int) ;

bot_randomlist_t *FUNC_16(char *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9 = ((void*)0), VAR_10[VAR_1];
 source_t *VAR_11;
 token_t VAR_12;
 bot_randomlist_t *VAR_13, *VAR_14, *VAR_15;
 bot_randomstring_t *VAR_16;





 VAR_8 = 0;
 VAR_13 = ((void*)0);
 VAR_15 = ((void*)0);

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
 {

  if (VAR_7 && VAR_8) VAR_9 = (char *) FUNC_2(VAR_8);

  FUNC_8(VAR_0);
  VAR_11 = FUNC_3(VAR_6);
  if (!VAR_11)
  {
   VAR_5.Print(VAR_2, "counldn't load %s\n", VAR_6);
   return ((void*)0);
  }

  VAR_13 = ((void*)0);
  VAR_14 = ((void*)0);

  while(FUNC_7(VAR_11, &VAR_12))
  {
   size_t VAR_17;
   if (VAR_12.type != VAR_4)
   {
    FUNC_9(VAR_11, "unknown random %s", VAR_12.string);
    FUNC_1(VAR_11);
    return ((void*)0);
   }
   VAR_17 = FUNC_12(VAR_12.string) + 1;
   VAR_17 = FUNC_4(VAR_17, sizeof(long));
   VAR_8 += sizeof(bot_randomlist_t) + VAR_17;
   if (VAR_7 && VAR_9)
   {
    VAR_15 = (bot_randomlist_t *) VAR_9;
    VAR_9 += sizeof(bot_randomlist_t);
    VAR_15->string = VAR_9;
    VAR_9 += VAR_17;
    FUNC_11(VAR_15->string, VAR_12.string);
    VAR_15->firstrandomstring = ((void*)0);
    VAR_15->numstrings = 0;

    if (VAR_14) VAR_14->next = VAR_15;
    else VAR_13 = VAR_15;
    VAR_14 = VAR_15;
   }
   if (!FUNC_6(VAR_11, "=") ||
    !FUNC_6(VAR_11, "{"))
   {
    FUNC_1(VAR_11);
    return ((void*)0);
   }
   while(!FUNC_5(VAR_11, "}"))
   {
    if (!FUNC_0(VAR_11, VAR_10))
    {
     FUNC_1(VAR_11);
     return ((void*)0);
    }
    VAR_17 = FUNC_12(VAR_10) + 1;
    VAR_17 = FUNC_4(VAR_17, sizeof(long));
    VAR_8 += sizeof(bot_randomstring_t) + VAR_17;
    if (VAR_7 && VAR_9)
    {
     VAR_16 = (bot_randomstring_t *) VAR_9;
     VAR_9 += sizeof(bot_randomstring_t);
     VAR_16->string = VAR_9;
     VAR_9 += VAR_17;
     FUNC_11(VAR_16->string, VAR_10);

     VAR_15->numstrings++;
     VAR_16->next = VAR_15->firstrandomstring;
     VAR_15->firstrandomstring = VAR_16;
    }
   }
  }

  FUNC_1(VAR_11);
 }
 VAR_5.Print(VAR_3, "loaded %s\n", VAR_6);






 return VAR_13;
}
