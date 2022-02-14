
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int string ;
struct TYPE_17__ {int powerups; } ;
struct TYPE_18__ {TYPE_6__ s; TYPE_5__* client; scalar_t__ inuse; } ;
typedef TYPE_7__ gentity_t ;
typedef int entry ;
typedef int clients ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {int* sortedClients; } ;
struct TYPE_15__ {int* stats; int weapon; } ;
struct TYPE_13__ {int location; } ;
struct TYPE_14__ {TYPE_2__ teamState; int teamInfo; } ;
struct TYPE_12__ {int sessionTeam; scalar_t__ spectatorState; size_t spectatorClient; } ;
struct TYPE_16__ {TYPE_4__ ps; TYPE_3__ pers; TYPE_1__ sess; } ;


 int FUNC_0 (char*,int,char*,int,int ,int,int,int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__* VAR_8 ;
 TYPE_9__ VAR_9 ;
 TYPE_8__ VAR_10 ;
 int FUNC_1 (int*,int,int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*) ;

void FUNC_6( gentity_t *VAR_11 ) {
 char VAR_12[1024];
 char VAR_13[8192];
 int VAR_14;
 int VAR_15, VAR_16;
 gentity_t *VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21[VAR_5];
 int VAR_22;

 if ( ! VAR_11->client->pers.teamInfo )
  return;


 if (VAR_11->client->sess.sessionTeam == VAR_7) {
  if ( VAR_11->client->sess.spectatorState != VAR_0
   || VAR_11->client->sess.spectatorClient < 0 ) {
   return;
  }
  VAR_22 = VAR_8[ VAR_11->client->sess.spectatorClient ].client->sess.sessionTeam;
 } else {
  VAR_22 = VAR_11->client->sess.sessionTeam;
 }

 if (VAR_22 != VAR_6 && VAR_22 != VAR_4) {
  return;
 }




 for (VAR_15 = 0, VAR_18 = 0; VAR_15 < VAR_9.integer && VAR_18 < VAR_5; VAR_15++) {
  VAR_17 = VAR_8 + VAR_10.sortedClients[VAR_15];
  if (VAR_17->inuse && VAR_17->client->sess.sessionTeam == VAR_22 ) {
   VAR_21[VAR_18++] = VAR_10.sortedClients[VAR_15];
  }
 }


 FUNC_1( VAR_21, VAR_18, sizeof( VAR_21[0] ), VAR_3 );


 VAR_13[0] = 0;
 VAR_14 = 0;

 for (VAR_15 = 0, VAR_18 = 0; VAR_15 < VAR_9.integer && VAR_18 < VAR_5; VAR_15++) {
  VAR_17 = VAR_8 + VAR_15;
  if (VAR_17->inuse && VAR_17->client->sess.sessionTeam == VAR_22 ) {

   VAR_19 = VAR_17->client->ps.stats[VAR_2];
   VAR_20 = VAR_17->client->ps.stats[VAR_1];
   if (VAR_19 < 0) VAR_19 = 0;
   if (VAR_20 < 0) VAR_20 = 0;

   FUNC_0 (VAR_12, sizeof(VAR_12),
    " %i %i %i %i %i %i",

    VAR_15, VAR_17->client->pers.teamState.location, VAR_19, VAR_20,
    VAR_17->client->ps.weapon, VAR_17->s.powerups);
   VAR_16 = FUNC_3(VAR_12);
   if (VAR_14 + VAR_16 >= sizeof(VAR_13))
    break;
   FUNC_2 (VAR_13 + VAR_14, VAR_12);
   VAR_14 += VAR_16;
   VAR_18++;
  }
 }

 FUNC_4( VAR_11-VAR_8, FUNC_5("tinfo %i %s", VAR_18, VAR_13) );
}
