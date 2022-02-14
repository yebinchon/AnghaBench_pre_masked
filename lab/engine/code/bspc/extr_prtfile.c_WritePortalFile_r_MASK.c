
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int numpoints; int ** p; } ;
typedef TYPE_2__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_8__ {int normal; } ;
struct TYPE_10__ {TYPE_4__** nodes; TYPE_1__ plane; TYPE_2__* winding; struct TYPE_10__** next; } ;
typedef TYPE_3__ portal_t ;
struct TYPE_11__ {scalar_t__ planenum; int contents; int cluster; TYPE_3__* portals; struct TYPE_11__** children; int detail_seperator; } ;
typedef TYPE_4__ node_t ;


 int VAR_0 ;
 double FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_2 ;

void FUNC_5 (node_t *VAR_3)
{
 int VAR_4, VAR_5;
 portal_t *VAR_6;
 winding_t *VAR_7;
 vec3_t VAR_8;
 vec_t VAR_9;


 if (VAR_3->planenum != VAR_1 && !VAR_3->detail_seperator)
 {
  FUNC_5 (VAR_3->children[0]);
  FUNC_5 (VAR_3->children[1]);
  return;
 }

 if (VAR_3->contents & VAR_0)
  return;

 for (VAR_6 = VAR_3->portals ; VAR_6 ; VAR_6=VAR_6->next[VAR_5])
 {
  VAR_7 = VAR_6->winding;
  VAR_5 = (VAR_6->nodes[1] == VAR_3);
  if (VAR_7 && VAR_6->nodes[0] == VAR_3)
  {
   if (!FUNC_1 (VAR_6))
    continue;






   FUNC_2 (VAR_7, VAR_8, &VAR_9);
   if ( FUNC_0 (VAR_6->plane.normal, VAR_8) < 0.99 )
   {
    FUNC_4 (VAR_2,"%i %i %i ",VAR_7->numpoints, VAR_6->nodes[1]->cluster, VAR_6->nodes[0]->cluster);
   }
   else
    FUNC_4 (VAR_2,"%i %i %i ",VAR_7->numpoints, VAR_6->nodes[0]->cluster, VAR_6->nodes[1]->cluster);
   for (VAR_4=0 ; VAR_4<VAR_7->numpoints ; VAR_4++)
   {
    FUNC_4 (VAR_2,"(");
    FUNC_3 (VAR_2, VAR_7->p[VAR_4][0]);
    FUNC_3 (VAR_2, VAR_7->p[VAR_4][1]);
    FUNC_3 (VAR_2, VAR_7->p[VAR_4][2]);
    FUNC_4 (VAR_2,") ");
   }
   FUNC_4 (VAR_2,"\n");
  }
 }

}
