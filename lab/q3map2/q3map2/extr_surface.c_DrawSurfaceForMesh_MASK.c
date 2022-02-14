
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


typedef float* vec4_t ;
typedef float* vec3_t ;
struct TYPE_25__ {float* stFlat; float** vecs; scalar_t__ tcGen; scalar_t__ indexed; } ;
typedef TYPE_1__ shaderInfo_t ;
typedef scalar_t__ qboolean ;
struct TYPE_27__ {int width; int height; TYPE_9__* verts; } ;
struct TYPE_26__ {int celShader; int maxIterations; int longestCurve; int lightmapScale; int recvShadows; int castShadows; int entityNum; TYPE_12__* im; int eMaxs; int eMins; TYPE_1__* shaderInfo; TYPE_3__ mesh; } ;
typedef TYPE_2__ parseMesh_t ;
typedef TYPE_3__ mesh_t ;
struct TYPE_28__ {int patchWidth; int patchHeight; int numVerts; int fogNum; int planeNum; float** lightmapVecs; int celShader; TYPE_6__* verts; int maxIterations; int longestCurve; int lightmapScale; TYPE_2__* mapMesh; TYPE_1__* shaderInfo; int recvShadows; int castShadows; int entityNum; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_29__ {int origin; } ;
typedef TYPE_5__ entity_t ;
typedef size_t byte ;
struct TYPE_30__ {float* normal; float* st; float* xyz; int** color; } ;
typedef TYPE_6__ bspDrawVert_t ;
struct TYPE_31__ {float* normal; float* xyz; } ;
struct TYPE_24__ {float* offsets; } ;


