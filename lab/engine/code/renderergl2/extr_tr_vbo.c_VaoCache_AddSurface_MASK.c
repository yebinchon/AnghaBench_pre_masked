
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int srfVert_t ;
struct TYPE_3__ {int numVerts; int numIndexes; int * indexes; int * vertexes; } ;
typedef TYPE_1__ queuedSurface_t ;
typedef int glIndex_t ;
struct TYPE_4__ {int numSurfaces; int vertexCommitSize; int indexCommitSize; TYPE_1__* surfaces; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(srfVert_t *VAR_1, int VAR_2, glIndex_t *VAR_3, int VAR_4)
{
 queuedSurface_t *VAR_5 = VAR_0.surfaces + VAR_0.numSurfaces;
 VAR_5->vertexes = VAR_1;
 VAR_5->numVerts = VAR_2;
 VAR_5->indexes = VAR_3;
 VAR_5->numIndexes = VAR_4;
 VAR_0.numSurfaces++;

 VAR_0.vertexCommitSize += sizeof(srfVert_t) * VAR_2;
 VAR_0.indexCommitSize += sizeof(glIndex_t) * VAR_4;
}
