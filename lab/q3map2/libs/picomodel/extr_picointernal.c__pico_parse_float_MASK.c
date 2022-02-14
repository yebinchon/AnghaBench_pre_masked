
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoParser_t ;


 char* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2( picoParser_t *VAR_0, float *VAR_1 ){
 char *VAR_2;


 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return 0;
 }


 *VAR_1 = 0.0f;
 VAR_2 = FUNC_0( VAR_0,0 );
 if ( VAR_2 == ((void*)0) ) {
  return 0;
 }
 *VAR_1 = (float) FUNC_1( VAR_2 );


 return 1;
}
