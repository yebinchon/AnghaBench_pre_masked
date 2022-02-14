
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0( vec3_t VAR_2 ){
 int VAR_3;

 for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
 {
  if ( VAR_2[VAR_3] == 0.0 ) {

   return VAR_1;
  }
 }

 return VAR_0;
}
