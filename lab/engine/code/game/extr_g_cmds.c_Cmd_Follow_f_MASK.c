
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
typedef int arg ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {TYPE_2__* clients; } ;
struct TYPE_10__ {scalar_t__ spectatorState; scalar_t__ sessionTeam; int spectatorClient; int losses; } ;
struct TYPE_11__ {TYPE_1__ sess; } ;


 int FUNC_0 (TYPE_3__*,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;

void FUNC_5( gentity_t *VAR_8 ) {
 int VAR_9;
 char VAR_10[VAR_1];

 if ( FUNC_3() != 2 ) {
  if ( VAR_8->client->sess.spectatorState == VAR_2 ) {
   FUNC_2( VAR_8 );
  }
  return;
 }

 FUNC_4( 1, VAR_10, sizeof( VAR_10 ) );
 VAR_9 = FUNC_0( VAR_8, VAR_10, VAR_7, VAR_7 );
 if ( VAR_9 == -1 ) {
  return;
 }


 if ( &VAR_6.clients[ VAR_9 ] == VAR_8->client ) {
  return;
 }


 if ( VAR_6.clients[ VAR_9 ].sess.sessionTeam == VAR_4 ) {
  return;
 }


 if ( (VAR_5.integer == VAR_0 )
  && VAR_8->client->sess.sessionTeam == VAR_3 ) {
  VAR_8->client->sess.losses++;
 }


 if ( VAR_8->client->sess.sessionTeam != VAR_4 ) {
  FUNC_1( VAR_8, "spectator" );
 }

 VAR_8->client->sess.spectatorState = VAR_2;
 VAR_8->client->sess.spectatorClient = VAR_9;
}
