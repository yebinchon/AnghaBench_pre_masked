
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
struct TYPE_12__ {int voteNo; int voteYes; int voteTime; } ;
struct TYPE_9__ {int eFlags; } ;
struct TYPE_8__ {scalar_t__ sessionTeam; } ;
struct TYPE_10__ {TYPE_2__ ps; TYPE_1__ sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 char FUNC_0 (char) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5( gentity_t *VAR_6 ) {
 char VAR_7[64];

 if ( !VAR_5.voteTime ) {
  FUNC_2( VAR_6-VAR_4, "print \"No vote in progress.\n\"" );
  return;
 }
 if ( VAR_6->client->ps.eFlags & VAR_2 ) {
  FUNC_2( VAR_6-VAR_4, "print \"Vote already cast.\n\"" );
  return;
 }
 if ( VAR_6->client->sess.sessionTeam == VAR_3 ) {
  FUNC_2( VAR_6-VAR_4, "print \"Not allowed to vote as spectator.\n\"" );
  return;
 }

 FUNC_2( VAR_6-VAR_4, "print \"Vote cast.\n\"" );

 VAR_6->client->ps.eFlags |= VAR_2;

 FUNC_1( 1, VAR_7, sizeof( VAR_7 ) );

 if ( FUNC_0( VAR_7[0] ) == 'y' || VAR_7[0] == '1' ) {
  VAR_5.voteYes++;
  FUNC_3( VAR_1, FUNC_4("%i", VAR_5.voteYes ) );
 } else {
  VAR_5.voteNo++;
  FUNC_3( VAR_0, FUNC_4("%i", VAR_5.voteNo ) );
 }



}
