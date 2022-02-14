
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bots ;
struct TYPE_2__ {int numBots; char* selectedArenaInfo; char** botNames; scalar_t__* botPics; } ;


 char* FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6( void ) {
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 char VAR_7[VAR_0];

 VAR_2.numBots = 0;
 if ( VAR_3 > VAR_1 ) {
  return;
 }

 FUNC_3( VAR_7, FUNC_0( VAR_2.selectedArenaInfo, "bots" ), sizeof(VAR_7) );

 VAR_4 = &VAR_7[0];
 while( *VAR_4 && VAR_2.numBots < 7 ) {

  while( *VAR_4 && *VAR_4 == ' ' ) {
   VAR_4++;
  }
  if( !*VAR_4 ) {
   break;
  }


  VAR_5 = VAR_4;


  while( *VAR_4 && *VAR_4 != ' ' ) {
   VAR_4++;
  }
  if( *VAR_4 ) {
   *VAR_4++ = 0;
  }

  VAR_6 = FUNC_4( VAR_5 );
  if(!VAR_6)
  {
   VAR_6 = FUNC_5( VAR_2.numBots );
  }

  if( VAR_6 ) {
   VAR_2.botPics[VAR_2.numBots] = FUNC_1( FUNC_0( VAR_6, "model" ) );
   FUNC_3( VAR_2.botNames[VAR_2.numBots], FUNC_0( VAR_6, "name" ), 10 );
  }
  else {
   VAR_2.botPics[VAR_2.numBots] = 0;
   FUNC_3( VAR_2.botNames[VAR_2.numBots], VAR_5, 10 );
  }
  FUNC_2( VAR_2.botNames[VAR_2.numBots] );
  VAR_2.numBots++;
 }
}
