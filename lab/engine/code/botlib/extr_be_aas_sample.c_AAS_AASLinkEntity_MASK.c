
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef int aas_plane_t ;
struct TYPE_8__ {size_t planenum; int* children; } ;
typedef TYPE_1__ aas_node_t ;
struct TYPE_9__ {int nodenum; } ;
typedef TYPE_2__ aas_linkstack_t ;
struct TYPE_10__ {int entnum; int areanum; struct TYPE_10__* prev_ent; struct TYPE_10__* next_ent; struct TYPE_10__* prev_area; struct TYPE_10__* next_area; } ;
typedef TYPE_3__ aas_link_t ;
struct TYPE_12__ {int * planes; TYPE_1__* nodes; TYPE_3__** arealinkedentities; int loaded; } ;
struct TYPE_11__ {int (* Print ) (int ,char*) ;} ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

aas_link_t *FUNC_5(vec3_t VAR_3, vec3_t VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 aas_linkstack_t VAR_8[128];
 aas_linkstack_t *VAR_9;
 aas_node_t *VAR_10;
 aas_plane_t *VAR_11;
 aas_link_t *VAR_12, *VAR_13;

 if (!VAR_1.loaded)
 {
  VAR_2.Print(VAR_0, "AAS_LinkEntity: aas not loaded\n");
  return ((void*)0);
 }

 VAR_13 = ((void*)0);

 VAR_9 = VAR_8;


 VAR_9->nodenum = 1;
 VAR_9++;

 while (1)
 {

  VAR_9--;


  if (VAR_9 < VAR_8) break;

  VAR_7 = VAR_9->nodenum;

  if (VAR_7 < 0)
  {


   for (VAR_12 = VAR_1.arealinkedentities[-VAR_7]; VAR_12; VAR_12 = VAR_12->next_ent)
   {
    if (VAR_12->entnum == VAR_5) break;
   }
   if (VAR_12) continue;

   VAR_12 = FUNC_0();
   if (!VAR_12) return VAR_13;
   VAR_12->entnum = VAR_5;
   VAR_12->areanum = -VAR_7;

   VAR_12->prev_area = ((void*)0);
   VAR_12->next_area = VAR_13;
   if (VAR_13) VAR_13->prev_area = VAR_12;
   VAR_13 = VAR_12;

   VAR_12->prev_ent = ((void*)0);
   VAR_12->next_ent = VAR_1.arealinkedentities[-VAR_7];
   if (VAR_1.arealinkedentities[-VAR_7])
     VAR_1.arealinkedentities[-VAR_7]->prev_ent = VAR_12;
   VAR_1.arealinkedentities[-VAR_7] = VAR_12;

   continue;
  }

  if (!VAR_7) continue;

  VAR_10 = &VAR_1.nodes[VAR_7];

  VAR_11 = &VAR_1.planes[VAR_10->planenum];

  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_11);

  if (VAR_6 & 1)
  {
   VAR_9->nodenum = VAR_10->children[0];
   VAR_9++;
  }
  if (VAR_9 >= &VAR_8[127])
  {
   VAR_2.Print(VAR_0, "AAS_LinkEntity: stack overflow\n");
   break;
  }

  if (VAR_6 & 2)
  {
   VAR_9->nodenum = VAR_10->children[1];
   VAR_9++;
  }
  if (VAR_9 >= &VAR_8[127])
  {
   VAR_2.Print(VAR_0, "AAS_LinkEntity: stack overflow\n");
   break;
  }
 }
 return VAR_13;
}
