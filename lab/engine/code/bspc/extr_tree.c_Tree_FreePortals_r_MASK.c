
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* winding; TYPE_2__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_9__ {scalar_t__ planenum; TYPE_1__* portals; struct TYPE_9__** children; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;

void FUNC_3 (node_t *VAR_2)
{
 portal_t *VAR_3, *VAR_4;
 int VAR_5;


 if (VAR_2->planenum != VAR_0)
 {
  FUNC_3(VAR_2->children[0]);
  FUNC_3(VAR_2->children[1]);
 }


 for (VAR_3 = VAR_2->portals; VAR_3; VAR_3 = VAR_4)
 {
  VAR_5 = (VAR_3->nodes[1] == VAR_2);
  VAR_4 = VAR_3->next[VAR_5];

  FUNC_2 (VAR_3, VAR_3->nodes[!VAR_5]);




  FUNC_0(VAR_3);
 }
 VAR_2->portals = ((void*)0);
}
