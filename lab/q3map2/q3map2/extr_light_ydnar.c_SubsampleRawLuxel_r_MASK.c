
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* vec3_t ;
struct TYPE_4__ {int cluster; float* origin; float* normal; float* color; } ;
typedef TYPE_1__ trace_t ;
typedef int rawLightmap_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int,float,float,int*,float*,float*) ;
 int FUNC_2 (float*,float*,float*) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (float*,float*) ;
 float VAR_0 ;

__attribute__((used)) static void FUNC_5( rawLightmap_t *VAR_1, trace_t *VAR_2, vec3_t VAR_3, int VAR_4, int VAR_5, float VAR_6, float *VAR_7 ){
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12[ 4 ];
 vec4_t VAR_13[ 4 ];
 vec3_t VAR_14[ 4 ], VAR_15[ 4 ];
 float VAR_16[ 4 ][ 2 ] = { { -1.0f, -1.0f }, { 1.0f, -1.0f }, { -1.0f, 1.0f }, { 1.0f, 1.0f } };
 vec3_t VAR_17, VAR_18;



 if ( VAR_7[ 3 ] >= VAR_0 ) {
  return;
 }


 FUNC_3( VAR_18 );
 VAR_10 = 0;
 VAR_11 = 0;


 for ( VAR_8 = 0; VAR_8 < 4; VAR_8++ )
 {

  FUNC_4( VAR_3, VAR_14[ VAR_8 ] );


  if ( !FUNC_1( VAR_1, VAR_4, VAR_5, ( VAR_6 * VAR_16[ VAR_8 ][ 0 ] ), ( VAR_6 * VAR_16[ VAR_8 ][ 1 ] ), &VAR_12[ VAR_8 ], VAR_14[ VAR_8 ], VAR_15[ VAR_8 ] ) ) {
   VAR_12[ VAR_8 ] = -1;
   continue;
  }
  VAR_10++;


  VAR_13[ VAR_8 ][ 3 ] = VAR_7[ 3 ] + 1.0f;


  VAR_2->cluster = *VAR_12;
  FUNC_4( VAR_14[ VAR_8 ], VAR_2->origin );
  FUNC_4( VAR_15[ VAR_8 ], VAR_2->normal );



  FUNC_0( VAR_2 );


  FUNC_4( VAR_2->color, VAR_13[ VAR_8 ] );
  FUNC_2( VAR_18, VAR_2->color, VAR_18 );
  if ( ( VAR_13[ VAR_8 ][ 0 ] + VAR_13[ VAR_8 ][ 1 ] + VAR_13[ VAR_8 ][ 2 ] ) > 0.0f ) {
   VAR_11++;
  }
 }


 if ( ( VAR_7[ 3 ] + 1.0f ) < VAR_0 &&
   ( VAR_18[ 0 ] > 4.0f || VAR_18[ 1 ] > 4.0f || VAR_18[ 2 ] > 4.0f ) &&
   VAR_11 != 0 && VAR_11 != VAR_10 ) {
  for ( VAR_8 = 0; VAR_8 < 4; VAR_8++ )
  {
   if ( VAR_12[ VAR_8 ] < 0 ) {
    continue;
   }
   FUNC_5( VAR_1, VAR_2, VAR_14[ VAR_8 ], VAR_4, VAR_5, ( VAR_6 * 0.25f ), VAR_13[ VAR_8 ] );
  }
 }




 FUNC_4( VAR_7, VAR_17 );
 VAR_9 = 1;
 for ( VAR_8 = 0; VAR_8 < 4; VAR_8++ )
 {
  if ( VAR_12[ VAR_8 ] < 0 ) {
   continue;
  }
  FUNC_2( VAR_17, VAR_13[ VAR_8 ], VAR_17 );
  VAR_9++;
 }


 if ( VAR_9 > 0 ) {

  VAR_17[ 0 ] /= VAR_9;
  VAR_17[ 1 ] /= VAR_9;
  VAR_17[ 2 ] /= VAR_9;


  FUNC_4( VAR_17, VAR_7 );
  VAR_7[ 3 ] += 1.0f;
 }
}
