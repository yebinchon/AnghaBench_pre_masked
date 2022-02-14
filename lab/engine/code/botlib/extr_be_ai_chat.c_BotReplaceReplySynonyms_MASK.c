
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long context; TYPE_1__* firstsynonym; struct TYPE_6__* next; } ;
typedef TYPE_2__ bot_synonymlist_t ;
struct TYPE_7__ {char* string; struct TYPE_7__* next; } ;
typedef TYPE_3__ bot_synonym_t ;
struct TYPE_5__ {char* string; TYPE_3__* next; } ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 TYPE_2__* VAR_1 ;

void FUNC_4(char *VAR_2, unsigned long int VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 bot_synonymlist_t *VAR_7;
 bot_synonym_t *VAR_8;

 for (VAR_4 = VAR_2; *VAR_4; )
 {

  while(*VAR_4 && *VAR_4 <= ' ') VAR_4++;
  if (!*VAR_4) break;

  for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next)
  {
   if (!(VAR_7->context & VAR_3)) continue;
   for (VAR_8 = VAR_7->firstsynonym->next; VAR_8; VAR_8 = VAR_8->next)
   {

    VAR_5 = FUNC_1(VAR_4, VAR_8->string, VAR_0);
    if (!VAR_5 || VAR_5 != VAR_4) continue;

    VAR_6 = VAR_7->firstsynonym->string;

    VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_0);
    if (VAR_5 && VAR_5 == VAR_4) continue;

    FUNC_2(VAR_4 + FUNC_3(VAR_6), VAR_4+FUNC_3(VAR_8->string),
       FUNC_3(VAR_4+FUNC_3(VAR_8->string)) + 1);

    FUNC_0(VAR_4, VAR_6, FUNC_3(VAR_6));

    break;
   }

   if (VAR_8) break;
  }

  while(*VAR_4 && *VAR_4 > ' ') VAR_4++;
  if (!*VAR_4) break;
 }
}
