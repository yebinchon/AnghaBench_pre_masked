
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {int w; int h; scalar_t__* styles; } ;
typedef TYPE_1__ rawLightmap_t ;
typedef int qboolean ;
typedef int byte ;
struct TYPE_6__ {int** lightmap; float** color; } ;
typedef TYPE_2__ bspDrawVert_t ;


 float* FUNC_0 (int,int,int) ;
 int FUNC_1 (scalar_t__*,int*,float) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (float*,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static qboolean FUNC_3( rawLightmap_t *VAR_7, bspDrawVert_t *VAR_8 ){
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 float *VAR_14;
 vec3_t VAR_15, VAR_16;
 byte VAR_17[ 4 ], VAR_18[ 4 ];



 VAR_10 = VAR_8->lightmap[ 0 ][ 0 ] / VAR_6;
 VAR_11 = VAR_8->lightmap[ 0 ][ 1 ] / VAR_6;
 if ( VAR_10 < 0 ) {
  VAR_10 = 0;
 }
 else if ( VAR_10 >= VAR_7->w ) {
  VAR_10 = VAR_7->w - 1;
 }
 if ( VAR_11 < 0 ) {
  VAR_11 = 0;
 }
 else if ( VAR_11 >= VAR_7->h ) {
  VAR_11 = VAR_7->h - 1;
 }


 for ( VAR_13 = 0; VAR_13 < VAR_1; VAR_13++ )
 {

  if ( VAR_7->styles[ VAR_13 ] == VAR_0 ) {
   continue;
  }


  VAR_14 = FUNC_0( VAR_13, VAR_10, VAR_11 );


  if ( VAR_14[ 0 ] < 0.0f || VAR_14[ 1 ] < 0.0f || VAR_14[ 2 ] < 0.0f ) {
   return VAR_5;
  }


  FUNC_2( VAR_14, VAR_15 );
  FUNC_2( VAR_8->color[ 0 ], VAR_16 );


  if ( VAR_13 == 0 ) {
   for ( VAR_9 = 0; VAR_9 < 3; VAR_9++ )
   {

    if ( VAR_15[ VAR_9 ] < VAR_3[ VAR_9 ] ) {
     VAR_15[ VAR_9 ] = VAR_3[ VAR_9 ];
    }
    if ( VAR_16[ VAR_9 ] < VAR_3[ VAR_9 ] ) {
     VAR_16[ VAR_9 ] = VAR_3[ VAR_9 ];
    }
   }
  }


  FUNC_1( VAR_15, VAR_17, 1.0f );
  FUNC_1( VAR_16, VAR_18, 1.0f );


  for ( VAR_9 = 0; VAR_9 < 3; VAR_9++ )
  {
   VAR_12 = VAR_17[ VAR_9 ] - VAR_18[ VAR_9 ];
   if ( VAR_12 < 0 ) {
    VAR_12 *= -1;
   }
   if ( VAR_12 > VAR_2 ) {
    return VAR_4;
   }
  }
 }


 return VAR_5;
}
