
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double vec_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,double) ;

void FUNC_3( FILE *VAR_0, vec_t VAR_1 ){
 if ( FUNC_1( VAR_1 - FUNC_0( VAR_1 ) ) < 0.001 ) {
  FUNC_2( VAR_0,"%i ",(int)FUNC_0( VAR_1 ) );
 }
 else{
  FUNC_2( VAR_0,"%f ",VAR_1 );
 }
}
