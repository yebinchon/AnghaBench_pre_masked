
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int srfVert_t ;
typedef int qboolean ;
typedef int glIndex_t ;
struct TYPE_6__ {scalar_t__ vertexOffset; scalar_t__ indexOffset; scalar_t__ numSurfaces; scalar_t__ numBatches; TYPE_1__* vao; } ;
struct TYPE_5__ {int vertexCommitSize; int indexCommitSize; scalar_t__ numSurfaces; } ;
struct TYPE_4__ {scalar_t__ vertexesSize; scalar_t__ indexesSize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;

void FUNC_0(qboolean *VAR_8, qboolean *VAR_9, qboolean *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = sizeof(srfVert_t) * VAR_11;
 int VAR_14 = sizeof(glIndex_t) * VAR_12;

 if (VAR_6.vao->vertexesSize < VAR_6.vertexOffset + VAR_7.vertexCommitSize + VAR_13)
 {

  *VAR_9 = VAR_5;
  *VAR_10 = VAR_5;
  *VAR_8 = VAR_5;
 }

 if (VAR_6.vao->indexesSize < VAR_6.indexOffset + VAR_7.indexCommitSize + VAR_14)
 {

  *VAR_10 = VAR_5;
  *VAR_8 = VAR_5;
 }

 if (VAR_6.numSurfaces + VAR_7.numSurfaces >= VAR_1)
 {

  *VAR_10 = VAR_5;
  *VAR_8 = VAR_5;
 }

 if (VAR_6.numBatches >= VAR_0)
 {

  *VAR_10 = VAR_5;
  *VAR_8 = VAR_5;
 }

 if (VAR_7.numSurfaces >= VAR_3)
 {

  *VAR_8 = VAR_5;
 }

 if (VAR_4 * sizeof(srfVert_t) < VAR_7.vertexCommitSize + VAR_13)
 {

  *VAR_8 = VAR_5;
 }

 if (VAR_2 * sizeof(glIndex_t) < VAR_7.indexCommitSize + VAR_14)
 {

  *VAR_8 = VAR_5;
 }
}
