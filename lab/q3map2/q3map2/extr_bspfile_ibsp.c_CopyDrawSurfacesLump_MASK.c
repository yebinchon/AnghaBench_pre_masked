
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_5__ {int lightmapNum; int patchHeight; int patchWidth; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; scalar_t__ lightmapY; scalar_t__ lightmapX; int numIndexes; int firstIndex; int numVerts; int firstVert; int surfaceType; int fogNum; int shaderNum; } ;
typedef TYPE_1__ ibspDrawSurface_t ;
typedef int bspHeader_t ;
struct TYPE_6__ {int* lightmapNum; int patchHeight; int patchWidth; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; scalar_t__* lightmapY; scalar_t__* lightmapX; void** vertexStyles; void** lightmapStyles; int numIndexes; int firstIndex; int numVerts; int firstVert; int surfaceType; int fogNum; int shaderNum; } ;
typedef TYPE_2__ bspDrawSurface_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4( ibspHeader_t *VAR_6 ){
 int VAR_7, VAR_8;
 ibspDrawSurface_t *VAR_9;
 bspDrawSurface_t *VAR_10;



 VAR_5 = FUNC_1( (bspHeader_t*) VAR_6, VAR_2, sizeof( *VAR_9 ) );
 FUNC_2( VAR_5 );


 VAR_9 = FUNC_0( (bspHeader_t*) VAR_6, VAR_2 );
 VAR_10 = VAR_4;
 for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
 {
  VAR_10->shaderNum = VAR_9->shaderNum;
  VAR_10->fogNum = VAR_9->fogNum;
  VAR_10->surfaceType = VAR_9->surfaceType;
  VAR_10->firstVert = VAR_9->firstVert;
  VAR_10->numVerts = VAR_9->numVerts;
  VAR_10->firstIndex = VAR_9->firstIndex;
  VAR_10->numIndexes = VAR_9->numIndexes;

  VAR_10->lightmapStyles[ 0 ] = VAR_1;
  VAR_10->vertexStyles[ 0 ] = VAR_1;
  VAR_10->lightmapNum[ 0 ] = VAR_9->lightmapNum;
  VAR_10->lightmapX[ 0 ] = VAR_9->lightmapX;
  VAR_10->lightmapY[ 0 ] = VAR_9->lightmapY;

  for ( VAR_8 = 1; VAR_8 < VAR_3; VAR_8++ )
  {
   VAR_10->lightmapStyles[ VAR_8 ] = VAR_0;
   VAR_10->vertexStyles[ VAR_8 ] = VAR_0;
   VAR_10->lightmapNum[ VAR_8 ] = -3;
   VAR_10->lightmapX[ VAR_8 ] = 0;
   VAR_10->lightmapY[ VAR_8 ] = 0;
  }

  VAR_10->lightmapWidth = VAR_9->lightmapWidth;
  VAR_10->lightmapHeight = VAR_9->lightmapHeight;

  FUNC_3( VAR_9->lightmapOrigin, VAR_10->lightmapOrigin );
  FUNC_3( VAR_9->lightmapVecs[ 0 ], VAR_10->lightmapVecs[ 0 ] );
  FUNC_3( VAR_9->lightmapVecs[ 1 ], VAR_10->lightmapVecs[ 1 ] );
  FUNC_3( VAR_9->lightmapVecs[ 2 ], VAR_10->lightmapVecs[ 2 ] );

  VAR_10->patchWidth = VAR_9->patchWidth;
  VAR_10->patchHeight = VAR_9->patchHeight;

  VAR_9++;
  VAR_10++;
 }
}
