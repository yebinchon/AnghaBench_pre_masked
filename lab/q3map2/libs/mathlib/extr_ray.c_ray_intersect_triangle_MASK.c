
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float vec_t ;
typedef int vec3_t ;
struct TYPE_3__ {float* direction; int const origin; } ;
typedef TYPE_1__ ray_t ;
typedef scalar_t__ qboolean ;


 int FUNC_0 (float*,float*,float*) ;
 float FUNC_1 (float*,float*) ;
 float VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const,int const,float*) ;
 scalar_t__ VAR_2 ;

vec_t FUNC_3( const ray_t *VAR_3, qboolean VAR_4, const vec3_t VAR_5, const vec3_t VAR_6, const vec3_t VAR_7 ){
 float VAR_8[3], VAR_9[3], VAR_10[3], VAR_11[3], VAR_12[3];
 float VAR_13,VAR_14;
 float VAR_15, VAR_16;
 vec_t VAR_17 = (vec_t)VAR_1;


 FUNC_2( VAR_6, VAR_5, VAR_8 );
 FUNC_2( VAR_7, VAR_5, VAR_9 );


 FUNC_0( VAR_3->direction, VAR_9, VAR_11 );


 VAR_13 = FUNC_1( VAR_8, VAR_11 );

 if ( VAR_4 == VAR_2 ) {
  if ( VAR_13 < VAR_0 ) {
   return VAR_17;
  }


  FUNC_2( VAR_3->origin, VAR_5, VAR_10 );


  VAR_15 = FUNC_1( VAR_10, VAR_11 );
  if ( VAR_15 < 0.0 || VAR_15 > VAR_13 ) {
   return VAR_17;
  }


  FUNC_0( VAR_10, VAR_8, VAR_12 );


  VAR_16 = FUNC_1( VAR_3->direction, VAR_12 );
  if ( VAR_16 < 0.0 || VAR_15 + VAR_16 > VAR_13 ) {
   return VAR_17;
  }


  VAR_17 = FUNC_1( VAR_9, VAR_12 );
  VAR_14 = 1.0f / VAR_13;
  VAR_17 *= VAR_14;


 }
 else
 {

  if ( VAR_13 > -VAR_0 && VAR_13 < VAR_0 ) {
   return VAR_17;
  }
  VAR_14 = 1.0f / VAR_13;


  FUNC_2( VAR_3->origin, VAR_5, VAR_10 );


  VAR_15 = FUNC_1( VAR_10, VAR_11 ) * VAR_14;
  if ( VAR_15 < 0.0 || VAR_15 > 1.0 ) {
   return VAR_17;
  }


  FUNC_0( VAR_10, VAR_8, VAR_12 );


  VAR_16 = FUNC_1( VAR_3->direction, VAR_12 ) * VAR_14;
  if ( VAR_16 < 0.0 || VAR_15 + VAR_16 > 1.0 ) {
   return VAR_17;
  }


  VAR_17 = FUNC_1( VAR_9, VAR_12 ) * VAR_14;
 }
 return VAR_17;
}
