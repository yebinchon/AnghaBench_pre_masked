
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int qboolean ;
typedef int msg ;
struct TYPE_11__ {int svFlags; } ;
struct TYPE_17__ {TYPE_4__* client; TYPE_1__ r; int inuse; } ;
typedef TYPE_7__ gentity_t ;
typedef int buf ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {int maxclients; int numNonSpectatorClients; int* teamScores; size_t* sortedClients; TYPE_6__* clients; int time; } ;
struct TYPE_15__ {int* persistant; } ;
struct TYPE_12__ {size_t sessionTeam; } ;
struct TYPE_16__ {TYPE_5__ ps; TYPE_2__ sess; } ;
struct TYPE_13__ {scalar_t__* persistant; } ;
struct TYPE_14__ {int accuracy_shots; int accuracy_hits; TYPE_3__ ps; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,char*,int,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 TYPE_7__* VAR_16 ;
 TYPE_9__ VAR_17 ;
 TYPE_8__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5( void ) {
 int VAR_21;
 gentity_t *VAR_22;
 int VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;




 char VAR_28[32];
 char VAR_29[VAR_2];


 VAR_22 = ((void*)0);
 for (VAR_21 = 0; VAR_21 < VAR_18.maxclients; VAR_21++ ) {
  VAR_22 = &VAR_16[VAR_21];
  if ( !VAR_22->inuse ) {
   continue;
  }
  if ( !( VAR_22->r.svFlags & VAR_12 ) ) {
   break;
  }
 }

 if ( !VAR_22 || VAR_21 == VAR_18.maxclients ) {
  return;
 }
 VAR_23 = VAR_21;

 FUNC_0();

 if ( VAR_18.clients[VAR_23].sess.sessionTeam == VAR_15 ) {



  FUNC_1( VAR_29, sizeof(VAR_29), "postgame %i %i 0 0 0 0 0 0", VAR_18.numNonSpectatorClients, VAR_23 );

 }
 else {
  if( VAR_22->client->accuracy_shots ) {
   VAR_25 = VAR_22->client->accuracy_hits * 100 / VAR_22->client->accuracy_shots;
  }
  else {
   VAR_25 = 0;
  }
  VAR_26 = ( VAR_18.clients[VAR_23].ps.persistant[VAR_10] == 0 && VAR_22->client->ps.persistant[VAR_9] == 0 ) ? 1 : 0;
  FUNC_1( VAR_29, sizeof(VAR_29), "postgame %i %i %i %i %i %i %i %i", VAR_18.numNonSpectatorClients, VAR_23, VAR_25,
   VAR_22->client->ps.persistant[VAR_8], VAR_22->client->ps.persistant[VAR_6],
   VAR_22->client->ps.persistant[VAR_7], VAR_22->client->ps.persistant[VAR_11],
   VAR_26 );

 }

 VAR_27 = FUNC_3( VAR_29 );
 for( VAR_21 = 0; VAR_21 < VAR_18.numNonSpectatorClients; VAR_21++ ) {
  VAR_24 = VAR_18.sortedClients[VAR_21];
  FUNC_1( VAR_28, sizeof(VAR_28), " %i %i %i", VAR_24, VAR_18.clients[VAR_24].ps.persistant[VAR_10], VAR_18.clients[VAR_24].ps.persistant[VAR_11] );
  VAR_27 += FUNC_3( VAR_28 );
  if( VAR_27 >= sizeof(VAR_29) ) {
   break;
  }
  FUNC_2( VAR_29, VAR_28 );
 }
 FUNC_4( VAR_0, VAR_29 );
}
