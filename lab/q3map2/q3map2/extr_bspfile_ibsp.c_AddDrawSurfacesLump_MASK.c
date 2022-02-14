
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ibspHeader_t ;
struct TYPE_8__ {int patchHeight; int patchWidth; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; int lightmapNum; int numIndexes; int firstIndex; int numVerts; int firstVert; int surfaceType; int fogNum; int shaderNum; } ;
typedef TYPE_1__ ibspDrawSurface_t ;
typedef int bspHeader_t ;
struct TYPE_9__ {int patchHeight; int patchWidth; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; int * lightmapY; int * lightmapX; int * lightmapNum; int numIndexes; int firstIndex; int numVerts; int firstVert; int surfaceType; int fogNum; int shaderNum; } ;
typedef TYPE_2__ bspDrawSurface_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,int ,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( FILE *VAR_3, ibspHeader_t *VAR_4 ){
 int VAR_5, VAR_6;
 bspDrawSurface_t *VAR_7;
 ibspDrawSurface_t *VAR_8, *VAR_9;



 VAR_6 = VAR_2 * sizeof( *VAR_8 );
 VAR_8 = FUNC_4( VAR_6 );
 FUNC_3( VAR_8, 0, VAR_6 );


 VAR_7 = VAR_1;
 VAR_9 = VAR_8;
 for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
 {
  VAR_9->shaderNum = VAR_7->shaderNum;
  VAR_9->fogNum = VAR_7->fogNum;
  VAR_9->surfaceType = VAR_7->surfaceType;
  VAR_9->firstVert = VAR_7->firstVert;
  VAR_9->numVerts = VAR_7->numVerts;
  VAR_9->firstIndex = VAR_7->firstIndex;
  VAR_9->numIndexes = VAR_7->numIndexes;

  VAR_9->lightmapNum = VAR_7->lightmapNum[ 0 ];
  VAR_9->lightmapX = VAR_7->lightmapX[ 0 ];
  VAR_9->lightmapY = VAR_7->lightmapY[ 0 ];
  VAR_9->lightmapWidth = VAR_7->lightmapWidth;
  VAR_9->lightmapHeight = VAR_7->lightmapHeight;

  FUNC_1( VAR_7->lightmapOrigin, VAR_9->lightmapOrigin );
  FUNC_1( VAR_7->lightmapVecs[ 0 ], VAR_9->lightmapVecs[ 0 ] );
  FUNC_1( VAR_7->lightmapVecs[ 1 ], VAR_9->lightmapVecs[ 1 ] );
  FUNC_1( VAR_7->lightmapVecs[ 2 ], VAR_9->lightmapVecs[ 2 ] );

  VAR_9->patchWidth = VAR_7->patchWidth;
  VAR_9->patchHeight = VAR_7->patchHeight;

  VAR_7++;
  VAR_9++;
 }


 FUNC_0( VAR_3, (bspHeader_t*) VAR_4, VAR_0, VAR_8, VAR_6 );


 FUNC_2( VAR_8 );
}
