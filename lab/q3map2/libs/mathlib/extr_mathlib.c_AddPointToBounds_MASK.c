
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;



void FUNC_0( vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2 ){
 int VAR_3;
 vec_t VAR_4;

 for ( VAR_3 = 0 ; VAR_3 < 3 ; VAR_3++ )
 {
  VAR_4 = VAR_0[VAR_3];
  if ( VAR_4 < VAR_1[VAR_3] ) {
   VAR_1[VAR_3] = VAR_4;
  }
  if ( VAR_4 > VAR_2[VAR_3] ) {
   VAR_2[VAR_3] = VAR_4;
  }
 }
}
