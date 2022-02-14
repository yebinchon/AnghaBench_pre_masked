
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ side; struct TYPE_8__* next; } ;
typedef TYPE_1__ bspbrush_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*,...) ;

bspbrush_t *FUNC_3(bspbrush_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 bspbrush_t *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 bspbrush_t *VAR_9;

 if (!VAR_0) return ((void*)0);

 if (!VAR_1) FUNC_2("%5d brushes merged", VAR_2 = 0);
 do
 {
  for (VAR_6 = VAR_0; VAR_6; VAR_6 = VAR_6->next)
  {
   if (!VAR_6->next) break;
  }
  VAR_3 = 0;
  VAR_8 = ((void*)0);
  for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_0)
  {
   VAR_9 = VAR_4;
   for (VAR_5 = VAR_4->next; VAR_5; VAR_5 = VAR_5->next)
   {

    if (VAR_4->side != VAR_5->side) VAR_7 = ((void*)0);
    else VAR_7 = FUNC_1(VAR_4, VAR_5);

    if (VAR_7)
    {

     VAR_7->side = VAR_4->side;

     VAR_6->next = VAR_7;

     VAR_9->next = VAR_5->next;

     VAR_0 = VAR_0->next;

     FUNC_0(VAR_4);
     FUNC_0(VAR_5);

     for (VAR_6 = VAR_0; VAR_6; VAR_6 = VAR_6->next)
     {
      if (!VAR_6->next) break;
     }
     VAR_3++;
     if (!VAR_1) FUNC_2("\r%5d", VAR_2++);
     break;
    }
    VAR_9 = VAR_5;
   }

   if (!VAR_5)
   {
    VAR_0 = VAR_0->next;

    VAR_4->next = VAR_8;
    VAR_8 = VAR_4;
   }
  }
  VAR_0 = VAR_8;
 } while(VAR_3);
 if (!VAR_1) FUNC_2("\n");
 return VAR_8;
}
