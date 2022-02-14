
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double vec_t ;
typedef float* vec4_t ;
typedef float* vec3_t ;
typedef int m4x4_t ;


 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (int ,float*) ;
 scalar_t__ FUNC_2 (float) ;

void FUNC_3( m4x4_t VAR_0, const vec3_t VAR_1, vec_t VAR_2 ){
 vec4_t VAR_3;
 VAR_2 *= 0.5;

 VAR_3[3] = (float)FUNC_2( (float)( VAR_2 ) );

 VAR_3[0] = VAR_1[0] * VAR_3[3];
 VAR_3[1] = VAR_1[1] * VAR_3[3];
 VAR_3[2] = VAR_1[2] * VAR_3[3];
 VAR_3[3] = (float)FUNC_0( (float)( VAR_2 ) );

 FUNC_1( VAR_0, VAR_3 );
}
