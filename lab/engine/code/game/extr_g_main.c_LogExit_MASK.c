
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t team_t ;
typedef int qboolean ;
struct TYPE_13__ {int ping; int * persistant; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_10__ {scalar_t__ connected; int netname; } ;
struct TYPE_14__ {TYPE_4__ ps; TYPE_2__ sess; TYPE_1__ pers; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_12__ {int svFlags; } ;
struct TYPE_18__ {TYPE_3__ r; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {int numConnectedClients; size_t* sortedClients; int * teamScores; TYPE_5__* clients; int time; int intermissionQueued; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char const*,...) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_9__* VAR_10 ;
 TYPE_8__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3( const char *VAR_16 ) {
 int VAR_17, VAR_18;
 gclient_t *VAR_19;




 FUNC_0( "Exit: %s\n", VAR_16 );

 VAR_13.intermissionQueued = VAR_13.time;



 FUNC_2( VAR_1, "1" );


 VAR_18 = VAR_13.numConnectedClients;
 if ( VAR_18 > 32 ) {
  VAR_18 = 32;
 }

 if ( VAR_11.integer >= VAR_3 ) {
  FUNC_0( "red:%i  blue:%i\n",
   VAR_13.teamScores[VAR_8], VAR_13.teamScores[VAR_7] );
 }

 for (VAR_17=0 ; VAR_17 < VAR_18 ; VAR_17++) {
  int VAR_20;

  VAR_19 = &VAR_13.clients[VAR_13.sortedClients[VAR_17]];

  if ( VAR_19->sess.sessionTeam == VAR_9 ) {
   continue;
  }
  if ( VAR_19->pers.connected == VAR_0 ) {
   continue;
  }

  VAR_20 = VAR_19->ps.ping < 999 ? VAR_19->ps.ping : 999;

  FUNC_0( "score: %i  ping: %i  client: %i %s\n", VAR_19->ps.persistant[VAR_5], VAR_20, VAR_13.sortedClients[VAR_17], VAR_19->pers.netname );
 }
}
