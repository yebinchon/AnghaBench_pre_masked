
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__** next; TYPE_2__** nodes; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_6__ {scalar_t__ planenum; TYPE_1__* portals; struct TYPE_6__** children; } ;
typedef TYPE_2__ node_t ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;

void FUNC_1 (node_t *VAR_1, FILE *VAR_2)
{
 portal_t *VAR_3, *VAR_4;

 if (VAR_1->planenum != VAR_0)
 {
  FUNC_1 (VAR_1->children[0], VAR_2);
  FUNC_1 (VAR_1->children[1], VAR_2);
  return;
 }


 for (VAR_3=VAR_1->portals ; VAR_3 ; VAR_3=VAR_4)
 {
  if (VAR_3->nodes[0] == VAR_1)
  {
   FUNC_0 (VAR_3, VAR_2);
   VAR_4 = VAR_3->next[0];
  }
  else
   VAR_4 = VAR_3->next[1];
 }
}
