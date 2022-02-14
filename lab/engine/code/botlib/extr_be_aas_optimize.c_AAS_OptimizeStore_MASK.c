
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ faceoptimizeindex; scalar_t__ edgeoptimizeindex; scalar_t__ vertexoptimizeindex; int numareas; scalar_t__ areas; int faceindexsize; scalar_t__ faceindex; int numfaces; scalar_t__ faces; int edgeindexsize; scalar_t__ edgeindex; int numedges; scalar_t__ edges; int numvertexes; scalar_t__ vertexes; } ;
typedef TYPE_1__ optimized_t ;
struct TYPE_5__ {int numareas; scalar_t__ areas; int faceindexsize; scalar_t__ faceindex; int numfaces; scalar_t__ faces; int edgeindexsize; scalar_t__ edgeindex; int numedges; scalar_t__ edges; int numvertexes; scalar_t__ vertexes; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(optimized_t *VAR_1)
{

 if (VAR_0.vertexes) FUNC_0(VAR_0.vertexes);
 VAR_0.vertexes = VAR_1->vertexes;
 VAR_0.numvertexes = VAR_1->numvertexes;

 if (VAR_0.edges) FUNC_0(VAR_0.edges);
 VAR_0.edges = VAR_1->edges;
 VAR_0.numedges = VAR_1->numedges;

 if (VAR_0.edgeindex) FUNC_0(VAR_0.edgeindex);
 VAR_0.edgeindex = VAR_1->edgeindex;
 VAR_0.edgeindexsize = VAR_1->edgeindexsize;

 if (VAR_0.faces) FUNC_0(VAR_0.faces);
 VAR_0.faces = VAR_1->faces;
 VAR_0.numfaces = VAR_1->numfaces;

 if (VAR_0.faceindex) FUNC_0(VAR_0.faceindex);
 VAR_0.faceindex = VAR_1->faceindex;
 VAR_0.faceindexsize = VAR_1->faceindexsize;

 if (VAR_0.areas) FUNC_0(VAR_0.areas);
 VAR_0.areas = VAR_1->areas;
 VAR_0.numareas = VAR_1->numareas;

 FUNC_0(VAR_1->vertexoptimizeindex);
 FUNC_0(VAR_1->edgeoptimizeindex);
 FUNC_0(VAR_1->faceoptimizeindex);
}
