
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* teamVoteTime; scalar_t__ time; int* teamVoteYes; int* numteamVotingClients; int* teamVoteNo; scalar_t__* teamVoteString; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (char*,scalar_t__) ;

void FUNC_7( int VAR_6 ) {
 int VAR_7;

 if ( VAR_6 == VAR_3 )
  VAR_7 = 0;
 else if ( VAR_6 == VAR_2 )
  VAR_7 = 1;
 else
  return;

 if ( !VAR_5.teamVoteTime[VAR_7] ) {
  return;
 }
 if ( VAR_5.time - VAR_5.teamVoteTime[VAR_7] >= VAR_4 ) {
  FUNC_4( -1, "print \"Team vote failed.\n\"" );
 } else {
  if ( VAR_5.teamVoteYes[VAR_7] > VAR_5.numteamVotingClients[VAR_7]/2 ) {

   FUNC_4( -1, "print \"Team vote passed.\n\"" );

   if ( !FUNC_0( "leader", VAR_5.teamVoteString[VAR_7], 6) ) {

    FUNC_1(VAR_6, FUNC_2(VAR_5.teamVoteString[VAR_7] + 7));
   }
   else {
    FUNC_3( VAR_1, FUNC_6("%s\n", VAR_5.teamVoteString[VAR_7] ) );
   }
  } else if ( VAR_5.teamVoteNo[VAR_7] >= VAR_5.numteamVotingClients[VAR_7]/2 ) {

   FUNC_4( -1, "print \"Team vote failed.\n\"" );
  } else {

   return;
  }
 }
 VAR_5.teamVoteTime[VAR_7] = 0;
 FUNC_5( VAR_0 + VAR_7, "" );

}
