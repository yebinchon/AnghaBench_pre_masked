
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 scalar_t__ FUNC_0 (float) ;

void FUNC_1( vec3_t VAR_0, float VAR_1 ){
 int VAR_2;
 for ( VAR_2 = 0 ; VAR_2 < 3 ; VAR_2++ )
 {
  VAR_0[VAR_2] = (vec_t)FUNC_0( VAR_0[VAR_2] / VAR_1 + 0.5 ) * VAR_1;
 }
}
