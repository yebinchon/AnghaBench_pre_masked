
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int msg ;
struct TYPE_11__ {TYPE_3__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_12__ {int * teamVoteNo; int * teamVoteYes; int * teamVoteTime; } ;
struct TYPE_9__ {int eFlags; } ;
struct TYPE_8__ {int sessionTeam; } ;
struct TYPE_10__ {TYPE_2__ ps; TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 char FUNC_0 (char) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5( gentity_t *VAR_8 ) {
 int VAR_9, VAR_10;
 char VAR_11[64];

 VAR_9 = VAR_8->client->sess.sessionTeam;
 if ( VAR_9 == VAR_4 )
  VAR_10 = 0;
 else if ( VAR_9 == VAR_3 )
  VAR_10 = 1;
 else
  return;

 if ( !VAR_7.teamVoteTime[VAR_10] ) {
  FUNC_2( VAR_8-VAR_6, "print \"No team vote in progress.\n\"" );
  return;
 }
 if ( VAR_8->client->ps.eFlags & VAR_2 ) {
  FUNC_2( VAR_8-VAR_6, "print \"Team vote already cast.\n\"" );
  return;
 }
 if ( VAR_8->client->sess.sessionTeam == VAR_5 ) {
  FUNC_2( VAR_8-VAR_6, "print \"Not allowed to vote as spectator.\n\"" );
  return;
 }

 FUNC_2( VAR_8-VAR_6, "print \"Team vote cast.\n\"" );

 VAR_8->client->ps.eFlags |= VAR_2;

 FUNC_1( 1, VAR_11, sizeof( VAR_11 ) );

 if ( FUNC_0( VAR_11[0] ) == 'y' || VAR_11[0] == '1' ) {
  VAR_7.teamVoteYes[VAR_10]++;
  FUNC_3( VAR_1 + VAR_10, FUNC_4("%i", VAR_7.teamVoteYes[VAR_10] ) );
 } else {
  VAR_7.teamVoteNo[VAR_10]++;
  FUNC_3( VAR_0 + VAR_10, FUNC_4("%i", VAR_7.teamVoteNo[VAR_10] ) );
 }



}
