
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec_t ;
typedef int * vec3_t ;
typedef int qboolean ;
struct TYPE_5__ {int normal; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_6__ {size_t planenum; int numedges; int firstedge; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_7__ {size_t* v; } ;
typedef TYPE_3__ aas_edge_t ;
struct TYPE_8__ {int* edgeindex; int ** vertexes; TYPE_3__* edges; TYPE_1__* planes; TYPE_2__* faces; int loaded; } ;


 int FUNC_0 (int *,int ,int *) ;
 float FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 TYPE_4__ VAR_0 ;
 size_t FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_4(int VAR_3, vec3_t VAR_4, float VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 vec_t *VAR_9, *VAR_10;
 vec3_t VAR_11, VAR_12, VAR_13;
 aas_edge_t *VAR_14;
 aas_plane_t *VAR_15;
 aas_face_t *VAR_16;

 if (!VAR_0.loaded) return VAR_1;

 VAR_16 = &VAR_0.faces[VAR_3];
 VAR_15 = &VAR_0.planes[VAR_16->planenum];

 for (VAR_6 = 0; VAR_6 < VAR_16->numedges; VAR_6++)
 {
  VAR_8 = VAR_0.edgeindex[VAR_16->firstedge + VAR_6];
  VAR_14 = &VAR_0.edges[FUNC_3(VAR_8)];

  VAR_7 = VAR_8 < 0;
  VAR_9 = VAR_0.vertexes[VAR_14->v[VAR_7]];
  VAR_10 = VAR_0.vertexes[VAR_14->v[!VAR_7]];

  FUNC_2(VAR_10, VAR_9, VAR_11);

  FUNC_2(VAR_4, VAR_9, VAR_12);

  FUNC_0(VAR_11, VAR_15->normal, VAR_13);

  if (FUNC_1(VAR_12, VAR_13) < -VAR_5) return VAR_1;
 }
 return VAR_2;
}
