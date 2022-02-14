
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; TYPE_1__* original; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_9__ {scalar_t__ contents; scalar_t__ expansionbbox; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (char*,...) ;

bspbrush_t *FUNC_3(bspbrush_t *VAR_0)
{
 int VAR_1, VAR_2;
 bspbrush_t *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 bspbrush_t *VAR_8;

 if (!VAR_0) return ((void*)0);

 FUNC_2("%5d brushes merged", VAR_1 = 0);
 do
 {
  for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next)
  {
   if (!VAR_5->next) break;
  }
  VAR_2 = 0;
  VAR_7 = ((void*)0);
  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_0)
  {
   VAR_8 = VAR_3;
   for (VAR_4 = VAR_3->next; VAR_4; VAR_4 = VAR_4->next)
   {

    if (VAR_3->original->contents != VAR_4->original->contents ||
     VAR_3->original->expansionbbox != VAR_4->original->expansionbbox) VAR_6 = ((void*)0);
    else VAR_6 = FUNC_1(VAR_3, VAR_4);
    if (VAR_6)
    {
     VAR_5->next = VAR_6;
     VAR_8->next = VAR_4->next;
     VAR_0 = VAR_0->next;
     FUNC_0(VAR_3);
     FUNC_0(VAR_4);
     for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next)
     {
      if (!VAR_5->next) break;
     }
     VAR_2++;
     FUNC_2("\r%5d", VAR_1++);
     break;
    }
    VAR_8 = VAR_4;
   }

   if (!VAR_4)
   {
    VAR_0 = VAR_0->next;

    VAR_3->next = VAR_7;
    VAR_7 = VAR_3;
   }
  }
  VAR_0 = VAR_7;
 } while(VAR_2);
 FUNC_2("\n");
 return VAR_7;
}
