
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long context; float totalweight; TYPE_2__* firstsynonym; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_synonymlist_t ;
struct TYPE_5__ {int string; struct TYPE_5__* next; scalar_t__ weight; } ;
typedef TYPE_2__ bot_synonym_t ;


 int FUNC_0 (char*,int ,int ) ;
 float FUNC_1 () ;
 TYPE_1__* VAR_0 ;

void FUNC_2(char *VAR_1, unsigned long int VAR_2)
{
 bot_synonymlist_t *VAR_3;
 bot_synonym_t *VAR_4, *VAR_5;
 float VAR_6, VAR_7;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
 {
  if (!(VAR_3->context & VAR_2)) continue;

  VAR_6 = FUNC_1() * VAR_3->totalweight;
  if (!VAR_6) continue;
  VAR_7 = 0;
  for (VAR_5 = VAR_3->firstsynonym; VAR_5; VAR_5 = VAR_5->next)
  {
   VAR_7 += VAR_5->weight;
   if (VAR_6 < VAR_7) break;
  }
  if (!VAR_5) continue;

  for (VAR_4 = VAR_3->firstsynonym; VAR_4; VAR_4 = VAR_4->next)
  {
   if (VAR_4 == VAR_5) continue;
   FUNC_0(VAR_1, VAR_4->string, VAR_5->string);
  }
 }
}
