
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int qboolean ;


 float FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( vec3_t VAR_2, vec3_t VAR_3, float VAR_4 ){
 int VAR_5;



 for ( VAR_5 = 0; VAR_5 < 3; VAR_5++ )
  if ( FUNC_0( VAR_2[ VAR_5 ] - VAR_3[ VAR_5 ] ) > VAR_4 ) {
   return VAR_0;
  }
 return VAR_1;
}
