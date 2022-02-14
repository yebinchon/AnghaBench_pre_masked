
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

void FUNC_2( vec3_t VAR_0, float VAR_1, float VAR_2, float VAR_3 ){
 VAR_0[0] = (float)( VAR_1 * FUNC_0( VAR_2 ) * FUNC_0( VAR_3 ) );
 VAR_0[1] = (float)( VAR_1 * FUNC_1( VAR_2 ) * FUNC_0( VAR_3 ) );
 VAR_0[2] = (float)( VAR_1 * FUNC_1( VAR_3 ) );
}
