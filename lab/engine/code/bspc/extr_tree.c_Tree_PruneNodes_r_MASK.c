
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ planenum; int contents; int detail_seperator; struct TYPE_5__** children; TYPE_2__* brushlist; scalar_t__ faces; } ;
typedef TYPE_1__ node_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ bspbrush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_2 (node_t *VAR_5)
{
 bspbrush_t *VAR_6, *VAR_7;

 if (VAR_5->planenum == VAR_2) return;

 FUNC_2 (VAR_5->children[0]);
 FUNC_2 (VAR_5->children[1]);

 if (VAR_4)
 {
  if ((VAR_5->children[0]->contents & VAR_0) ||
    (VAR_5->children[1]->contents & VAR_0)) return;
 }

 if ((VAR_5->children[0]->contents & VAR_1)
  && (VAR_5->children[1]->contents & VAR_1))
 {
  if (VAR_5->faces)
   FUNC_0 ("node->faces seperating CONTENTS_SOLID");
  if (VAR_5->children[0]->faces || VAR_5->children[1]->faces)
   FUNC_0 ("!node->faces with children");

  VAR_5->planenum = VAR_2;
  VAR_5->contents = VAR_1;
  VAR_5->detail_seperator = 0;

  if (VAR_5->brushlist)
   FUNC_0 ("PruneNodes: node->brushlist");

  VAR_5->brushlist = VAR_5->children[1]->brushlist;

  for (VAR_6 = VAR_5->children[0]->brushlist; VAR_6; VAR_6 = VAR_7)
  {
   VAR_7 = VAR_6->next;
   VAR_6->next = VAR_5->brushlist;
   VAR_5->brushlist = VAR_6;
  }

  FUNC_1(VAR_5->children[0]);
  FUNC_1(VAR_5->children[1]);

  VAR_3 += 2;
 }
}
