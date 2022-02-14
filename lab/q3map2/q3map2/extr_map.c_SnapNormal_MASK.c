
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;
typedef scalar_t__ qboolean ;


 int FUNC_0 (double*) ;
 int FUNC_1 (double*,double*) ;
 double FUNC_2 (double) ;
 double VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

qboolean FUNC_3( vec3_t VAR_3 ){
 int VAR_4;
 for ( VAR_4 = 0; VAR_4 < 3; VAR_4++ )
 {
  if ( FUNC_2( VAR_3[ VAR_4 ] - 1 ) < VAR_0 ) {
   FUNC_0( VAR_3 );
   VAR_3[ VAR_4 ] = 1;
   return VAR_2;
  }
  if ( FUNC_2( VAR_3[ VAR_4 ] - -1 ) < VAR_0 ) {
   FUNC_0( VAR_3 );
   VAR_3[ VAR_4 ] = -1;
   return VAR_2;
  }
 }
 return VAR_1;

}
