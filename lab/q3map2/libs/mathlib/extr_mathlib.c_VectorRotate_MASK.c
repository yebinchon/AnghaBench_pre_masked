
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 float VAR_0 ;
 int FUNC_0 (float*,float*) ;
 int FUNC_1 (float) ;
 int FUNC_2 (float) ;

void FUNC_3( vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3 ){
 vec3_t VAR_4, VAR_5;
 int VAR_6[3][2];
 int VAR_7;

 FUNC_0( VAR_1, VAR_5 );
 FUNC_0( VAR_5, VAR_4 );
 VAR_6[0][0] = 1; VAR_6[0][1] = 2;
 VAR_6[1][0] = 2; VAR_6[1][1] = 0;
 VAR_6[2][0] = 0; VAR_6[2][1] = 1;

 for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ )
 {
  if ( VAR_2[VAR_7] != 0 ) {
   float VAR_8 = VAR_2[VAR_7] * VAR_0 / 180.0f;
   float VAR_9 = (vec_t)FUNC_1( VAR_8 );
   float VAR_10 = (vec_t)FUNC_2( VAR_8 );
   VAR_4[VAR_6[VAR_7][0]] = VAR_5[VAR_6[VAR_7][0]] * VAR_9 - VAR_5[VAR_6[VAR_7][1]] * VAR_10;
   VAR_4[VAR_6[VAR_7][1]] = VAR_5[VAR_6[VAR_7][0]] * VAR_10 + VAR_5[VAR_6[VAR_7][1]] * VAR_9;
  }
  FUNC_0( VAR_4, VAR_5 );
 }
 FUNC_0( VAR_4, VAR_3 );
}
