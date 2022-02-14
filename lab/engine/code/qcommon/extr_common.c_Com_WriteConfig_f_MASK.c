
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char*,int ,int) ;

void FUNC_7( void ) {
 char VAR_1[VAR_0];

 if ( FUNC_2() != 2 ) {
  FUNC_4( "Usage: writeconfig <filename>\n" );
  return;
 }

 FUNC_6( VAR_1, FUNC_3(1), sizeof( VAR_1 ) );
 FUNC_1( VAR_1, sizeof( VAR_1 ), ".cfg" );

 if (!FUNC_0(VAR_1, ".cfg"))
 {
  FUNC_4("Com_WriteConfig_f: Only the \".cfg\" extension is supported by this command!\n");
  return;
 }

 FUNC_4( "Writing %s.\n", VAR_1 );
 FUNC_5( VAR_1 );
}
