
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cleanName ;
struct TYPE_3__ {char* stringData; int* stringOffsets; } ;
struct TYPE_4__ {TYPE_1__ gameState; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,char*) ;

void FUNC_13( void ) {
 char *VAR_5;
 char VAR_6[VAR_2];
 char VAR_7[VAR_2];
 const char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 char *VAR_12;

 if ( FUNC_1() < 3 ) {
  FUNC_5 ("sayto <player name> <text>\n");
  return;
 }

 VAR_5 = FUNC_3(1);

 FUNC_4( VAR_6, VAR_2, VAR_5 );

 VAR_8 = VAR_3.gameState.stringData + VAR_3.gameState.stringOffsets[VAR_1];
 VAR_9 = FUNC_10( FUNC_6( VAR_8, "sv_maxclients" ) );

 VAR_11 = -1;
 for( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ ) {

  VAR_8 = VAR_3.gameState.stringData + VAR_3.gameState.stringOffsets[VAR_0+VAR_10];
  FUNC_9( VAR_7, FUNC_6( VAR_8, "n" ), sizeof(VAR_7) );
  FUNC_7( VAR_7 );

  if ( !FUNC_8( VAR_7, VAR_6 ) ) {
   VAR_11 = VAR_10;
   break;
  }
 }
 if( VAR_11 <= -1 )
 {
  FUNC_5 ("No such player name: %s.\n", VAR_6);
  return;
 }

 VAR_12 = FUNC_2(2);

 if ( *VAR_12 == '"' ) {
  VAR_12++;
  VAR_12[FUNC_11(VAR_12)-1] = 0;
 }

 FUNC_0(FUNC_12("tell %i \"%s\"", VAR_11, VAR_12 ), VAR_4);
}
