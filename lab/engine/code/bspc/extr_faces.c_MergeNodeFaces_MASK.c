
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_10__ {size_t planenum; TYPE_3__* faces; } ;
typedef TYPE_2__ node_t ;
struct TYPE_11__ {size_t planenum; struct TYPE_11__* next; scalar_t__* split; scalar_t__ merged; } ;
typedef TYPE_3__ face_t ;


 TYPE_3__* FUNC_0 (TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1 (node_t *VAR_1)
{
 face_t *VAR_2, *VAR_3, *VAR_4;
 face_t *VAR_5;
 plane_t *VAR_6;

 VAR_6 = &VAR_0[VAR_1->planenum];
 VAR_5 = ((void*)0);

 for (VAR_2 = VAR_1->faces ; VAR_2 ; VAR_2 = VAR_2->next)
 {
  if (VAR_2->merged || VAR_2->split[0] || VAR_2->split[1])
   continue;

  for (VAR_3 = VAR_1->faces ; VAR_3 != VAR_2 ; VAR_3=VAR_3->next)
  {
   if (VAR_3->merged || VAR_3->split[0] || VAR_3->split[1])
    continue;
   VAR_6 = &VAR_0[VAR_2->planenum];

   VAR_5 = FUNC_0 (VAR_2, VAR_3, VAR_6->normal);
   if (!VAR_5)
    continue;



   for (VAR_4 = VAR_1->faces ; VAR_4->next ; VAR_4 = VAR_4->next)
   ;
   VAR_5->next = ((void*)0);
   VAR_4->next = VAR_5;
   break;
  }
 }
}
