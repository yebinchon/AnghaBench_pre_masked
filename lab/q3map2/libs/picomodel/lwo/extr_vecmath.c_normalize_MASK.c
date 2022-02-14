
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float*) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2( float VAR_0[] ){
 float VAR_1;

 VAR_1 = ( float ) FUNC_1( FUNC_0( VAR_0, VAR_0 ) );
 if ( VAR_1 > 0 ) {
  VAR_0[ 0 ] /= VAR_1;
  VAR_0[ 1 ] /= VAR_1;
  VAR_0[ 2 ] /= VAR_1;
 }
}
