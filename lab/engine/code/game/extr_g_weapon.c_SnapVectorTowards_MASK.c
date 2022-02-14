
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2( vec3_t VAR_0, vec3_t VAR_1 ) {
 int VAR_2;

 for ( VAR_2 = 0 ; VAR_2 < 3 ; VAR_2++ ) {
  if ( VAR_1[VAR_2] <= VAR_0[VAR_2] ) {
   VAR_0[VAR_2] = FUNC_1(VAR_0[VAR_2]);
  } else {
   VAR_0[VAR_2] = FUNC_0(VAR_0[VAR_2]);
  }
 }
}
