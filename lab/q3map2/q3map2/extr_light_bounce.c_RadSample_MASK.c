
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int* vec4_t ;
typedef double* vec3_t ;
struct TYPE_12__ {int averageColor; TYPE_1__* lightImage; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_13__ {int w; int h; int ** radLuxels; } ;
typedef TYPE_3__ rawLightmap_t ;
struct TYPE_14__ {int numVerts; TYPE_5__* verts; } ;
typedef TYPE_4__ radWinding_t ;
struct TYPE_15__ {float* st; float** color; double** lightmap; } ;
typedef TYPE_5__ radVert_t ;
struct TYPE_16__ {int* vertexStyles; int* lightmapStyles; } ;
typedef TYPE_6__ bspDrawSurface_t ;
struct TYPE_11__ {int height; int width; int pixels; } ;


 int FUNC_0 (double*,double*,double*) ;
 int FUNC_1 (double*,double*) ;
 int VAR_0 ;
 float* FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int ,int ,float*,int*) ;
 int VAR_1 ;
 int FUNC_4 (double*,double*,double*) ;
 int FUNC_5 (double*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (double*,double,double*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_8( int VAR_5, bspDrawSurface_t *VAR_6, rawLightmap_t *VAR_7, shaderInfo_t *VAR_8, radWinding_t *VAR_9, vec3_t VAR_10, vec3_t VAR_11, int *VAR_12 ){
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 vec3_t VAR_21, VAR_22, VAR_23;
 vec4_t VAR_24;
 float VAR_25, VAR_26, VAR_27;
 vec3_t VAR_28;
 float VAR_29[ 2 ], VAR_30[ 2 ], *VAR_31;
 radVert_t *VAR_32[ 3 ];



 FUNC_1( VAR_22, VAR_23 );
 FUNC_5( VAR_10 );
 FUNC_5( VAR_11 );
 VAR_25 = 0;


 if ( VAR_9 == ((void*)0) || VAR_9->numVerts < 3 ) {
  return;
 }


 VAR_20 = 0;


 if ( VAR_7 == ((void*)0) || VAR_7->radLuxels[ VAR_5 ] == ((void*)0) || VAR_2 == VAR_3 ) {
  for ( VAR_20 = 0; VAR_20 < VAR_9->numVerts; VAR_20++ )
  {

   if ( !FUNC_3( VAR_8->lightImage->pixels, VAR_8->lightImage->width, VAR_8->lightImage->height, VAR_9->verts[ VAR_20 ].st, VAR_24 ) ) {
    FUNC_6( VAR_8->averageColor, VAR_24 );
    VAR_24[ 3 ] = 255.0f;
   }
   for ( VAR_13 = 0; VAR_13 < 3; VAR_13++ )
    VAR_21[ VAR_13 ] = ( VAR_24[ VAR_13 ] / 255 ) * ( VAR_9->verts[ VAR_20 ].color[ VAR_5 ][ VAR_13 ] / 255.0f );

   FUNC_0( VAR_21, VAR_22, VAR_23 );
   FUNC_4( VAR_10, VAR_21, VAR_10 );


   VAR_25 += ( VAR_24[ 3 ] / 255.0f ) * ( VAR_9->verts[ VAR_20 ].color[ VAR_5 ][ 3 ] / 255.0f );
  }


  *VAR_12 = VAR_6->vertexStyles[ VAR_5 ];
 }


 else
 {

  for ( VAR_17 = 1; VAR_17 < ( VAR_9->numVerts - 1 ) && VAR_20 < VAR_0; VAR_17++ )
  {

   VAR_32[ 0 ] = &VAR_9->verts[ 0 ];
   VAR_32[ 1 ] = &VAR_9->verts[ VAR_17 ];
   VAR_32[ 2 ] = &VAR_9->verts[ VAR_17 + 1 ];


   for ( VAR_13 = 1; VAR_13 < VAR_1 && VAR_20 < VAR_0; VAR_13++ )
   {
    for ( VAR_14 = 1; VAR_14 < VAR_1 && VAR_20 < VAR_0; VAR_14++ )
    {
     for ( VAR_15 = 1; VAR_15 < VAR_1 && VAR_20 < VAR_0; VAR_15++ )
     {

      VAR_28[ 0 ] = VAR_13;
      VAR_28[ 1 ] = VAR_14;
      VAR_28[ 2 ] = VAR_15;
      VAR_27 = ( 1.0 / ( VAR_28[ 0 ] + VAR_28[ 1 ] + VAR_28[ 2 ] ) );
      FUNC_7( VAR_28, VAR_27, VAR_28 );


      VAR_29[ 0 ] = VAR_29[ 1 ] = 0.0f;
      VAR_30[ 0 ] = VAR_30[ 1 ] = 0.0f;
      VAR_26 = 0.0f;
      for ( VAR_16 = 0; VAR_16 < 3; VAR_16++ )
      {
       VAR_29[ 0 ] += ( VAR_32[ VAR_16 ]->st[ 0 ] * VAR_28[ VAR_16 ] );
       VAR_29[ 1 ] += ( VAR_32[ VAR_16 ]->st[ 1 ] * VAR_28[ VAR_16 ] );
       VAR_30[ 0 ] += ( VAR_32[ VAR_16 ]->lightmap[ VAR_5 ][ 0 ] * VAR_28[ VAR_16 ] );
       VAR_30[ 1 ] += ( VAR_32[ VAR_16 ]->lightmap[ VAR_5 ][ 1 ] * VAR_28[ VAR_16 ] );
       VAR_26 += ( VAR_32[ VAR_16 ]->color[ VAR_5 ][ 3 ] * VAR_28[ VAR_16 ] );
      }


      VAR_18 = VAR_30[ 0 ] / (float) VAR_4;
      VAR_19 = VAR_30[ 1 ] / (float) VAR_4;
      if ( VAR_18 < 0 ) {
       VAR_18 = 0;
      }
      else if ( VAR_18 >= VAR_7->w ) {
       VAR_18 = VAR_7->w - 1;
      }
      if ( VAR_19 < 0 ) {
       VAR_19 = 0;
      }
      else if ( VAR_19 >= VAR_7->h ) {
       VAR_19 = VAR_7->h - 1;
      }


      VAR_31 = FUNC_2( VAR_5, VAR_18, VAR_19 );


      if ( VAR_31[ 0 ] < 0.0f ) {
       continue;
      }


      VAR_20++;


      if ( !FUNC_3( VAR_8->lightImage->pixels, VAR_8->lightImage->width, VAR_8->lightImage->height, VAR_29, VAR_24 ) ) {
       FUNC_6( VAR_8->averageColor, VAR_24 );
       VAR_24[ 3 ] = 255;
      }
      for ( VAR_13 = 0; VAR_13 < 3; VAR_13++ )
       VAR_21[ VAR_13 ] = ( VAR_24[ VAR_13 ] / 255 ) * ( VAR_31[ VAR_13 ] / 255 );

      FUNC_0( VAR_21, VAR_22, VAR_23 );
      FUNC_4( VAR_10, VAR_21, VAR_10 );


      VAR_25 += ( VAR_24[ 3 ] / 255 ) * ( VAR_26 / 255 );
     }
    }
   }
  }


  *VAR_12 = VAR_6->lightmapStyles[ VAR_5 ];
 }


 if ( VAR_20 <= 0 ) {
  return;
 }


 FUNC_7( VAR_10, ( 1.0 / VAR_20 ), VAR_10 );
 for ( VAR_13 = 0; VAR_13 < 3; VAR_13++ )
  VAR_11[ VAR_13 ] = ( VAR_23[ VAR_13 ] - VAR_22[ VAR_13 ] ) * VAR_23[ VAR_13 ];
}
