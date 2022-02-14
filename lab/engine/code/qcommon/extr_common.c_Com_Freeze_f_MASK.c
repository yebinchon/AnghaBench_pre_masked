
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 float FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (void) {
 float VAR_0;
 int VAR_1, VAR_2;

 if ( FUNC_0() != 2 ) {
  FUNC_3( "freeze <seconds>\n" );
  return;
 }
 VAR_0 = FUNC_4( FUNC_1(1) );

 VAR_1 = FUNC_2();

 while ( 1 ) {
  VAR_2 = FUNC_2();
  if ( ( VAR_2 - VAR_1 ) * 0.001 > VAR_0 ) {
   break;
  }
 }
}
