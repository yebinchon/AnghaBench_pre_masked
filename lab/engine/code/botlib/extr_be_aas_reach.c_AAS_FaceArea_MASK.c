
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {size_t firstedge; int numedges; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_6__ {size_t* v; } ;
typedef TYPE_2__ aas_edge_t ;
struct TYPE_7__ {int* edgeindex; int ** vertexes; TYPE_2__* edges; } ;


 int FUNC_0 (int ,int ,int ) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 TYPE_3__ VAR_0 ;
 size_t FUNC_3 (int) ;

float FUNC_4(aas_face_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 float VAR_5;
 vec_t *VAR_6;
 vec3_t VAR_7, VAR_8, VAR_9;
 aas_edge_t *VAR_10;

 VAR_3 = VAR_0.edgeindex[VAR_1->firstedge];
 VAR_4 = VAR_3 < 0;
 VAR_10 = &VAR_0.edges[FUNC_3(VAR_3)];
 VAR_6 = VAR_0.vertexes[VAR_10->v[VAR_4]];

 VAR_5 = 0;
 for (VAR_2 = 1; VAR_2 < VAR_1->numedges - 1; VAR_2++)
 {
  VAR_3 = VAR_0.edgeindex[VAR_1->firstedge + VAR_2];
  VAR_4 = VAR_3 < 0;
  VAR_10 = &VAR_0.edges[FUNC_3(VAR_3)];
  FUNC_2(VAR_0.vertexes[VAR_10->v[VAR_4]], VAR_6, VAR_7);
  FUNC_2(VAR_0.vertexes[VAR_10->v[!VAR_4]], VAR_6, VAR_8);
  FUNC_0(VAR_7, VAR_8, VAR_9);
  VAR_5 += 0.5 * FUNC_1(VAR_9);
 }
 return VAR_5;
}
