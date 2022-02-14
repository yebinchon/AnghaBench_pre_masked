
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


typedef int q3_dsurface_t ;
typedef int q3_drawVert_t ;
typedef int q3_dbrushside_t ;
struct TYPE_12__ {int shaderNum; int planeNum; } ;
struct TYPE_11__ {int patchHeight; int patchWidth; int ** lightmapVecs; int * lightmapOrigin; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; int lightmapNum; int numIndexes; int firstIndex; int numVerts; int firstVert; int surfaceType; int fogNum; int shaderNum; } ;
struct TYPE_10__ {int * color; int * lightmap; int * st; int * normal; int * xyz; } ;
struct TYPE_9__ {int shaderNum; int planeNum; } ;
struct TYPE_8__ {int patchHeight; int patchWidth; int ** lightmapVecs; int * lightmapOrigin; int lightmapHeight; int lightmapWidth; int ** lightmapXY; int * lightmapNum; int numIndexes; int firstIndex; int numVerts; int firstVert; int surfaceType; int fogNum; int shaderNum; } ;
struct TYPE_7__ {int ** color; int ** lightmap; int * st; int * normal; int * xyz; } ;


 void* FUNC_0 (int) ;
 TYPE_6__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_12, VAR_13;

 VAR_5 = VAR_11;
 VAR_0 = FUNC_0(VAR_5 * sizeof(q3_dbrushside_t));
 for( VAR_12 = 0; VAR_12 < VAR_5; VAR_12++ ) {
  VAR_0[VAR_12].planeNum = VAR_6[VAR_12].planeNum;
  VAR_0[VAR_12].shaderNum = VAR_6[VAR_12].shaderNum;
 }

 VAR_4 = VAR_10;
 VAR_2 = FUNC_0(VAR_4 * sizeof(q3_drawVert_t));
 for( VAR_12 = 0; VAR_12 < VAR_4; VAR_12++ ) {
  for( VAR_13 = 0; VAR_13 < 3; VAR_13++ ) {
   VAR_2[VAR_12].xyz[VAR_13] = VAR_8[VAR_12].xyz[VAR_13];
   VAR_2[VAR_12].normal[VAR_13] = VAR_8[VAR_12].normal[VAR_13];
  }
  for( VAR_13 = 0; VAR_13 < 2; VAR_13++ ) {
   VAR_2[VAR_12].st[VAR_13] = VAR_8[VAR_12].st[VAR_13];
  }
  for( VAR_13 = 0; VAR_13 < 2; VAR_13++ ) {
   VAR_2[VAR_12].lightmap[VAR_13] = VAR_8[VAR_12].lightmap[0][VAR_13];
  }
  for( VAR_13 = 0; VAR_13 < 4; VAR_13++ ) {
   VAR_2[VAR_12].color[VAR_13] = VAR_8[VAR_12].color[0][VAR_13];
  }
 }

 VAR_3 = VAR_9;
 VAR_1 = FUNC_0(VAR_3 * sizeof(q3_dsurface_t));
 for( VAR_12 = 0; VAR_12 < VAR_3; VAR_12++ ) {
  VAR_1[VAR_12].shaderNum = VAR_7[VAR_12].shaderNum;
  VAR_1[VAR_12].fogNum = VAR_7[VAR_12].fogNum;
  VAR_1[VAR_12].surfaceType = VAR_7[VAR_12].surfaceType;

  VAR_1[VAR_12].firstVert = VAR_7[VAR_12].firstVert;
  VAR_1[VAR_12].numVerts = VAR_7[VAR_12].numVerts;

  VAR_1[VAR_12].firstIndex = VAR_7[VAR_12].firstIndex;
  VAR_1[VAR_12].numIndexes = VAR_7[VAR_12].numIndexes;

  VAR_1[VAR_12].lightmapNum = VAR_7[VAR_12].lightmapNum[0];
  VAR_1[VAR_12].lightmapX = VAR_7[VAR_12].lightmapXY[0][0];
  VAR_1[VAR_12].lightmapY = VAR_7[VAR_12].lightmapXY[0][1];
  VAR_1[VAR_12].lightmapWidth = VAR_7[VAR_12].lightmapWidth;
  VAR_1[VAR_12].lightmapHeight = VAR_7[VAR_12].lightmapHeight;

  for( VAR_13 = 0; VAR_13 < 3; VAR_13++ ) {
   VAR_1[VAR_12].lightmapOrigin[VAR_13] = VAR_7[VAR_12].lightmapOrigin[VAR_13];
   VAR_1[VAR_12].lightmapVecs[0][VAR_13] = VAR_7[VAR_12].lightmapVecs[0][VAR_13];
   VAR_1[VAR_12].lightmapVecs[1][VAR_13] = VAR_7[VAR_12].lightmapVecs[1][VAR_13];
   VAR_1[VAR_12].lightmapVecs[2][VAR_13] = VAR_7[VAR_12].lightmapVecs[2][VAR_13];
  }

  VAR_1[VAR_12].patchWidth = VAR_7[VAR_12].patchWidth;
  VAR_1[VAR_12].patchHeight = VAR_7[VAR_12].patchHeight;
 }
}
