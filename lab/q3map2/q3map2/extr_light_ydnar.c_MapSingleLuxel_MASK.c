
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* vec3_t ;
struct TYPE_10__ {int numSurfaceClusters; size_t firstSurfaceCluster; TYPE_2__* si; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_11__ {float lightmapSampleOffset; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_12__ {int sw; int sh; float* plane; int** vecs; float* origin; int axisNum; } ;
typedef TYPE_3__ rawLightmap_t ;
struct TYPE_13__ {int** lightmap; float* normal; float* xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;



 int VAR_0 ;
 int FUNC_0 (float*,int ,int,int*) ;
 float VAR_1 ;
 float FUNC_1 (float*,float*) ;
 int VAR_2 ;
 int FUNC_2 (float*,float*,float*) ;

 int FUNC_3 (TYPE_4__*,TYPE_2__*,float*,float**,float**) ;
 int* FUNC_4 (int,int) ;
 float* FUNC_5 (int ,int,int) ;
 float* FUNC_6 (int,int) ;
 float* FUNC_7 (int,int) ;
 int FUNC_8 (float*,float*,float*) ;
 int FUNC_9 (float*) ;
 int FUNC_10 (float*,float*) ;
 int FUNC_11 (float*,float,float*,float*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_14( rawLightmap_t *VAR_9, surfaceInfo_t *VAR_10, bspDrawVert_t *VAR_11, vec4_t VAR_12, float VAR_13, vec3_t VAR_14[ 3 ], vec3_t VAR_15[ 3 ] ){
 int VAR_16, VAR_17, VAR_18, VAR_19, *VAR_20, VAR_21, *VAR_22;
 float *VAR_23, *VAR_24, *VAR_25, VAR_26, VAR_27;
 shaderInfo_t *VAR_28;
 vec3_t VAR_29;
 vec3_t VAR_30[ 3 ];
 vec3_t VAR_31;
 float *VAR_32;
 static float VAR_33[][ 2 ] =
 {

  { -128, 0 },
  { 128, 0 },
  { 0, 128 },
  { 0, -128 },
  { -128, 128 },
  { 128, -128 },
  { 128, 128 },
  { -128, -128 },
  { 129, 129 }
 };



 VAR_17 = VAR_11->lightmap[ 0 ][ 0 ];
 VAR_18 = VAR_11->lightmap[ 0 ][ 1 ];
 if ( VAR_17 < 0 ) {
  VAR_17 = 0;
 }
 else if ( VAR_17 >= VAR_9->sw ) {
  VAR_17 = VAR_9->sw - 1;
 }
 if ( VAR_18 < 0 ) {
  VAR_18 = 0;
 }
 else if ( VAR_18 >= VAR_9->sh ) {
  VAR_18 = VAR_9->sh - 1;
 }


 if ( VAR_10 != ((void*)0) ) {
  VAR_28 = VAR_10->si;
  VAR_19 = VAR_10->numSurfaceClusters;
  VAR_20 = &VAR_8[ VAR_10->firstSurfaceCluster ];
 }
 else
 {
  VAR_28 = ((void*)0);
  VAR_19 = 0;
  VAR_20 = ((void*)0);
 }


 VAR_23 = FUNC_5( 0, VAR_17, VAR_18 );
 VAR_24 = FUNC_7( VAR_17, VAR_18 );
 VAR_25 = FUNC_6( VAR_17, VAR_18 );
 VAR_22 = FUNC_4( VAR_17, VAR_18 );


 if ( ( *VAR_22 ) == VAR_0 && VAR_9->plane != ((void*)0) ) {
  return ( *VAR_22 );
 }


 else if ( ( *VAR_22 ) >= 0 ) {

  if ( VAR_14 != ((void*)0) ) {
   FUNC_3( VAR_11, VAR_28, VAR_29, VAR_14, VAR_15 );
  }
  else{
   FUNC_10( VAR_11->normal, VAR_29 );
  }


  FUNC_8( VAR_25, VAR_29, VAR_25 );
  VAR_23[ 3 ] += 1.0f;
  return ( *VAR_22 );
 }






 if ( VAR_9->vecs != ((void*)0) ) {

  FUNC_10( VAR_9->origin, VAR_24 );
  for ( VAR_16 = 0; VAR_16 < 3; VAR_16++ )
  {

   if ( VAR_16 == VAR_9->axisNum ) {
    continue;
   }
   VAR_24[ VAR_16 ] += ( VAR_17 * VAR_9->vecs[ 0 ][ VAR_16 ] ) + ( VAR_18 * VAR_9->vecs[ 1 ][ VAR_16 ] );
  }


  VAR_26 = FUNC_1( VAR_24, VAR_12 ) - VAR_12[ 3 ];
  VAR_26 /= VAR_12[ VAR_9->axisNum ];
  VAR_24[ VAR_9->axisNum ] -= VAR_26;
 }


 else{
  FUNC_10( VAR_11->xyz, VAR_24 );
 }


 if ( VAR_9->plane != ((void*)0) ) {
  FUNC_10( VAR_9->vecs[ 0 ], VAR_30[ 0 ] );
  FUNC_10( VAR_9->vecs[ 1 ], VAR_30[ 1 ] );
  FUNC_10( VAR_9->plane, VAR_30[ 2 ] );
 }


 else
 {
  if ( VAR_12 != ((void*)0) ) {
   FUNC_10( VAR_12, VAR_30[ 2 ] );
  }
  else{
   FUNC_10( VAR_11->normal, VAR_30[ 2 ] );
  }
  FUNC_2( VAR_30[ 2 ], VAR_30[ 0 ], VAR_30[ 1 ] );
 }


 if ( VAR_28 != ((void*)0) ) {
  VAR_27 = VAR_28->lightmapSampleOffset;
 }
 else{
  VAR_27 = VAR_1;
 }
 if ( VAR_9->axisNum < 0 ) {
  FUNC_11( VAR_24, VAR_27, VAR_30[ 2 ], VAR_24 );
 }
 else if ( VAR_30[ 2 ][ VAR_9->axisNum ] < 0.0f ) {
  VAR_24[ VAR_9->axisNum ] -= VAR_27;
 }
 else{
  VAR_24[ VAR_9->axisNum ] += VAR_27;
 }


 VAR_21 = FUNC_0( VAR_24, VAR_2, VAR_19, VAR_20 );


 VAR_23[ 1 ] = 0.0f;


 if ( VAR_21 < 0 && VAR_3 == VAR_7 ) {

  VAR_32 = VAR_33[ 0 ];
  while ( VAR_32[ 0 ] > 129 && VAR_21 < 0 )
  {

   for ( VAR_16 = 0; VAR_16 < 3; VAR_16++ )
   {

    VAR_31[ VAR_16 ] = VAR_24[ VAR_16 ] + ( VAR_32[ 0 ] * VAR_30[ 0 ][ VAR_16 ] ) + ( VAR_32[ 1 ] * VAR_30[ 1 ][ VAR_16 ] );
   }
   VAR_32 += 2;


   VAR_21 = FUNC_0( VAR_31, VAR_2, VAR_19, VAR_20 );
   if ( VAR_21 >= 0 ) {
    FUNC_10( VAR_31, VAR_24 );
   }
   VAR_23[ 1 ] += 1.0f;
  }
 }


 if ( VAR_21 < 0 && VAR_28 != ((void*)0) && VAR_3 == VAR_7 ) {
  FUNC_11( VAR_11->xyz, VAR_27, VAR_11->normal, VAR_31 );
  VAR_21 = FUNC_0( VAR_31, VAR_2, VAR_19, VAR_20 );
  if ( VAR_21 >= 0 ) {
   FUNC_10( VAR_31, VAR_24 );
  }
  VAR_23[ 1 ] += 1.0f;
 }


 if ( VAR_21 < 0 ) {
  ( *VAR_22 ) = VAR_0;
  FUNC_9( VAR_24 );
  FUNC_9( VAR_25 );
  FUNC_12( &VAR_4 );
  VAR_6++;
  FUNC_13( &VAR_4 );
  return ( *VAR_22 );
 }





 if ( VAR_14 ) {
  FUNC_3( VAR_11, VAR_28, VAR_29, VAR_14, VAR_15 );
 }
 else{
  FUNC_10( VAR_11->normal, VAR_29 );
 }


 ( *VAR_22 ) = VAR_21;
 FUNC_10( VAR_29, VAR_25 );


 VAR_23[ 0 ] = VAR_13;
 VAR_23[ 3 ] = 1.0f;


 FUNC_12( &VAR_4 );
 VAR_5++;
 FUNC_13( &VAR_4 );


 return ( *VAR_22 );
}
