
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* picoVec2_t ;
typedef int picoParser_t ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (float*) ;
 scalar_t__ FUNC_2 (char*) ;

int FUNC_3( picoParser_t *VAR_0, picoVec2_t VAR_1 ){
 char *VAR_2;
 int VAR_3;


 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return 0;
 }


 FUNC_1( VAR_1 );


 for ( VAR_3 = 0; VAR_3 < 2; VAR_3++ )
 {
  VAR_2 = FUNC_0( VAR_0,0 );
  if ( VAR_2 == ((void*)0) ) {
   FUNC_1( VAR_1 );
   return 0;
  }
  VAR_1[ VAR_3 ] = (float) FUNC_2( VAR_2 );
 }

 return 1;
}
