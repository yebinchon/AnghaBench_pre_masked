
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int numVerts; int patchHeight; int patchWidth; size_t outputNum; scalar_t__ planar; size_t type; int * lightmapVecs; int * bounds; int lightmapOrigin; int fogNum; TYPE_1__* shaderInfo; scalar_t__ sampleSize; int lightmapAxis; TYPE_3__* verts; scalar_t__ backSide; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_16__ {int normal; } ;
typedef TYPE_3__ bspDrawVert_t ;
struct TYPE_17__ {int patchWidth; int patchHeight; int* lightmapNum; int * lightmapVecs; int lightmapOrigin; void** vertexStyles; void** lightmapStyles; int fogNum; void* shaderNum; int surfaceType; } ;
typedef TYPE_4__ bspDrawSurface_t ;
struct TYPE_14__ {int surfaceFlags; int contentFlags; char* shader; scalar_t__ invert; } ;


 int FUNC_0 (char*,int*,int*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 void* FUNC_3 (char*,int*,int*) ;
 int FUNC_4 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,float,int ) ;
 TYPE_4__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;
 size_t VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_10( mapDrawSurface_t *VAR_11 ){
 int VAR_12, VAR_13;
 bspDrawSurface_t *VAR_14;
 int VAR_15, VAR_16;



 if ( VAR_11->backSide || VAR_11->shaderInfo->invert ) {
  bspDrawVert_t *VAR_17, *VAR_18, VAR_19;



  for ( VAR_12 = 0; VAR_12 < VAR_11->numVerts; VAR_12++ )
   FUNC_7( VAR_11->verts[ VAR_12 ].normal, -1.0f, VAR_11->verts[ VAR_12 ].normal );


  for ( VAR_13 = 0; VAR_13 < VAR_11->patchHeight; VAR_13++ )
  {
   for ( VAR_12 = 0; VAR_12 < ( VAR_11->patchWidth / 2 ); VAR_12++ )
   {
    VAR_17 = &VAR_11->verts[ VAR_13 * VAR_11->patchWidth + VAR_12 ];
    VAR_18 = &VAR_11->verts[ VAR_13 * VAR_11->patchWidth + ( VAR_11->patchWidth - VAR_12 - 1 ) ];
    FUNC_8( &VAR_19, VAR_17, sizeof( bspDrawVert_t ) );
    FUNC_8( VAR_17, VAR_18, sizeof( bspDrawVert_t ) );
    FUNC_8( VAR_18, &VAR_19, sizeof( bspDrawVert_t ) );
   }
  }


  FUNC_7( VAR_11->lightmapVecs[ 2 ], -1.0f, VAR_11->lightmapVecs[ 2 ] );
 }


 if ( VAR_7 == VAR_3 ) {
  FUNC_4( "MAX_MAP_DRAW_SURFS" );
 }
 VAR_14 = &VAR_5[ VAR_7 ];
 VAR_11->outputNum = VAR_7;
 VAR_7++;
 FUNC_9( VAR_14, 0, sizeof( *VAR_14 ) );


 VAR_14->surfaceType = VAR_4;
 if ( VAR_6 ) {
  VAR_14->shaderNum = FUNC_3( "debugsurfaces", ((void*)0), ((void*)0) );
 }
 else if ( VAR_9 ) {

  VAR_15 = VAR_11->shaderInfo->surfaceFlags;
  VAR_16 = VAR_11->shaderInfo->contentFlags;
  FUNC_0( "nodraw", &VAR_16, &VAR_15, ((void*)0) );
  FUNC_0( "pointlight", &VAR_16, &VAR_15, ((void*)0) );


  FUNC_5( VAR_11->lightmapVecs[ 2 ] );
  FUNC_5( VAR_11->lightmapAxis );
  VAR_11->sampleSize = 0;


  VAR_14->shaderNum = FUNC_3( VAR_11->shaderInfo->shader, &VAR_16, &VAR_15 );
 }
 else{
  VAR_14->shaderNum = FUNC_3( VAR_11->shaderInfo->shader, &VAR_11->shaderInfo->contentFlags, &VAR_11->shaderInfo->surfaceFlags );
 }
 VAR_14->patchWidth = VAR_11->patchWidth;
 VAR_14->patchHeight = VAR_11->patchHeight;
 VAR_14->fogNum = VAR_11->fogNum;


 for ( VAR_12 = 0; VAR_12 < VAR_2; VAR_12++ )
 {
  VAR_14->lightmapNum[ VAR_12 ] = -3;
  VAR_14->lightmapStyles[ VAR_12 ] = VAR_0;
  VAR_14->vertexStyles[ VAR_12 ] = VAR_0;
 }
 VAR_14->lightmapStyles[ 0 ] = VAR_1;
 VAR_14->vertexStyles[ 0 ] = VAR_1;


 FUNC_6( VAR_11->lightmapOrigin, VAR_14->lightmapOrigin );
 FUNC_6( VAR_11->bounds[ 0 ], VAR_14->lightmapVecs[ 0 ] );
 FUNC_6( VAR_11->bounds[ 1 ], VAR_14->lightmapVecs[ 1 ] );
 FUNC_6( VAR_11->lightmapVecs[ 2 ], VAR_14->lightmapVecs[ 2 ] );


 if ( VAR_11->planar == VAR_10 ) {
  FUNC_5( VAR_14->lightmapVecs[ 2 ] );
 }


 FUNC_2( VAR_11, VAR_14 );
 FUNC_1( VAR_11, VAR_14 );


 VAR_8[ VAR_11->type ]++;
}
