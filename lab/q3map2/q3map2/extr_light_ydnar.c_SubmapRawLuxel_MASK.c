
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {int sw; int sh; int lightClusters; int numLightClusters; } ;
typedef TYPE_1__ rawLightmap_t ;
typedef int qboolean ;


 int FUNC_0 (float*,int,int ,int ) ;
 int VAR_0 ;
 int* FUNC_1 (int,int) ;
 float* FUNC_2 (int,int) ;
 float* FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (float*,float*) ;
 int FUNC_7 (float*,float*,float*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static qboolean FUNC_8( rawLightmap_t *VAR_4, int VAR_5, int VAR_6, float VAR_7, float VAR_8, int *VAR_9, vec3_t VAR_10, vec3_t VAR_11 ){
 int VAR_12, *VAR_13, *VAR_14;
 float *VAR_15, *VAR_16, *VAR_17;
 vec3_t VAR_18[ 2 ];


 if ( ( VAR_5 < ( VAR_4->sw - 1 ) && VAR_7 >= 0.0f ) || ( VAR_5 == 0 && VAR_7 <= 0.0f ) ) {
  VAR_13 = FUNC_1( VAR_5, VAR_6 );
  VAR_15 = FUNC_3( VAR_5, VAR_6 );
  VAR_14 = FUNC_1( VAR_5 + 1, VAR_6 );
  VAR_16 = *VAR_14 < 0 ? FUNC_3( VAR_5, VAR_6 ) : FUNC_3( VAR_5 + 1, VAR_6 );
 }
 else if ( ( VAR_5 > 0 && VAR_7 <= 0.0f ) || ( VAR_5 == ( VAR_4->sw - 1 ) && VAR_7 >= 0.0f ) ) {
  VAR_13 = FUNC_1( VAR_5 - 1, VAR_6 );
  VAR_15 = *VAR_13 < 0 ? FUNC_3( VAR_5, VAR_6 ) : FUNC_3( VAR_5 - 1, VAR_6 );
  VAR_14 = FUNC_1( VAR_5, VAR_6 );
  VAR_16 = FUNC_3( VAR_5, VAR_6 );
 }
 else{
  FUNC_4( VAR_1, "WARNING: Spurious lightmap S vector\n" );
  FUNC_5( VAR_18[0] );
  VAR_15 = VAR_18[0];
  VAR_16 = VAR_18[0];
 }

 FUNC_7( VAR_16, VAR_15, VAR_18[ 0 ] );


 if ( ( VAR_6 < ( VAR_4->sh - 1 ) && VAR_7 >= 0.0f ) || ( VAR_6 == 0 && VAR_7 <= 0.0f ) ) {
  VAR_13 = FUNC_1( VAR_5, VAR_6 );
  VAR_15 = FUNC_3( VAR_5, VAR_6 );
  VAR_14 = FUNC_1( VAR_5, VAR_6 + 1 );
  VAR_16 = *VAR_14 < 0 ? FUNC_3( VAR_5, VAR_6 ) : FUNC_3( VAR_5, VAR_6 + 1 );
 }
 else if ( ( VAR_6 > 0 && VAR_7 <= 0.0f ) || ( VAR_6 == ( VAR_4->sh - 1 ) && VAR_7 >= 0.0f ) ) {
  VAR_13 = FUNC_1( VAR_5, VAR_6 - 1 );
  VAR_15 = *VAR_13 < 0 ? FUNC_3( VAR_5, VAR_6 ) : FUNC_3( VAR_5, VAR_6 - 1 );
  VAR_14 = FUNC_1( VAR_5, VAR_6 );
  VAR_16 = FUNC_3( VAR_5, VAR_6 );
 }
 else{
  FUNC_4( VAR_1, "WARNING: Spurious lightmap T vector\n" );
  FUNC_5( VAR_18[1] );
  VAR_15 = VAR_18[1];
  VAR_16 = VAR_18[1];
 }

 FUNC_7( VAR_16, VAR_15, VAR_18[ 1 ] );


 for ( VAR_12 = 0; VAR_12 < 3; VAR_12++ )
  VAR_10[ VAR_12 ] = VAR_10[ VAR_12 ] + ( VAR_7 * VAR_18[ 0 ][ VAR_12 ] ) + ( VAR_8 * VAR_18[ 1 ][ VAR_12 ] );


 *VAR_9 = FUNC_0( VAR_10, ( VAR_0 * 2 ), VAR_4->numLightClusters, VAR_4->lightClusters );
 if ( *VAR_9 < 0 ) {
  return VAR_2;
 }


 VAR_17 = FUNC_2( VAR_5, VAR_6 );
 FUNC_6( VAR_17, VAR_11 );


 return VAR_3;
}
