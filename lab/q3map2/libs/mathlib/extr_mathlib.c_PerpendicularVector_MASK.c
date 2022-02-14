
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef float* vec3_t ;


 int FUNC_0 (float*,float*,float* const) ;
 int FUNC_1 (float*,float*) ;
 scalar_t__ FUNC_2 (float) ;

void FUNC_3( vec3_t VAR_0, const vec3_t VAR_1 ){
 int VAR_2;
 int VAR_3;
 vec_t VAR_4 = 1.0F;
 vec3_t VAR_5;




 for ( VAR_2 = 0, VAR_3 = 0; VAR_3 < 3; VAR_3++ )
 {
  if ( FUNC_2( VAR_1[VAR_3] ) < VAR_4 ) {
   VAR_2 = VAR_3;
   VAR_4 = (vec_t)FUNC_2( VAR_1[VAR_3] );
  }
 }
 VAR_5[0] = VAR_5[1] = VAR_5[2] = 0.0F;
 VAR_5[VAR_2] = 1.0F;




 FUNC_0( VAR_0, VAR_5, VAR_1 );




 FUNC_1( VAR_0, VAR_0 );
}
