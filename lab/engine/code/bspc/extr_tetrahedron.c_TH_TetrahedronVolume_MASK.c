
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int* edges; size_t planenum; } ;
typedef TYPE_3__ th_triangle_t ;
struct TYPE_12__ {int* triangles; } ;
typedef TYPE_4__ th_tetrahedron_t ;
struct TYPE_13__ {float dist; int normal; } ;
typedef TYPE_5__ th_plane_t ;
struct TYPE_14__ {TYPE_2__* vertexes; TYPE_5__* planes; TYPE_1__* edges; TYPE_3__* triangles; } ;
struct TYPE_10__ {int v; } ;
struct TYPE_9__ {int* v; } ;


 float FUNC_0 (int ,int ) ;
 float FUNC_1 (TYPE_3__*) ;
 size_t FUNC_2 (int) ;
 TYPE_6__ VAR_0 ;

float FUNC_3(th_tetrahedron_t *VAR_1)
{
 int VAR_2, VAR_3[3], VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8;
 th_triangle_t *VAR_9, *VAR_10;
 th_plane_t *VAR_11;

 VAR_9 = &VAR_0.triangles[FUNC_2(VAR_1->triangles[0])];
 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 {
  VAR_2 = VAR_9->edges[VAR_4];
  if (VAR_2 < 0) VAR_3[VAR_4] = VAR_0.edges[FUNC_2(VAR_2)].v[1];
  else VAR_3[VAR_4] = VAR_0.edges[VAR_2].v[0];
 }

 VAR_10 = &VAR_0.triangles[FUNC_2(VAR_1->triangles[1])];
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
 {
  VAR_2 = VAR_10->edges[VAR_4];
  if (VAR_2 < 0) VAR_6 = VAR_0.edges[FUNC_2(VAR_2)].v[1];
  else VAR_6 = VAR_0.edges[VAR_2].v[0];
  if (VAR_6 != VAR_3[0] &&
   VAR_6 != VAR_3[1] &&
   VAR_6 != VAR_3[2]) break;
 }

 VAR_11 = &VAR_0.planes[VAR_9->planenum];
 VAR_8 = -(FUNC_0 (VAR_0.vertexes[VAR_6].v, VAR_11->normal) - VAR_11->dist);
 VAR_7 = FUNC_1(VAR_9) * VAR_8 / 3;
 return VAR_7;
}
