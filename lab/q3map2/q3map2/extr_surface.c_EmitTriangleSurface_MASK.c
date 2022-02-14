
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_14__ {int numIndexes; int* indexes; int numVerts; size_t outputNum; size_t type; scalar_t__ planar; int * lightmapVecs; int lightmapOrigin; TYPE_3__* verts; int fogNum; int patchHeight; int patchWidth; TYPE_1__* shaderInfo; int lightmapAxis; scalar_t__ backSide; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_15__ {int xyz; int normal; } ;
typedef TYPE_3__ bspDrawVert_t ;
struct TYPE_16__ {int* lightmapNum; int * lightmapVecs; int lightmapOrigin; void** vertexStyles; void** lightmapStyles; int fogNum; int patchHeight; int patchWidth; void* shaderNum; int surfaceType; } ;
typedef TYPE_4__ bspDrawSurface_t ;
struct TYPE_13__ {char* shader; int surfaceFlags; int contentFlags; scalar_t__ invert; } ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 void* FUNC_2 (char*,int *,int *) ;
 int FUNC_3 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 float FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,float,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 TYPE_4__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (TYPE_4__*,int ,int) ;
 size_t VAR_14 ;
 int * VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_13( mapDrawSurface_t *VAR_17 ){
 int VAR_18, VAR_19;
 bspDrawSurface_t *VAR_20;



 if ( VAR_17->backSide || VAR_17->shaderInfo->invert ) {

  for ( VAR_18 = 0; VAR_18 < VAR_17->numIndexes; VAR_18 += 3 )
  {
   VAR_19 = VAR_17->indexes[ VAR_18 ];
   VAR_17->indexes[ VAR_18 ] = VAR_17->indexes[ VAR_18 + 1 ];
   VAR_17->indexes[ VAR_18 + 1 ] = VAR_19;
  }


  for ( VAR_18 = 0; VAR_18 < VAR_17->numVerts; VAR_18++ )
   FUNC_10( VAR_17->verts[ VAR_18 ].normal, -1.0f, VAR_17->verts[ VAR_18 ].normal );


  FUNC_10( VAR_17->lightmapVecs[ 2 ], -1.0f, VAR_17->lightmapVecs[ 2 ] );
 }


 if ( VAR_14 == VAR_3 ) {
  FUNC_3( "MAX_MAP_DRAW_SURFS" );
 }
 VAR_20 = &VAR_10[ VAR_14 ];
 VAR_17->outputNum = VAR_14;
 VAR_14++;
 FUNC_12( VAR_20, 0, sizeof( *VAR_20 ) );


 if ( VAR_17->type == VAR_8 ) {
  VAR_20->surfaceType = VAR_4;
 }



 else if ( ( FUNC_8( VAR_17->lightmapAxis ) <= 0.0f && VAR_17->planar == VAR_16 ) ||
     VAR_17->type == VAR_9 ||
     VAR_17->type == VAR_7 ||
     VAR_17->numVerts > VAR_13 ||
     VAR_12 ) {
  VAR_20->surfaceType = VAR_6;
 }


 else{
  VAR_20->surfaceType = VAR_5;
 }


 if ( VAR_12 ) {
  VAR_20->shaderNum = FUNC_2( "debugsurfaces", ((void*)0), ((void*)0) );
 }
 else{
  VAR_20->shaderNum = FUNC_2( VAR_17->shaderInfo->shader, &VAR_17->shaderInfo->contentFlags, &VAR_17->shaderInfo->surfaceFlags );
 }
 VAR_20->patchWidth = VAR_17->patchWidth;
 VAR_20->patchHeight = VAR_17->patchHeight;
 VAR_20->fogNum = VAR_17->fogNum;


 if ( VAR_11 ) {
  bspDrawVert_t *VAR_21, *VAR_22, *VAR_23;
  vec3_t VAR_24, VAR_25;



  for ( VAR_18 = 0; VAR_18 < VAR_17->numIndexes; VAR_18 += 3 )
  {

   VAR_21 = &VAR_17->verts[ VAR_17->indexes[ VAR_18 ] ];
   VAR_22 = &VAR_17->verts[ VAR_17->indexes[ VAR_18 + 1 ] ];
   VAR_23 = &VAR_17->verts[ VAR_17->indexes[ VAR_18 + 2 ] ];


   FUNC_7( VAR_21->xyz, VAR_24 );
   FUNC_5( VAR_24, VAR_22->xyz, VAR_24 );
   FUNC_5( VAR_24, VAR_23->xyz, VAR_24 );
   FUNC_10( VAR_24, 1.0f / 3.0f, VAR_24 );


   FUNC_11( VAR_24, VAR_21->xyz, VAR_25 );
   FUNC_9( VAR_25, VAR_25 );
   FUNC_5( VAR_21->xyz, VAR_25, VAR_21->xyz );
   FUNC_11( VAR_24, VAR_22->xyz, VAR_25 );
   FUNC_9( VAR_25, VAR_25 );
   FUNC_5( VAR_22->xyz, VAR_25, VAR_22->xyz );
   FUNC_11( VAR_24, VAR_23->xyz, VAR_25 );
   FUNC_9( VAR_25, VAR_25 );
   FUNC_5( VAR_23->xyz, VAR_25, VAR_23->xyz );
  }
 }


 for ( VAR_18 = 0; VAR_18 < VAR_2; VAR_18++ )
 {
  VAR_20->lightmapNum[ VAR_18 ] = -3;
  VAR_20->lightmapStyles[ VAR_18 ] = VAR_0;
  VAR_20->vertexStyles[ VAR_18 ] = VAR_0;
 }
 VAR_20->lightmapStyles[ 0 ] = VAR_1;
 VAR_20->vertexStyles[ 0 ] = VAR_1;


 FUNC_7( VAR_17->lightmapOrigin, VAR_20->lightmapOrigin );
 FUNC_7( VAR_17->lightmapVecs[ 0 ], VAR_20->lightmapVecs[ 0 ] );
 FUNC_7( VAR_17->lightmapVecs[ 1 ], VAR_20->lightmapVecs[ 1 ] );
 FUNC_7( VAR_17->lightmapVecs[ 2 ], VAR_20->lightmapVecs[ 2 ] );


 if ( VAR_17->planar == VAR_16 ) {
  FUNC_6( VAR_20->lightmapVecs[ 2 ] );
 }


 FUNC_4( VAR_17 );


 FUNC_1( VAR_17, VAR_20 );
 FUNC_0( VAR_17, VAR_20 );


 VAR_15[ VAR_17->type ]++;
}
