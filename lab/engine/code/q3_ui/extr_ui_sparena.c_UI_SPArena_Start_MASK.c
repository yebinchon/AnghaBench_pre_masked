
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8( const char *VAR_2 ) {
 char *VAR_3;
 int VAR_4;
 int VAR_5;
 char *VAR_6;

 VAR_5 = (int)FUNC_6( "sv_maxclients" );
 if ( VAR_5 < 8 ) {
  FUNC_5( "sv_maxclients", 8 );
 }

 VAR_4 = FUNC_3( FUNC_0( VAR_2, "num" ) );
 VAR_6 = FUNC_0( VAR_2, "special" );
 if( VAR_6[0] ) {
  if( FUNC_1( VAR_6, "training" ) == 0 ) {
   VAR_4 = -4;
  }
  else if( FUNC_1( VAR_6, "final" ) == 0 ) {
   VAR_4 = FUNC_2() * VAR_0;
  }
 }
 FUNC_5( "ui_spSelection", VAR_4 );

 VAR_3 = FUNC_0( VAR_2, "map" );
 FUNC_4( VAR_1, FUNC_7( "spmap %s\n", VAR_3 ) );
}
