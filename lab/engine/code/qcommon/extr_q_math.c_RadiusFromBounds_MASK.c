
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float*) ;
 float FUNC_1 (float) ;

float FUNC_2( const vec3_t VAR_0, const vec3_t VAR_1 ) {
 int VAR_2;
 vec3_t VAR_3;
 float VAR_4, VAR_5;

 for (VAR_2=0 ; VAR_2<3 ; VAR_2++) {
  VAR_4 = FUNC_1( VAR_0[VAR_2] );
  VAR_5 = FUNC_1( VAR_1[VAR_2] );
  VAR_3[VAR_2] = VAR_4 > VAR_5 ? VAR_4 : VAR_5;
 }

 return FUNC_0 (VAR_3);
}
