
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numtetrahedrons; int * tetrahedrons; scalar_t__ numtriangles; int * triangles; scalar_t__ numedges; int * edges; scalar_t__ numplanes; int * planes; scalar_t__ numvertexes; int * vertexes; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{
 if (VAR_0.vertexes) FUNC_0(VAR_0.vertexes);
 VAR_0.vertexes = ((void*)0);
 VAR_0.numvertexes = 0;
 if (VAR_0.planes) FUNC_0(VAR_0.planes);
 VAR_0.planes = ((void*)0);
 VAR_0.numplanes = 0;
 if (VAR_0.edges) FUNC_0(VAR_0.edges);
 VAR_0.edges = ((void*)0);
 VAR_0.numedges = 0;
 if (VAR_0.triangles) FUNC_0(VAR_0.triangles);
 VAR_0.triangles = ((void*)0);
 VAR_0.numtriangles = 0;
 if (VAR_0.tetrahedrons) FUNC_0(VAR_0.tetrahedrons);
 VAR_0.tetrahedrons = ((void*)0);
 VAR_0.numtetrahedrons = 0;
}
