
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;


struct TYPE_28__ {int svFlags; } ;
struct TYPE_23__ {scalar_t__ modelindex; int clientNum; } ;
struct TYPE_29__ {char* classname; TYPE_8__ r; TYPE_7__* client; int inuse; TYPE_3__ s; } ;
typedef TYPE_9__ gentity_t ;
struct TYPE_26__ {scalar_t__ sessionTeam; } ;
struct TYPE_25__ {scalar_t__* persistant; int origin; } ;
struct TYPE_24__ {scalar_t__ connected; } ;
struct TYPE_27__ {TYPE_6__ sess; TYPE_5__ ps; TYPE_4__ pers; } ;
struct TYPE_21__ {scalar_t__ sessionTeam; scalar_t__ spectatorState; int spectatorClient; int wins; } ;
struct TYPE_22__ {TYPE_1__ sess; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {int maxclients; int* sortedClients; scalar_t__ intermissiontime; int * changemap; int restarted; TYPE_2__* clients; int warmupTime; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 TYPE_9__* FUNC_5 (int ,int ) ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_9__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_9__*) ;
 TYPE_9__* VAR_12 ;
 TYPE_12__ VAR_13 ;
 TYPE_11__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (TYPE_9__*) ;

void FUNC_13( int VAR_17 ) {
 gentity_t *VAR_18;
 gentity_t *VAR_19;
 int VAR_20;



 FUNC_4( VAR_17 );

 VAR_18 = VAR_12 + VAR_17;
 if (!VAR_18->client || VAR_18->client->pers.connected == VAR_1) {
  return;
 }


 for ( VAR_20 = 0 ; VAR_20 < VAR_14.maxclients ; VAR_20++ ) {
  if ( VAR_14.clients[VAR_20].sess.sessionTeam == VAR_11
   && VAR_14.clients[VAR_20].sess.spectatorState == VAR_8
   && VAR_14.clients[VAR_20].sess.spectatorClient == VAR_17 ) {
   FUNC_6( &VAR_12[VAR_20] );
  }
 }


 if ( VAR_18->client->pers.connected == VAR_0
  && VAR_18->client->sess.sessionTeam != VAR_11 ) {
  VAR_19 = FUNC_5( VAR_18->client->ps.origin, VAR_3 );
  VAR_19->s.clientNum = VAR_18->s.clientNum;



  FUNC_8( VAR_18 );







 }

 FUNC_3( "ClientDisconnect: %i\n", VAR_17 );


 if ( (VAR_13.integer == VAR_6 )
  && !VAR_14.intermissiontime
  && !VAR_14.warmupTime && VAR_14.sortedClients[1] == VAR_17 ) {
  VAR_14.clients[ VAR_14.sortedClients[0] ].sess.wins++;
  FUNC_2( VAR_14.sortedClients[0] );
 }

 if( VAR_13.integer == VAR_6 &&
  VAR_18->client->sess.sessionTeam == VAR_10 &&
  VAR_14.intermissiontime ) {

  FUNC_10( VAR_4, "map_restart 0\n" );
  VAR_14.restarted = VAR_16;
  VAR_14.changemap = ((void*)0);
  VAR_14.intermissiontime = 0;
 }

 FUNC_12 (VAR_18);
 VAR_18->s.modelindex = 0;
 VAR_18->inuse = VAR_15;
 VAR_18->classname = "disconnected";
 VAR_18->client->pers.connected = VAR_1;
 VAR_18->client->ps.persistant[VAR_7] = VAR_10;
 VAR_18->client->sess.sessionTeam = VAR_10;

 FUNC_11( VAR_2 + VAR_17, "");

 FUNC_1();

 if ( VAR_18->r.svFlags & VAR_9 ) {
  FUNC_0( VAR_17, VAR_15 );
 }
}
