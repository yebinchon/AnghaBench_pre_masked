
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

float FUNC_1( const vec3_t VAR_3 ) {
 float VAR_4;

 if (VAR_3[VAR_2] == 0 && VAR_3[VAR_1] == 0) {
  VAR_4 = 0;
 } else {
  if (VAR_3[VAR_1]) {
   VAR_4 = ( FUNC_0( VAR_3[VAR_2], VAR_3[VAR_1]) * 180 / VAR_0 );
  } else if (VAR_3[VAR_2] > 0) {
   VAR_4 = 90;
  } else {
   VAR_4 = 270;
  }
  if (VAR_4 < 0) {
   VAR_4 += 360;
  }
 }

 return VAR_4;
}
