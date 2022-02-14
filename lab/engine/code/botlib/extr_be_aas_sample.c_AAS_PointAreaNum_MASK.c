
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_6__ {size_t planenum; int* children; } ;
typedef TYPE_2__ aas_node_t ;
struct TYPE_8__ {int numnodes; size_t numplanes; TYPE_1__* planes; TYPE_2__* nodes; int loaded; } ;
struct TYPE_7__ {int (* Print ) (int ,char*) ;} ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(vec3_t VAR_4)
{
 int VAR_5;
 vec_t VAR_6;
 aas_node_t *VAR_7;
 aas_plane_t *VAR_8;

 if (!VAR_2.loaded)
 {
  VAR_3.Print(VAR_0, "AAS_PointAreaNum: aas not loaded\n");
  return 0;
 }


 VAR_5 = 1;
 while (VAR_5 > 0)
 {
  VAR_7 = &VAR_2.nodes[VAR_5];







  VAR_8 = &VAR_2.planes[VAR_7->planenum];
  VAR_6 = FUNC_0(VAR_4, VAR_8->normal) - VAR_8->dist;
  if (VAR_6 > 0) VAR_5 = VAR_7->children[0];
  else VAR_5 = VAR_7->children[1];
 }
 if (!VAR_5)
 {



  return 0;
 }
 return -VAR_5;
}
