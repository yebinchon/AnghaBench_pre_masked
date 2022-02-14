
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_7__ {int occupied; int occupant; TYPE_2__* portals; } ;
struct TYPE_5__ {TYPE_3__ outside_node; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_6__ {int winding; TYPE_3__** nodes; struct TYPE_6__** next; } ;
typedef TYPE_2__ portal_t ;
typedef TYPE_3__ node_t ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,double*) ;
 int FUNC_2 (int ,double*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,double,double,double) ;
 int FUNC_6 (char*,...) ;
 char* VAR_0 ;
 int FUNC_7 (char*,char*,char*) ;

void FUNC_8 (tree_t *VAR_1)
{
 vec3_t VAR_2;
 FILE *VAR_3;
 char VAR_4[1024];
 node_t *VAR_5;
 int VAR_6;

 if (!VAR_1->outside_node.occupied)
  return;

 FUNC_6 ("--- LeakFile ---\n");




 FUNC_7 (VAR_4, "%s.lin", VAR_0);
 FUNC_6 ("%s\n", VAR_4);
 VAR_3 = FUNC_4 (VAR_4, "w");
 if (!VAR_3)
  FUNC_0 ("Couldn't open %s\n", VAR_4);

 VAR_6 = 0;
 VAR_5 = &VAR_1->outside_node;
 while (VAR_5->occupied > 1)
 {
  int VAR_7;
  portal_t *VAR_8, *VAR_9;
  node_t *VAR_10;
  int VAR_11;


  VAR_7 = VAR_5->occupied;
  for (VAR_8=VAR_5->portals ; VAR_8 ; VAR_8 = VAR_8->next[!VAR_11])
  {
   VAR_11 = (VAR_8->nodes[0] == VAR_5);
   if (VAR_8->nodes[VAR_11]->occupied
    && VAR_8->nodes[VAR_11]->occupied < VAR_7)
   {
    VAR_9 = VAR_8;
    VAR_10 = VAR_8->nodes[VAR_11];
    VAR_7 = VAR_10->occupied;
   }
  }
  VAR_5 = VAR_10;
  FUNC_2 (VAR_9->winding, VAR_2);
  FUNC_5 (VAR_3, "%f %f %f\n", VAR_2[0], VAR_2[1], VAR_2[2]);
  VAR_6++;
 }

 FUNC_1 (VAR_5->occupant, "origin", VAR_2);

 FUNC_5 (VAR_3, "%f %f %f\n", VAR_2[0], VAR_2[1], VAR_2[2]);
 FUNC_6 ("%5i point linefile\n", VAR_6+1);

 FUNC_3 (VAR_3);
}
