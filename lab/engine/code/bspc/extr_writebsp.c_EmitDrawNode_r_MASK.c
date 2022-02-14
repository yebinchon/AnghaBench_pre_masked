
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ planenum; struct TYPE_8__** children; TYPE_2__* faces; int maxs; int mins; } ;
typedef TYPE_1__ node_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ face_t ;
struct TYPE_10__ {int planenum; void* firstface; int* children; void* numfaces; int maxs; int mins; } ;
typedef TYPE_3__ dnode_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int * VAR_8 ;

int FUNC_4 (node_t *VAR_9)
{
 dnode_t *VAR_10;
 face_t *VAR_11;
 int VAR_12;

 if (VAR_9->planenum == VAR_1)
 {
  FUNC_1 (VAR_9);
  return -VAR_6;
 }


 if (VAR_7 == VAR_0)
  FUNC_2 ("MAX_MAP_NODES");
 VAR_10 = &VAR_4[VAR_7];
 VAR_7++;

 FUNC_3 (VAR_9->mins, VAR_10->mins);
 FUNC_3 (VAR_9->maxs, VAR_10->maxs);

 VAR_8[VAR_9->planenum]++;
 VAR_8[VAR_9->planenum^1]++;

 if (VAR_9->planenum & 1)
  FUNC_2 ("WriteDrawNodes_r: odd planenum");
 VAR_10->planenum = VAR_9->planenum;
 VAR_10->firstface = VAR_5;

 if (!VAR_9->faces)
  VAR_3++;
 else
  VAR_2++;

 for (VAR_11=VAR_9->faces ; VAR_11 ; VAR_11=VAR_11->next)
  FUNC_0 (VAR_11);

 VAR_10->numfaces = VAR_5 - VAR_10->firstface;





 for (VAR_12=0 ; VAR_12<2 ; VAR_12++)
 {
  if (VAR_9->children[VAR_12]->planenum == VAR_1)
  {
   VAR_10->children[VAR_12] = -(VAR_6 + 1);
   FUNC_1 (VAR_9->children[VAR_12]);
  }
  else
  {
   VAR_10->children[VAR_12] = VAR_7;
   FUNC_4 (VAR_9->children[VAR_12]);
  }
 }

 return VAR_10 - VAR_4;
}
