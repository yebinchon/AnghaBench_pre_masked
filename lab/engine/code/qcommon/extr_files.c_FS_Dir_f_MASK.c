
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char**) ;
 char** FUNC_4 (char*,char*,int*) ;

void FUNC_5( void ) {
 char *VAR_0;
 char *VAR_1;
 char **VAR_2;
 int VAR_3;
 int VAR_4;

 if ( FUNC_0() < 2 || FUNC_0() > 3 ) {
  FUNC_2( "usage: dir <directory> [extension]\n" );
  return;
 }

 if ( FUNC_0() == 2 ) {
  VAR_0 = FUNC_1( 1 );
  VAR_1 = "";
 } else {
  VAR_0 = FUNC_1( 1 );
  VAR_1 = FUNC_1( 2 );
 }

 FUNC_2( "Directory of %s %s\n", VAR_0, VAR_1 );
 FUNC_2( "---------------\n" );

 VAR_2 = FUNC_4( VAR_0, VAR_1, &VAR_3 );

 for ( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ ) {
  FUNC_2( "%s\n", VAR_2[VAR_4] );
 }
 FUNC_3( VAR_2 );
}
