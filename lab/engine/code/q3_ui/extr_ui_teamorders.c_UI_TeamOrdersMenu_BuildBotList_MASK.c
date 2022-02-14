
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clientNum; } ;
typedef TYPE_1__ uiClientState_t ;
typedef int info ;
struct TYPE_5__ {int numBots; int * botNames; void* gametype; int * bots; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_6( void ) {
 uiClientState_t VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 char VAR_8 = '3';
 char VAR_9;
 char VAR_10[VAR_2];

 for( VAR_7 = 0; VAR_7 < 9; VAR_7++ ) {
  VAR_3.bots[VAR_7] = VAR_3.botNames[VAR_7];
 }

 FUNC_4( &VAR_4 );

 FUNC_2( VAR_3.botNames[0], "Everyone", 16 );
 VAR_3.numBots = 1;

 FUNC_5( VAR_1, VAR_10, sizeof(VAR_10) );
 VAR_5 = FUNC_3( FUNC_0( VAR_10, "sv_maxclients" ) );
 VAR_3.gametype = FUNC_3( FUNC_0( VAR_10, "g_gametype" ) );

 for( VAR_7 = 0; VAR_7 < VAR_5 && VAR_3.numBots < 9; VAR_7++ ) {
  FUNC_5( VAR_0 + VAR_7, VAR_10, VAR_2 );

  if( VAR_7 == VAR_4.clientNum ) {
   VAR_8 = *FUNC_0( VAR_10, "t" );
   continue;
  }

  VAR_6 = FUNC_3( FUNC_0( VAR_10, "skill" ) );
  if( !VAR_6 ) {
   continue;
  }

  VAR_9 = *FUNC_0( VAR_10, "t" );
  if( VAR_9 != VAR_8 ) {
   continue;
  }

  FUNC_2( VAR_3.botNames[VAR_3.numBots], FUNC_0( VAR_10, "n" ), 16 );
  FUNC_1( VAR_3.botNames[VAR_3.numBots] );
  VAR_3.numBots++;
 }
}
