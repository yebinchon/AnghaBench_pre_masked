
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {double* normal; double dist; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {size_t planenum; struct TYPE_9__** children; TYPE_4__* brushlist; } ;
typedef TYPE_3__ node_t ;
struct TYPE_10__ {TYPE_1__* original; struct TYPE_10__* next; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_7__ {int brushnum; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1 (node_t *VAR_2, int VAR_3)
{
 int VAR_4;
 plane_t *VAR_5;
 bspbrush_t *VAR_6;

 for (VAR_4=0 ; VAR_4<VAR_3 ; VAR_4++)
  FUNC_0 ("  ");
 if (VAR_2->planenum == VAR_0)
 {
  if (!VAR_2->brushlist)
   FUNC_0 ("NULL\n");
  else
  {
   for (VAR_6=VAR_2->brushlist ; VAR_6 ; VAR_6=VAR_6->next)
    FUNC_0 ("%i ", VAR_6->original->brushnum);
   FUNC_0 ("\n");
  }
  return;
 }

 VAR_5 = &VAR_1[VAR_2->planenum];
 FUNC_0 ("#%i (%5.2f %5.2f %5.2f):%5.2f\n", VAR_2->planenum,
  VAR_5->normal[0], VAR_5->normal[1], VAR_5->normal[2],
  VAR_5->dist);
 FUNC_1 (VAR_2->children[0], VAR_3+1);
 FUNC_1 (VAR_2->children[1], VAR_3+1);
}
