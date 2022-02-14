
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* picoVec3_t ;



void FUNC_0( picoVec3_t VAR_0, picoVec3_t VAR_1, picoVec3_t VAR_2 ){
 int VAR_3;
 for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
 {
  float VAR_4 = VAR_0[VAR_3];
  if ( VAR_4 < VAR_1[VAR_3] ) {
   VAR_1[VAR_3] = VAR_4;
  }
  if ( VAR_4 > VAR_2[VAR_3] ) {
   VAR_2[VAR_3] = VAR_4;
  }
 }
}
