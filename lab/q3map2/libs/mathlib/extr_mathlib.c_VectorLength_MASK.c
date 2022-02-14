
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 scalar_t__ FUNC_0 (float) ;

vec_t FUNC_1( vec3_t VAR_0 ){
 int VAR_1;
 float VAR_2;

 VAR_2 = 0.0f;
 for ( VAR_1 = 0 ; VAR_1 < 3 ; VAR_1++ )
  VAR_2 += VAR_0[VAR_1] * VAR_0[VAR_1];
 VAR_2 = (float)FUNC_0( VAR_2 );

 return VAR_2;
}
