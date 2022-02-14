
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int team ;
typedef int string ;
typedef int name ;
typedef int altname ;
struct TYPE_2__ {int time; int startTime; } ;


 float FUNC_0 (int,int,int ) ;
 int FUNC_1 (char*,float,char*,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*) ;

void FUNC_8( void ) {
 float VAR_2;
 int VAR_3;
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];


 if ( !FUNC_5( "bot_enable" ) ) {
  return;
 }


 FUNC_4( 1, VAR_4, sizeof( VAR_4 ) );
 if ( !VAR_4[0] ) {
  FUNC_6( "Usage: Addbot <botname> [skill 1-5] [team] [msec delay] [altname]\n" );
  return;
 }


 FUNC_4( 2, VAR_6, sizeof( VAR_6 ) );
 if ( !VAR_6[0] ) {
  VAR_2 = 4;
 }
 else {
  VAR_2 = FUNC_0( 1, 5, FUNC_2( VAR_6 ) );
 }


 FUNC_4( 3, VAR_7, sizeof( VAR_7 ) );


 FUNC_4( 4, VAR_6, sizeof( VAR_6 ) );
 if ( !VAR_6[0] ) {
  VAR_3 = 0;
 }
 else {
  VAR_3 = FUNC_3( VAR_6 );
 }


 FUNC_4( 5, VAR_5, sizeof( VAR_5 ) );

 FUNC_1( VAR_4, VAR_2, VAR_7, VAR_3, VAR_5 );



 if ( VAR_1.time - VAR_1.startTime > 1000 &&
  FUNC_5( "cl_running" ) ) {
  FUNC_7( -1, "loaddefered\n" );
 }
}
