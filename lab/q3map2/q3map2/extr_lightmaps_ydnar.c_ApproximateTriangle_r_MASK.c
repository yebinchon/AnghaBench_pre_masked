
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int rawLightmap_t ;
typedef scalar_t__ qboolean ;
struct TYPE_9__ {float** lightmap; } ;
typedef TYPE_1__ bspDrawVert_t ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_3 (float) ;
 float VAR_2 ;

__attribute__((used)) static qboolean FUNC_4( rawLightmap_t *VAR_3, bspDrawVert_t *VAR_4[ 3 ] ){
 bspDrawVert_t VAR_5, *VAR_6[ 3 ];
 int VAR_7;



 if ( FUNC_0( VAR_3, VAR_4[ 0 ] ) == VAR_0 ) {
  return VAR_0;
 }
 if ( FUNC_0( VAR_3, VAR_4[ 1 ] ) == VAR_0 ) {
  return VAR_0;
 }
 if ( FUNC_0( VAR_3, VAR_4[ 2 ] ) == VAR_0 ) {
  return VAR_0;
 }


 {
  int VAR_8;
  float VAR_9, VAR_10, VAR_11, VAR_12;



  VAR_7 = -1;
  VAR_12 = 0;
  for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
  {
   VAR_9 = VAR_4[ VAR_8 ]->lightmap[ 0 ][ 0 ] - VAR_4[ ( VAR_8 + 1 ) % 3 ]->lightmap[ 0 ][ 0 ];
   VAR_10 = VAR_4[ VAR_8 ]->lightmap[ 0 ][ 1 ] - VAR_4[ ( VAR_8 + 1 ) % 3 ]->lightmap[ 0 ][ 1 ];
   VAR_11 = FUNC_3( ( VAR_9 * VAR_9 ) + ( VAR_10 * VAR_10 ) );
   if ( VAR_11 > VAR_12 ) {
    VAR_12 = VAR_11;
    VAR_7 = VAR_8;
   }
  }


  if ( VAR_8 < 0 || VAR_12 < VAR_2 ) {
   return VAR_1;
  }
 }


 FUNC_1( VAR_4[ VAR_7 ], VAR_4[ ( VAR_7 + 1 ) % 3 ], &VAR_5 );
 if ( FUNC_0( VAR_3, &VAR_5 ) == VAR_0 ) {
  return VAR_0;
 }


 FUNC_2( VAR_4, VAR_6 );
 VAR_6[ VAR_7 ] = &VAR_5;
 if ( FUNC_4( VAR_3, VAR_6 ) == VAR_0 ) {
  return VAR_0;
 }


 FUNC_2( VAR_4, VAR_6 );
 VAR_6[ ( VAR_7 + 1 ) % 3 ] = &VAR_5;
 return FUNC_4( VAR_3, VAR_6 );
}
