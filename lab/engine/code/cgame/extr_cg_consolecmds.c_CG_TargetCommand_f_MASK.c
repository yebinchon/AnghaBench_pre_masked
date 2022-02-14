
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ) ;

void FUNC_5( void ) {
 int VAR_0;
 char VAR_1[4];

 VAR_0 = FUNC_0();
 if ( VAR_0 == -1 ) {
  return;
 }

 FUNC_2( 1, VAR_1, 4 );
 FUNC_3( FUNC_4( "gc %i %i", VAR_0, FUNC_1( VAR_1 ) ) );
}