 TYPE_4__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 float FUNC_2 (float*,float*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (float*,float,int,float**) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,TYPE_12__*,int,size_t*) ;
 size_t FUNC_6 (TYPE_12__*,int ,int ,float*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_3__) ;
 int FUNC_8 (TYPE_3__) ;
 int VAR_3 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (float*,int ,float*) ;
 scalar_t__ FUNC_11 (float*,float*) ;
 int FUNC_12 (float*,float*) ;
 float FUNC_13 (float*) ;
 scalar_t__ FUNC_14 (float) ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (TYPE_6__*,TYPE_9__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_6__* FUNC_16 (int) ;

mapDrawSurface_t *FUNC_17( entity_t *VAR_7, parseMesh_t *VAR_8, mesh_t *VAR_9 ){
 int VAR_10, VAR_11, VAR_12;
 vec4_t VAR_13;
 qboolean VAR_14;
 float VAR_15;
 mapDrawSurface_t *VAR_16;
 shaderInfo_t *VAR_17, *VAR_18;
 bspDrawVert_t *VAR_19;
 vec3_t VAR_20;
 mesh_t *VAR_21;
 qboolean VAR_22;
 byte VAR_23[ VAR_1 * VAR_1 ];
 float VAR_24[ VAR_1 * VAR_1 ];



 if ( VAR_9 == ((void*)0) ) {
  VAR_9 = &VAR_8->mesh;
 }
 VAR_17 = VAR_8->shaderInfo;
 if ( VAR_9 == ((void*)0) || VAR_17 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_12 = VAR_9->width * VAR_9->height;






 VAR_21 = FUNC_1( VAR_9 );


 FUNC_7( *VAR_21 );
 for ( VAR_10 = 0; VAR_10 < VAR_12; VAR_10++ )
  FUNC_12( VAR_21->verts[ VAR_10 ].normal, VAR_9->verts[ VAR_10 ].normal );


 FUNC_8( *VAR_21 );


 FUNC_7( *VAR_21 );
 for ( VAR_10 = 0; VAR_10 < VAR_12; VAR_10++ )
 {

  if ( FUNC_2( VAR_21->verts[ VAR_10 ].normal, VAR_9->verts[ VAR_10 ].normal ) < 0.75f ) {
   FUNC_12( VAR_21->verts[ VAR_10 ].normal, VAR_9->verts[ VAR_10 ].normal );
  }
 }


 FUNC_4( VAR_21 );


 if ( VAR_17->indexed && VAR_8->im != ((void*)0) ) {

  VAR_22 = VAR_6;


  for ( VAR_10 = 0; VAR_10 < VAR_12; VAR_10++ )
  {
   VAR_23[ VAR_10 ] = FUNC_6( VAR_8->im, VAR_8->eMins, VAR_8->eMaxs, VAR_9->verts[ VAR_10 ].xyz );
   VAR_24[ VAR_10 ] = VAR_8->im->offsets[ VAR_23[ VAR_10 ] ];
  }


  VAR_18 = VAR_17;
  VAR_17 = FUNC_5( VAR_18, VAR_8->im, VAR_12, VAR_23 );
 }
 else{
  VAR_22 = VAR_5;
 }



 VAR_16 = FUNC_0( VAR_3 );
 VAR_16->entityNum = VAR_8->entityNum;
 VAR_16->castShadows = VAR_8->castShadows;
 VAR_16->recvShadows = VAR_8->recvShadows;

 VAR_16->shaderInfo = VAR_17;
 VAR_16->mapMesh = VAR_8;
 VAR_16->lightmapScale = VAR_8->lightmapScale;
 VAR_16->patchWidth = VAR_9->width;
 VAR_16->patchHeight = VAR_9->height;
 VAR_16->numVerts = VAR_16->patchWidth * VAR_16->patchHeight;
 VAR_16->verts = FUNC_16( VAR_16->numVerts * sizeof( *VAR_16->verts ) );
 FUNC_15( VAR_16->verts, VAR_9->verts, VAR_16->numVerts * sizeof( *VAR_16->verts ) );

 VAR_16->fogNum = -1;
 VAR_16->planeNum = -1;

 VAR_16->longestCurve = VAR_8->longestCurve;
 VAR_16->maxIterations = VAR_8->maxIterations;


 FUNC_12( VAR_9->verts[ 0 ].normal, VAR_13 );
 VAR_13[ 3 ] = FUNC_2( VAR_9->verts[ 0 ].xyz, VAR_13 );
 VAR_14 = VAR_6;


 if ( FUNC_13( VAR_13 ) < 0.001f ) {
  FUNC_9( "DrawSurfaceForMesh: bogus plane\n" );
 }


 for ( VAR_10 = 1; VAR_10 < VAR_16->numVerts && VAR_14; VAR_10++ )
 {

  if ( FUNC_11( VAR_13, VAR_9->verts[ VAR_10 ].normal ) == VAR_5 ) {
   VAR_14 = VAR_5;
  }


  VAR_15 = FUNC_2( VAR_9->verts[ VAR_10 ].xyz, VAR_13 ) - VAR_13[ 3 ];
  if ( FUNC_14( VAR_15 ) > VAR_0 ) {
   VAR_14 = VAR_5;
  }
 }


 if ( VAR_14 ) {

  VAR_16->planeNum = FUNC_3( VAR_13, VAR_13[ 3 ], 1, &VAR_9->verts[ 0 ].xyz );
  FUNC_12( VAR_13, VAR_16->lightmapVecs[ 2 ] );


  for ( VAR_10 = 0; VAR_10 < VAR_16->numVerts; VAR_10++ )
   FUNC_12( VAR_13, VAR_16->verts[ VAR_10 ].normal );
 }


 for ( VAR_10 = 0; VAR_10 < VAR_16->numVerts; VAR_10++ )
 {

  VAR_19 = &VAR_16->verts[ VAR_10 ];


  if ( VAR_4 ) {
   VAR_19->st[ 0 ] = VAR_17->stFlat[ 0 ];
   VAR_19->st[ 1 ] = VAR_17->stFlat[ 1 ];
  }


  else if ( VAR_17->tcGen ) {

   FUNC_10( VAR_19->xyz, VAR_7->origin, VAR_20 );
   VAR_19->st[ 0 ] = FUNC_2( VAR_17->vecs[ 0 ], VAR_20 );
   VAR_19->st[ 1 ] = FUNC_2( VAR_17->vecs[ 1 ], VAR_20 );
  }


  for ( VAR_11 = 0; VAR_11 < VAR_2; VAR_11++ )
  {
   VAR_19->color[ VAR_11 ][ 0 ] = 255;
   VAR_19->color[ VAR_11 ][ 1 ] = 255;
   VAR_19->color[ VAR_11 ][ 2 ] = 255;


   VAR_19->color[ VAR_11 ][ 3 ] = ( VAR_22 ? VAR_23[ VAR_10 ] : 255 );
  }


  if ( VAR_22 ) {
   VAR_19->xyz[ 2 ] += VAR_24[ VAR_10 ];
  }
 }


 VAR_16->celShader = VAR_8->celShader;


 return VAR_16;
}
