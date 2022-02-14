
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char*,char*,char*,int*,int ) ;
 int FUNC_6 (char**,int) ;
 int VAR_0 ;

void FUNC_7( void ) {
 char *VAR_1;
 char **VAR_2;
 int VAR_3;
 int VAR_4;

 if ( FUNC_0() < 2 ) {
  FUNC_2( "usage: fdir <filter>\n" );
  FUNC_2( "example: fdir *q3dm*.bsp\n");
  return;
 }

 VAR_1 = FUNC_1( 1 );

 FUNC_2( "---------------\n" );

 VAR_2 = FUNC_5( "", "", VAR_1, &VAR_3, VAR_0 );

 FUNC_6(VAR_2, VAR_3);

 for ( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ ) {
  FUNC_3(VAR_2[VAR_4]);
  FUNC_2( "%s\n", VAR_2[VAR_4] );
 }
 FUNC_2( "%d files listed\n", VAR_3 );
 FUNC_4( VAR_2 );
}
