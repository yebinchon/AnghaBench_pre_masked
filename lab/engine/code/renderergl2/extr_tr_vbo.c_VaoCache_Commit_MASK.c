
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int srfVert_t ;
struct TYPE_7__ {scalar_t__ indexes; int numIndexes; int numVerts; int vertexes; } ;
typedef TYPE_1__ queuedSurface_t ;
typedef int glIndex_t ;
struct TYPE_8__ {scalar_t__ data; int size; int bufferOffset; } ;
typedef TYPE_2__ buffered_t ;
struct TYPE_12__ {int indexesIBO; int vertexesVBO; } ;
struct TYPE_11__ {int firstIndex; } ;
struct TYPE_10__ {int* batchLengths; int numBatches; int numSurfaces; int indexOffset; int vertexOffset; TYPE_6__* vao; TYPE_2__* surfaceIndexSets; } ;
struct TYPE_9__ {int numSurfaces; int vertexCommitSize; int indexCommitSize; int * indexes; int * vertexes; TYPE_1__* surfaces; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int,int *) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;

void FUNC_4(void)
{
 buffered_t *VAR_5;
 int *VAR_6;
 queuedSurface_t *VAR_7, *VAR_8 = VAR_4.surfaces + VAR_4.numSurfaces;

 FUNC_1(VAR_3.vao);



 VAR_5 = VAR_3.surfaceIndexSets;
 VAR_6 = VAR_3.batchLengths;
 for (; VAR_6 < VAR_3.batchLengths + VAR_3.numBatches; VAR_6++)
 {
  if (*VAR_6 == VAR_4.numSurfaces)
  {
   buffered_t *VAR_9 = VAR_5;
   for (VAR_7 = VAR_4.surfaces; VAR_7 < VAR_8; VAR_7++, VAR_9++)
   {
    if (VAR_7->indexes != VAR_9->data || (VAR_7->numIndexes * sizeof(glIndex_t)) != VAR_9->size)
     break;
   }

   if (VAR_7 == VAR_8)
    break;
  }

  VAR_5 += *VAR_6;
 }


 if (VAR_5 < VAR_3.surfaceIndexSets + VAR_3.numSurfaces)
 {
  VAR_2.firstIndex = VAR_5->bufferOffset / sizeof(glIndex_t);


 }


 else
 {
  srfVert_t *VAR_10 = VAR_4.vertexes;
  glIndex_t *VAR_11 = VAR_4.indexes;

  VAR_6 = VAR_3.batchLengths + VAR_3.numBatches;
  *VAR_6 = VAR_4.numSurfaces;
  VAR_3.numBatches++;

  VAR_2.firstIndex = VAR_3.indexOffset / sizeof(glIndex_t);
  VAR_4.vertexCommitSize = 0;
  VAR_4.indexCommitSize = 0;
  for (VAR_7 = VAR_4.surfaces; VAR_7 < VAR_8; VAR_7++)
  {
   glIndex_t *VAR_12 = VAR_7->indexes;
   int VAR_13 = VAR_7->numVerts * sizeof(srfVert_t);
   int VAR_14 = VAR_7->numIndexes * sizeof(glIndex_t);
   int VAR_15, VAR_16 = (VAR_3.vertexOffset + VAR_4.vertexCommitSize) / sizeof(srfVert_t);

   FUNC_0(VAR_10, VAR_7->vertexes, VAR_13);
   VAR_10 += VAR_7->numVerts;

   VAR_4.vertexCommitSize += VAR_13;

   VAR_5 = VAR_3.surfaceIndexSets + VAR_3.numSurfaces;
   VAR_5->data = VAR_7->indexes;
   VAR_5->size = VAR_14;
   VAR_5->bufferOffset = VAR_3.indexOffset + VAR_4.indexCommitSize;
   VAR_3.numSurfaces++;

   for (VAR_15 = 0; VAR_15 < VAR_7->numIndexes; VAR_15++)
    *VAR_11++ = *VAR_12++ + VAR_16;

   VAR_4.indexCommitSize += VAR_14;
  }



  if (VAR_4.vertexCommitSize)
  {
   FUNC_2(VAR_0, VAR_3.vao->vertexesVBO);
   FUNC_3(VAR_0, VAR_3.vertexOffset, VAR_4.vertexCommitSize, VAR_4.vertexes);
   VAR_3.vertexOffset += VAR_4.vertexCommitSize;
  }

  if (VAR_4.indexCommitSize)
  {
   FUNC_2(VAR_1, VAR_3.vao->indexesIBO);
   FUNC_3(VAR_1, VAR_3.indexOffset, VAR_4.indexCommitSize, VAR_4.indexes);
   VAR_3.indexOffset += VAR_4.indexCommitSize;
  }
 }
}
