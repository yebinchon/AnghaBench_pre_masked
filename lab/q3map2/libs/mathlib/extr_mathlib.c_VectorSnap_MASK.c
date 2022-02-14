
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1( vec3_t VAR_0 ){
 int VAR_1;
 for ( VAR_1 = 0; VAR_1 < 3; VAR_1++ )
 {
  VAR_0[VAR_1] = (vec_t)FUNC_0( VAR_0[VAR_1] + 0.5 );
 }
}
