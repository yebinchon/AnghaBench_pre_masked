
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int* persistant; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_9__ {scalar_t__ connected; } ;
struct TYPE_13__ {TYPE_4__ ps; TYPE_3__ sess; TYPE_1__ pers; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_10__ {int svFlags; } ;
struct TYPE_16__ {TYPE_2__ r; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int follow1; int follow2; size_t numConnectedClients; int numPlayingClients; int maxclients; int* sortedClients; scalar_t__* teamScores; scalar_t__ intermissiontime; TYPE_5__* clients; scalar_t__* numteamVotingClients; scalar_t__ numVotingClients; scalar_t__ numNonSpectatorClients; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_8__* VAR_15 ;
 TYPE_7__ VAR_16 ;
 TYPE_6__ VAR_17 ;
 int FUNC_3 (int*,size_t,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,scalar_t__) ;

void FUNC_6( void ) {
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 gclient_t *VAR_22;

 VAR_17.follow1 = -1;
 VAR_17.follow2 = -1;
 VAR_17.numConnectedClients = 0;
 VAR_17.numNonSpectatorClients = 0;
 VAR_17.numPlayingClients = 0;
 VAR_17.numVotingClients = 0;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_17.numteamVotingClients); VAR_18++)
  VAR_17.numteamVotingClients[VAR_18] = 0;

 for ( VAR_18 = 0 ; VAR_18 < VAR_17.maxclients ; VAR_18++ ) {
  if ( VAR_17.clients[VAR_18].pers.connected != VAR_1 ) {
   VAR_17.sortedClients[VAR_17.numConnectedClients] = VAR_18;
   VAR_17.numConnectedClients++;

   if ( VAR_17.clients[VAR_18].sess.sessionTeam != VAR_14 ) {
    VAR_17.numNonSpectatorClients++;


    if ( VAR_17.clients[VAR_18].pers.connected == VAR_0 ) {
     VAR_17.numPlayingClients++;
     if ( !(VAR_15[VAR_18].r.svFlags & VAR_10) ) {
      VAR_17.numVotingClients++;
      if ( VAR_17.clients[VAR_18].sess.sessionTeam == VAR_13 )
       VAR_17.numteamVotingClients[0]++;
      else if ( VAR_17.clients[VAR_18].sess.sessionTeam == VAR_12 )
       VAR_17.numteamVotingClients[1]++;
     }
     if ( VAR_17.follow1 == -1 ) {
      VAR_17.follow1 = VAR_18;
     } else if ( VAR_17.follow2 == -1 ) {
      VAR_17.follow2 = VAR_18;
     }
    }
   }
  }
 }

 FUNC_3( VAR_17.sortedClients, VAR_17.numConnectedClients,
  sizeof(VAR_17.sortedClients[0]), VAR_11 );


 if ( VAR_16.integer >= VAR_5 ) {

  for ( VAR_18 = 0; VAR_18 < VAR_17.numConnectedClients; VAR_18++ ) {
   VAR_22 = &VAR_17.clients[ VAR_17.sortedClients[VAR_18] ];
   if ( VAR_17.teamScores[VAR_13] == VAR_17.teamScores[VAR_12] ) {
    VAR_22->ps.persistant[VAR_6] = 2;
   } else if ( VAR_17.teamScores[VAR_13] > VAR_17.teamScores[VAR_12] ) {
    VAR_22->ps.persistant[VAR_6] = 0;
   } else {
    VAR_22->ps.persistant[VAR_6] = 1;
   }
  }
 } else {
  VAR_19 = -1;
  VAR_20 = 0;
  for ( VAR_18 = 0; VAR_18 < VAR_17.numPlayingClients; VAR_18++ ) {
   VAR_22 = &VAR_17.clients[ VAR_17.sortedClients[VAR_18] ];
   VAR_21 = VAR_22->ps.persistant[VAR_7];
   if ( VAR_18 == 0 || VAR_21 != VAR_20 ) {
    VAR_19 = VAR_18;

    VAR_17.clients[ VAR_17.sortedClients[VAR_18] ].ps.persistant[VAR_6] = VAR_19;
   } else {

    VAR_17.clients[ VAR_17.sortedClients[VAR_18-1] ].ps.persistant[VAR_6] = VAR_19 | VAR_8;
    VAR_17.clients[ VAR_17.sortedClients[VAR_18] ].ps.persistant[VAR_6] = VAR_19 | VAR_8;
   }
   VAR_20 = VAR_21;
   if ( VAR_16.integer == VAR_4 && VAR_17.numPlayingClients == 1 ) {
    VAR_17.clients[ VAR_17.sortedClients[VAR_18] ].ps.persistant[VAR_6] = VAR_19 | VAR_8;
   }
  }
 }


 if ( VAR_16.integer >= VAR_5 ) {
  FUNC_4( VAR_2, FUNC_5("%i", VAR_17.teamScores[VAR_13] ) );
  FUNC_4( VAR_3, FUNC_5("%i", VAR_17.teamScores[VAR_12] ) );
 } else {
  if ( VAR_17.numConnectedClients == 0 ) {
   FUNC_4( VAR_2, FUNC_5("%i", VAR_9) );
   FUNC_4( VAR_3, FUNC_5("%i", VAR_9) );
  } else if ( VAR_17.numConnectedClients == 1 ) {
   FUNC_4( VAR_2, FUNC_5("%i", VAR_17.clients[ VAR_17.sortedClients[0] ].ps.persistant[VAR_7] ) );
   FUNC_4( VAR_3, FUNC_5("%i", VAR_9) );
  } else {
   FUNC_4( VAR_2, FUNC_5("%i", VAR_17.clients[ VAR_17.sortedClients[0] ].ps.persistant[VAR_7] ) );
   FUNC_4( VAR_3, FUNC_5("%i", VAR_17.clients[ VAR_17.sortedClients[1] ].ps.persistant[VAR_7] ) );
  }
 }


 FUNC_1();


 if ( VAR_17.intermissiontime ) {
  FUNC_2();
 }
}
