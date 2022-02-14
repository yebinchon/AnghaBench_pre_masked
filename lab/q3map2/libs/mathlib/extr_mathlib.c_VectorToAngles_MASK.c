
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef float* vec3_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (float,float) ;
 scalar_t__ FUNC_1 (float) ;

void FUNC_2( vec3_t VAR_1, vec3_t VAR_2 ){
 float VAR_3;
 float VAR_4, VAR_5;

 if ( ( VAR_1[ 0 ] == 0 ) && ( VAR_1[ 1 ] == 0 ) ) {
  VAR_4 = 0;
  if ( VAR_1[ 2 ] > 0 ) {
   VAR_5 = 90;
  }
  else
  {
   VAR_5 = 270;
  }
 }
 else
 {
  VAR_4 = (vec_t)FUNC_0( VAR_1[ 1 ], VAR_1[ 0 ] ) * 180 / VAR_0;
  if ( VAR_4 < 0 ) {
   VAR_4 += 360;
  }

  VAR_3 = ( float )FUNC_1( VAR_1[ 0 ] * VAR_1[ 0 ] + VAR_1[ 1 ] * VAR_1[ 1 ] );
  VAR_5 = (vec_t)FUNC_0( VAR_1[ 2 ], VAR_3 ) * 180 / VAR_0;
  if ( VAR_5 < 0 ) {
   VAR_5 += 360;
  }
 }

 VAR_2[ 0 ] = VAR_5;
 VAR_2[ 1 ] = VAR_4;
 VAR_2[ 2 ] = 0;
}
