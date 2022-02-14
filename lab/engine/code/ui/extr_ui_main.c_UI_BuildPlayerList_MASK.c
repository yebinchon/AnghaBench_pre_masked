
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clientNum; } ;
typedef TYPE_1__ uiClientState_t ;
typedef int info ;
struct TYPE_5__ {int playerNumber; size_t playerCount; size_t myTeamCount; int* teamClientNums; int * teamNames; void* teamLeader; int * playerNames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,char*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9( void ) {
 uiClientState_t VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 char VAR_11[VAR_2];

 FUNC_6( &VAR_5 );
 FUNC_7( VAR_0 + VAR_5.clientNum, VAR_11, VAR_2 );
 VAR_4.playerNumber = VAR_5.clientNum;
 VAR_4.teamLeader = FUNC_3(FUNC_0(VAR_11, "tl"));
 VAR_8 = FUNC_3(FUNC_0(VAR_11, "t"));
 FUNC_7( VAR_1, VAR_11, sizeof(VAR_11) );
 VAR_7 = FUNC_3( FUNC_0( VAR_11, "sv_maxclients" ) );
 VAR_4.playerCount = 0;
 VAR_4.myTeamCount = 0;
 VAR_10 = 0;
 for( VAR_6 = 0; VAR_6 < VAR_7; VAR_6++ ) {
  FUNC_7( VAR_0 + VAR_6, VAR_11, VAR_2 );

  if (VAR_11[0]) {
   FUNC_2( VAR_4.playerNames[VAR_4.playerCount], FUNC_0( VAR_11, "n" ), VAR_3 );
   FUNC_1( VAR_4.playerNames[VAR_4.playerCount] );
   VAR_4.playerCount++;
   VAR_9 = FUNC_3(FUNC_0(VAR_11, "t"));
   if (VAR_9 == VAR_8) {
    FUNC_2( VAR_4.teamNames[VAR_4.myTeamCount], FUNC_0( VAR_11, "n" ), VAR_3 );
    FUNC_1( VAR_4.teamNames[VAR_4.myTeamCount] );
    VAR_4.teamClientNums[VAR_4.myTeamCount] = VAR_6;
    if (VAR_4.playerNumber == VAR_6) {
     VAR_10 = VAR_4.myTeamCount;
    }
    VAR_4.myTeamCount++;
   }
  }
 }

 if (!VAR_4.teamLeader) {
  FUNC_4("cg_selectedPlayer", FUNC_8("%d", VAR_10));
 }

 VAR_6 = FUNC_5("cg_selectedPlayer");
 if (VAR_6 < 0 || VAR_6 > VAR_4.myTeamCount) {
  VAR_6 = 0;
 }
 if (VAR_6 < VAR_4.myTeamCount) {
  FUNC_4("cg_selectedPlayerName", VAR_4.teamNames[VAR_6]);
 }
}
