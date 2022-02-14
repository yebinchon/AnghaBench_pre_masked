
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__** children; scalar_t__ planenum; TYPE_2__* tmparea; } ;
typedef TYPE_1__ tmp_node_t ;
struct TYPE_7__ {struct TYPE_7__* mergedarea; } ;
typedef TYPE_2__ tmp_area_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

tmp_node_t *FUNC_1(tmp_node_t *VAR_1)
{
 tmp_area_t *VAR_2, *VAR_3;


 if (!VAR_1) return ((void*)0);

 if (VAR_1->tmparea) return VAR_1;

 VAR_1->children[0] = FUNC_1(VAR_1->children[0]);
 VAR_1->children[1] = FUNC_1(VAR_1->children[1]);

 if (VAR_1->children[0] && VAR_1->children[1] &&
   VAR_1->children[0]->tmparea && VAR_1->children[1]->tmparea)
 {
  VAR_2 = VAR_1->children[0]->tmparea;
  while(VAR_2->mergedarea) VAR_2 = VAR_2->mergedarea;

  VAR_3 = VAR_1->children[1]->tmparea;
  while(VAR_3->mergedarea) VAR_3 = VAR_3->mergedarea;

  if (VAR_2 == VAR_3)
  {
   VAR_0++;
   VAR_1->tmparea = VAR_2;
   VAR_1->planenum = 0;
   FUNC_0(VAR_1->children[0]);
   FUNC_0(VAR_1->children[1]);
   VAR_1->children[0] = ((void*)0);
   VAR_1->children[1] = ((void*)0);
   return VAR_1;
  }
 }

 if (!VAR_1->children[0] && !VAR_1->children[1])
 {
  VAR_0++;
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
