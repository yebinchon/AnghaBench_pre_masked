
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int maxclients; TYPE_3__* clients; } ;
struct TYPE_14__ {scalar_t__ sessionTeam; scalar_t__ spectatorState; int spectatorClient; int losses; } ;
struct TYPE_15__ {TYPE_4__ sess; } ;
struct TYPE_12__ {scalar_t__ sessionTeam; } ;
struct TYPE_11__ {scalar_t__ connected; } ;
struct TYPE_13__ {TYPE_2__ sess; TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_6__*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;

void FUNC_2( gentity_t *VAR_8, int VAR_9 ) {
 int VAR_10;
 int VAR_11;


 if ( (VAR_6.integer == VAR_1 )
  && VAR_8->client->sess.sessionTeam == VAR_4 ) {
  VAR_8->client->sess.losses++;
 }

 if ( VAR_8->client->sess.spectatorState == VAR_3 ) {
  FUNC_1( VAR_8, "spectator" );
 }

 if ( VAR_9 != 1 && VAR_9 != -1 ) {
  FUNC_0( "Cmd_FollowCycle_f: bad dir %i", VAR_9 );
 }


 if (VAR_8->client->sess.spectatorClient < 0) {
  if (VAR_8->client->sess.spectatorClient == -1) {
   VAR_8->client->sess.spectatorClient = -2;
  } else if (VAR_8->client->sess.spectatorClient == -2) {
   VAR_8->client->sess.spectatorClient = -1;
  }
  return;
 }

 VAR_10 = VAR_8->client->sess.spectatorClient;
 VAR_11 = VAR_10;
 do {
  VAR_10 += VAR_9;
  if ( VAR_10 >= VAR_7.maxclients ) {
   VAR_10 = 0;
  }
  if ( VAR_10 < 0 ) {
   VAR_10 = VAR_7.maxclients - 1;
  }


  if ( VAR_7.clients[ VAR_10 ].pers.connected != VAR_0 ) {
   continue;
  }


  if ( VAR_7.clients[ VAR_10 ].sess.sessionTeam == VAR_5 ) {
   continue;
  }


  VAR_8->client->sess.spectatorClient = VAR_10;
  VAR_8->client->sess.spectatorState = VAR_2;
  return;
 } while ( VAR_10 != VAR_11 );


}
