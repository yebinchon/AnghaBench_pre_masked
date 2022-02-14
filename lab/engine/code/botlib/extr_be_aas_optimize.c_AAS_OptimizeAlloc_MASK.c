
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numedges; int numfaces; int numareas; int* vertexoptimizeindex; int* edgeoptimizeindex; int* faceoptimizeindex; int * areas; scalar_t__ faceindexsize; int * faceindex; int * faces; scalar_t__ edgeindexsize; int * edgeindex; int * edges; scalar_t__ numvertexes; int * vertexes; } ;
typedef TYPE_1__ optimized_t ;
typedef int aas_vertex_t ;
typedef int aas_faceindex_t ;
typedef int aas_face_t ;
typedef int aas_edgeindex_t ;
typedef int aas_edge_t ;
typedef int aas_area_t ;
struct TYPE_5__ {int numvertexes; int numedges; int edgeindexsize; int numfaces; int faceindexsize; int numareas; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(optimized_t *VAR_1)
{
 VAR_1->vertexes = (aas_vertex_t *) FUNC_0(VAR_0.numvertexes * sizeof(aas_vertex_t));
 VAR_1->numvertexes = 0;
 VAR_1->edges = (aas_edge_t *) FUNC_0(VAR_0.numedges * sizeof(aas_edge_t));
 VAR_1->numedges = 1;
 VAR_1->edgeindex = (aas_edgeindex_t *) FUNC_0(VAR_0.edgeindexsize * sizeof(aas_edgeindex_t));
 VAR_1->edgeindexsize = 0;
 VAR_1->faces = (aas_face_t *) FUNC_0(VAR_0.numfaces * sizeof(aas_face_t));
 VAR_1->numfaces = 1;
 VAR_1->faceindex = (aas_faceindex_t *) FUNC_0(VAR_0.faceindexsize * sizeof(aas_faceindex_t));
 VAR_1->faceindexsize = 0;
 VAR_1->areas = (aas_area_t *) FUNC_0(VAR_0.numareas * sizeof(aas_area_t));
 VAR_1->numareas = VAR_0.numareas;

 VAR_1->vertexoptimizeindex = (int *) FUNC_0(VAR_0.numvertexes * sizeof(int));
 VAR_1->edgeoptimizeindex = (int *) FUNC_0(VAR_0.numedges * sizeof(int));
 VAR_1->faceoptimizeindex = (int *) FUNC_0(VAR_0.numfaces * sizeof(int));
}
