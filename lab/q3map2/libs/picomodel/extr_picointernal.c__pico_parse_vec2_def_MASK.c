
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* picoVec2_t ;
typedef int picoParser_t ;


 int FUNC_0 (float*,float*) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*) ;

int FUNC_3( picoParser_t *VAR_0, picoVec2_t VAR_1, picoVec2_t VAR_2 ){
 char *VAR_3;
 int VAR_4;


 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return 0;
 }


 FUNC_0( VAR_2,VAR_1 );


 for ( VAR_4 = 0; VAR_4 < 2; VAR_4++ )
 {
  VAR_3 = FUNC_1( VAR_0,0 );
  if ( VAR_3 == ((void*)0) ) {
   FUNC_0( VAR_2,VAR_1 );
   return 0;
  }
  VAR_1[ VAR_4 ] = (float) FUNC_2( VAR_3 );
 }

 return 1;
}
