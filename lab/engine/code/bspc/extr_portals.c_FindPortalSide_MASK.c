
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flags; scalar_t__ texinfo; int planenum; } ;
typedef TYPE_2__ side_t ;
struct TYPE_12__ {int sidefound; TYPE_2__* side; TYPE_1__* onnode; TYPE_5__** nodes; } ;
typedef TYPE_3__ portal_t ;
struct TYPE_13__ {int normal; } ;
typedef TYPE_4__ plane_t ;
struct TYPE_14__ {int contents; TYPE_7__* brushlist; } ;
typedef TYPE_5__ node_t ;
struct TYPE_15__ {int contents; int numsides; TYPE_2__* original_sides; } ;
typedef TYPE_6__ mapbrush_t ;
struct TYPE_16__ {TYPE_6__* original; struct TYPE_16__* next; } ;
typedef TYPE_7__ bspbrush_t ;
struct TYPE_10__ {int planenum; } ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_4__* VAR_2 ;

void FUNC_3 (portal_t *VAR_3)
{
 int VAR_4;
 bspbrush_t *VAR_5;
 mapbrush_t *VAR_6;
 node_t *VAR_7;
 int VAR_8,VAR_9;
 int VAR_10;
 side_t *VAR_11, *VAR_12;
 float VAR_13, VAR_14;
 plane_t *VAR_15, *VAR_16;



 VAR_4 = FUNC_2 (VAR_3->nodes[0]->contents ^ VAR_3->nodes[1]->contents);
 if (!VAR_4)
  return;

 VAR_10 = VAR_3->onnode->planenum;
 VAR_12 = ((void*)0);
 VAR_14 = 0;

 for (VAR_9=0 ; VAR_9<2 ; VAR_9++)
 {
  VAR_7 = VAR_3->nodes[VAR_9];
  VAR_15 = &VAR_2[VAR_3->onnode->planenum];
  for (VAR_5=VAR_7->brushlist ; VAR_5 ; VAR_5=VAR_5->next)
  {
   VAR_6 = VAR_5->original;
   if ( !(VAR_6->contents & VAR_4) )
    continue;
   for (VAR_8=0 ; VAR_8<VAR_6->numsides ; VAR_8++)
   {
    VAR_11 = &VAR_6->original_sides[VAR_8];
    if (VAR_11->flags & VAR_0)
     continue;
    if (VAR_11->texinfo == VAR_1)
     continue;
    if ((VAR_11->planenum&~1) == VAR_10)
    {
     VAR_12 = &VAR_6->original_sides[VAR_8];
     goto gotit;
    }

    VAR_16 = &VAR_2[VAR_11->planenum&~1];
    VAR_13 = FUNC_0 (VAR_15->normal, VAR_16->normal);
    if (VAR_13 > VAR_14)
    {
     VAR_14 = VAR_13;
     VAR_12 = VAR_11;
    }
   }
  }
 }

gotit:
 if (!VAR_12)
  FUNC_1("WARNING: side not found for portal\n");

 VAR_3->sidefound = 1;
 VAR_3->side = VAR_12;
}
