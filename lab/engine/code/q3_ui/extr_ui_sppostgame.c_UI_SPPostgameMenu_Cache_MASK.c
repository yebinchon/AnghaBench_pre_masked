
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int * VAR_7 ;
 char** VAR_8 ;

void FUNC_3( void ) {
 int VAR_9;
 qboolean VAR_10;

 VAR_10 = FUNC_0("com_buildscript");

 FUNC_1( VAR_0 );
 FUNC_1( VAR_1 );
 FUNC_1( VAR_4 );
 FUNC_1( VAR_5 );
 FUNC_1( VAR_2 );
 FUNC_1( VAR_3 );
 for( VAR_9 = 0; VAR_9 < 6; VAR_9++ ) {
  FUNC_1( VAR_7[VAR_9] );
  FUNC_2( VAR_8[VAR_9], VAR_6 );
 }

 if( VAR_10 ) {
  FUNC_2( "music/loss.wav", VAR_6 );
  FUNC_2( "music/win.wav", VAR_6 );
  FUNC_2( "sound/player/announce/youwin.wav", VAR_6 );
 }
}
