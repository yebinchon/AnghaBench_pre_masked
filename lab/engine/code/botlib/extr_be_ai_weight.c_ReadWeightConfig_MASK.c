
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {char* filename; size_t numweights; TYPE_1__* weights; } ;
typedef TYPE_2__ weightconfig_t ;
struct TYPE_17__ {char* string; } ;
typedef TYPE_3__ token_t ;
typedef int source_t ;
struct TYPE_18__ {int * child; int * next; int value; scalar_t__ index; } ;
typedef TYPE_4__ fuzzyseperator_t ;
struct TYPE_19__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_15__ {char* name; TYPE_4__* firstseperator; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,char*,int) ;
 TYPE_4__* FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_4__*) ;
 int FUNC_14 (int *,char*,char*) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,char*,char*) ;
 int FUNC_22 (int ,char*,char*) ;
 int FUNC_23 (int ,char*,char*) ;
 int FUNC_24 (int ,char*,int) ;
 TYPE_2__** VAR_11 ;

weightconfig_t *FUNC_25(char *VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15;
 token_t VAR_16;
 source_t *VAR_17;
 fuzzyseperator_t *VAR_18;
 weightconfig_t *VAR_19 = ((void*)0);






 if (!FUNC_4("bot_reloadcharacters"))
 {
  VAR_14 = -1;
  for( VAR_15 = 0; VAR_15 < VAR_3; VAR_15++ )
  {
   VAR_19 = VAR_11[VAR_15];
   if( !VAR_19 )
   {
    if( VAR_14 == -1 )
    {
     VAR_14 = VAR_15;
    }
    continue;
   }
   if( FUNC_18( VAR_12, VAR_19->filename ) == 0 )
   {

    return VAR_19;
   }
  }

  if( VAR_14 == -1 )
  {
   VAR_8.Print( VAR_4, "weightFileList was full trying to load %s\n", VAR_12 );
   return ((void*)0);
  }
 }

 FUNC_10(VAR_0);
 VAR_17 = FUNC_5(VAR_12);
 if (!VAR_17)
 {
  VAR_8.Print(VAR_4, "counldn't load %s\n", VAR_12);
  return ((void*)0);
 }

 VAR_19 = (weightconfig_t *) FUNC_3(sizeof(weightconfig_t));
 VAR_19->numweights = 0;
 FUNC_11( VAR_19->filename, VAR_12, sizeof(VAR_19->filename) );

 while(FUNC_9(VAR_17, &VAR_16))
 {
  if (!FUNC_18(VAR_16.string, "weight"))
  {
   if (VAR_19->numweights >= VAR_2)
   {
    FUNC_15(VAR_17, "too many fuzzy weights");
    break;
   }
   if (!FUNC_8(VAR_17, VAR_6, 0, &VAR_16))
   {
    FUNC_2(VAR_19);
    FUNC_1(VAR_17);
    return ((void*)0);
   }
   FUNC_16(VAR_16.string);
   VAR_19->weights[VAR_19->numweights].name = (char *) FUNC_3(FUNC_20(VAR_16.string) + 1);
   FUNC_19(VAR_19->weights[VAR_19->numweights].name, VAR_16.string);
   if (!FUNC_6(VAR_17, &VAR_16))
   {
    FUNC_2(VAR_19);
    FUNC_1(VAR_17);
    return ((void*)0);
   }
   VAR_13 = VAR_9;
   if (!FUNC_18(VAR_16.string, "{"))
   {
    VAR_13 = VAR_10;
    if (!FUNC_6(VAR_17, &VAR_16))
    {
     FUNC_2(VAR_19);
     FUNC_1(VAR_17);
     return ((void*)0);
    }
   }
   if (!FUNC_18(VAR_16.string, "switch"))
   {
    VAR_18 = FUNC_12(VAR_17);
    if (!VAR_18)
    {
     FUNC_2(VAR_19);
     FUNC_1(VAR_17);
     return ((void*)0);
    }
    VAR_19->weights[VAR_19->numweights].firstseperator = VAR_18;
   }
   else if (!FUNC_18(VAR_16.string, "return"))
   {
    VAR_18 = (fuzzyseperator_t *) FUNC_3(sizeof(fuzzyseperator_t));
    VAR_18->index = 0;
    VAR_18->value = VAR_1;
    VAR_18->next = ((void*)0);
    VAR_18->child = ((void*)0);
    if (!FUNC_13(VAR_17, VAR_18))
    {
     FUNC_0(VAR_18);
     FUNC_2(VAR_19);
     FUNC_1(VAR_17);
     return ((void*)0);
    }
    VAR_19->weights[VAR_19->numweights].firstseperator = VAR_18;
   }
   else
   {
    FUNC_14(VAR_17, "invalid name %s", VAR_16.string);
    FUNC_2(VAR_19);
    FUNC_1(VAR_17);
    return ((void*)0);
   }
   if (VAR_13)
   {
    if (!FUNC_7(VAR_17, "}"))
    {
     FUNC_2(VAR_19);
     FUNC_1(VAR_17);
     return ((void*)0);
    }
   }
   VAR_19->numweights++;
  }
  else
  {
   FUNC_14(VAR_17, "invalid name %s", VAR_16.string);
   FUNC_2(VAR_19);
   FUNC_1(VAR_17);
   return ((void*)0);
  }
 }

 FUNC_1(VAR_17);

 VAR_8.Print(VAR_5, "loaded %s\n", VAR_12);







 if (!FUNC_4("bot_reloadcharacters"))
 {
  VAR_11[VAR_14] = VAR_19;
 }

 return VAR_19;
}
