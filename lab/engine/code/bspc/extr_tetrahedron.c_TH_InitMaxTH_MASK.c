
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int th_vertex_t ;
typedef int th_triangle_t ;
typedef int th_tetrahedron_t ;
typedef int th_plane_t ;
typedef int th_edge_t ;
struct TYPE_2__ {int trianglehash; int edgehash; int planehash; int vertexhash; int * tetrahedrons; int * triangles; int * edges; int * planes; int * vertexes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__ VAR_9 ;

void FUNC_2(void)
{

 VAR_9.vertexes = (th_vertex_t *) FUNC_0(VAR_5 * sizeof(th_vertex_t));
 VAR_9.planes = (th_plane_t *) FUNC_0(VAR_2 * sizeof(th_plane_t));
 VAR_9.edges = (th_edge_t *) FUNC_0(VAR_1 * sizeof(th_edge_t));
 VAR_9.triangles = (th_triangle_t *) FUNC_0(VAR_4 * sizeof(th_triangle_t));
 VAR_9.tetrahedrons = (th_tetrahedron_t *) FUNC_0(VAR_3 * sizeof(th_tetrahedron_t));

 FUNC_1(VAR_9.vertexhash, 0, VAR_8 * sizeof(th_vertex_t *));
 FUNC_1(VAR_9.planehash, 0, VAR_6 * sizeof(th_plane_t *));
 FUNC_1(VAR_9.edgehash, 0, VAR_0 * sizeof(th_edge_t *));
 FUNC_1(VAR_9.trianglehash, 0, VAR_7 * sizeof(th_triangle_t *));
}
