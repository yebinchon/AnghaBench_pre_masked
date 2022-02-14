
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_randomstring_t ;
struct TYPE_5__ {char* string; TYPE_1__* firstrandomstring; struct TYPE_5__* next; } ;
typedef TYPE_2__ bot_randomlist_t ;
typedef int FILE ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,...) ;

void FUNC_2(bot_randomlist_t *VAR_0)
{
 FILE *VAR_1;
 bot_randomlist_t *VAR_2;
 bot_randomstring_t *VAR_3;

 VAR_1 = FUNC_0();
 if (!VAR_1) return;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
 {
  FUNC_1(VAR_1, "%s = {", VAR_2->string);
  for (VAR_3 = VAR_2->firstrandomstring; VAR_3; VAR_3 = VAR_3->next)
  {
   FUNC_1(VAR_1, "\"%s\"", VAR_3->string);
   if (VAR_3->next) FUNC_1(VAR_1, ", ");
   else FUNC_1(VAR_1, "}\n");
  }
 }
}
