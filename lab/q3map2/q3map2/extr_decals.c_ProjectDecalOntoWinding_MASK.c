
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int numpoints; float** p; } ;
typedef TYPE_1__ winding_t ;
typedef float* vec4_t ;
struct TYPE_16__ {int numVerts; TYPE_4__* verts; int lightmapScale; int fogNum; int shaderInfo; int recvShadows; int castShadows; int entityNum; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_17__ {float** planes; int numPlanes; float** texMat; int si; } ;
typedef TYPE_3__ decalProjector_t ;
struct TYPE_18__ {float* xyz; float* st; int** color; int normal; } ;
typedef TYPE_4__ bspDrawVert_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,float*,float,float,TYPE_1__**,TYPE_1__**) ;
 float FUNC_2 (float*,float*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (float*,float*,float*,float*) ;
 int VAR_1 ;
 int FUNC_5 (float*,int ,float*) ;
 int FUNC_6 (float*,int ) ;
 int FUNC_7 (float*,int ,float*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int VAR_3 ;
 TYPE_4__* FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10( decalProjector_t *VAR_4, mapDrawSurface_t *VAR_5, winding_t *VAR_6 ){
 int VAR_7, VAR_8;
 float VAR_9, VAR_10, VAR_11;
 winding_t *VAR_12, *VAR_13;
 mapDrawSurface_t *VAR_14;
 bspDrawVert_t *VAR_15;
 vec4_t VAR_16;



 if ( VAR_6->numpoints < 3 ) {
  FUNC_3( VAR_6 );
  return;
 }


 for ( VAR_7 = 0; VAR_7 < VAR_6->numpoints; VAR_7++ )
  FUNC_5( VAR_6->p[ VAR_7 ], VAR_2, VAR_6->p[ VAR_7 ] );


 if ( !FUNC_4( VAR_16, VAR_6->p[ 0 ], VAR_6->p[ 1 ], VAR_6->p[ 2 ] ) ) {
  FUNC_3( VAR_6 );
  return;
 }


 VAR_9 = FUNC_2( VAR_4->planes[ 0 ], VAR_16 );
 if ( VAR_9 < -0.0001f ) {
  FUNC_3( VAR_6 );
  return;
 }


 for ( VAR_7 = 0; VAR_7 < VAR_4->numPlanes; VAR_7++ )
 {

  FUNC_1( VAR_6, VAR_4->planes[ VAR_7 ], VAR_4->planes[ VAR_7 ][ 3 ], 0.0625f, &VAR_12, &VAR_13 );
  FUNC_3( VAR_6 );


  if ( VAR_12 != ((void*)0) ) {
   FUNC_3( VAR_12 );
  }


  if ( VAR_13 == ((void*)0) ) {
   return;
  }


  VAR_6 = VAR_13;
 }


 if ( VAR_6 == ((void*)0) || VAR_6->numpoints < 3 ) {
  return;
 }


 VAR_3++;


 VAR_14 = FUNC_0( VAR_1 );


 VAR_14->entityNum = VAR_5->entityNum;
 VAR_14->castShadows = VAR_5->castShadows;
 VAR_14->recvShadows = VAR_5->recvShadows;
 VAR_14->shaderInfo = VAR_4->si;
 VAR_14->fogNum = VAR_5->fogNum;
 VAR_14->lightmapScale = VAR_5->lightmapScale;
 VAR_14->numVerts = VAR_6->numpoints;
 VAR_14->verts = FUNC_9( VAR_14->numVerts * sizeof( *VAR_14->verts ) );
 FUNC_8( VAR_14->verts, 0, VAR_14->numVerts * sizeof( *VAR_14->verts ) );


 for ( VAR_7 = 0; VAR_7 < VAR_14->numVerts; VAR_7++ )
 {

  VAR_15 = &VAR_14->verts[ VAR_7 ];


  VAR_9 = FUNC_2( VAR_6->p[ VAR_7 ], VAR_4->planes[ 0 ] ) - VAR_4->planes[ 0 ][ 3 ];
  VAR_10 = FUNC_2( VAR_6->p[ VAR_7 ], VAR_4->planes[ 1 ] ) - VAR_4->planes[ 1 ][ 3 ];
  VAR_11 = 255.0f * VAR_10 / ( VAR_9 + VAR_10 );
  if ( VAR_11 > 255 ) {
   VAR_11 = 255;
  }
  else if ( VAR_11 < 0 ) {
   VAR_11 = 0;
  }


  FUNC_7( VAR_6->p[ VAR_7 ], VAR_2, VAR_15->xyz );
  FUNC_6( VAR_16, VAR_15->normal );
  VAR_15->st[ 0 ] = FUNC_2( VAR_15->xyz, VAR_4->texMat[ 0 ] ) + VAR_4->texMat[ 0 ][ 3 ];
  VAR_15->st[ 1 ] = FUNC_2( VAR_15->xyz, VAR_4->texMat[ 1 ] ) + VAR_4->texMat[ 1 ][ 3 ];


  for ( VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ )
  {
   VAR_15->color[ VAR_8 ][ 0 ] = 255;
   VAR_15->color[ VAR_8 ][ 1 ] = 255;
   VAR_15->color[ VAR_8 ][ 2 ] = 255;
   VAR_15->color[ VAR_8 ][ 3 ] = VAR_11;
  }
 }
}
