
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ planenum; scalar_t__ contents; int area; TYPE_4__* brushlist; struct TYPE_8__** children; } ;
typedef TYPE_2__ node_t ;
struct TYPE_9__ {int * portalareas; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_10__ {TYPE_1__* original; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_7__ {size_t entitynum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_1 (node_t *VAR_3)
{
 bspbrush_t *VAR_4;
 entity_t *VAR_5;

 if (VAR_3->planenum != VAR_1)
 {
  FUNC_1 (VAR_3->children[0]);
  FUNC_1 (VAR_3->children[1]);
  return;
 }

 if (VAR_3->contents == VAR_0)
 {
  if (VAR_3->area)
   return;

  VAR_4 = VAR_3->brushlist;
  VAR_5 = &VAR_2[VAR_4->original->entitynum];
  VAR_3->area = VAR_5->portalareas[0];
  if (!VAR_5->portalareas[1])
  {
   FUNC_0("WARNING: areaportal entity %i doesn't touch two areas\n", VAR_4->original->entitynum);
   return;
  }
 }
}
