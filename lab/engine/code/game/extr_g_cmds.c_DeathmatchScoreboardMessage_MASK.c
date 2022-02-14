
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int string ;
struct TYPE_12__ {int powerups; } ;
struct TYPE_10__ {int svFlags; } ;
struct TYPE_14__ {TYPE_3__ s; TYPE_1__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_13__ {int ping; scalar_t__* persistant; } ;
struct TYPE_11__ {scalar_t__ connected; int enterTime; } ;
struct TYPE_15__ {int accuracy_shots; int accuracy_hits; TYPE_4__ ps; TYPE_2__ pers; } ;
typedef TYPE_6__ gclient_t ;
typedef int entry ;
struct TYPE_16__ {int numConnectedClients; size_t* sortedClients; int time; int * teamScores; TYPE_6__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char*,size_t,scalar_t__,int,int,int,int ,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 TYPE_5__* VAR_13 ;
 TYPE_7__ VAR_14 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,int ,int ,char*) ;

void FUNC_5( gentity_t *VAR_15 ) {
 char VAR_16[1024];
 char VAR_17[1000];
 int VAR_18;
 int VAR_19, VAR_20;
 gclient_t *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;


 if ( VAR_15->r.svFlags & VAR_10 ) {
  return;
 }


 VAR_17[0] = 0;
 VAR_18 = 0;
 VAR_23 = 0;

 VAR_22 = VAR_14.numConnectedClients;

 for (VAR_19=0 ; VAR_19 < VAR_22 ; VAR_19++) {
  int VAR_26;

  VAR_21 = &VAR_14.clients[VAR_14.sortedClients[VAR_19]];

  if ( VAR_21->pers.connected == VAR_0 ) {
   VAR_26 = -1;
  } else {
   VAR_26 = VAR_21->ps.ping < 999 ? VAR_21->ps.ping : 999;
  }

  if( VAR_21->accuracy_shots ) {
   VAR_24 = VAR_21->accuracy_hits * 100 / VAR_21->accuracy_shots;
  }
  else {
   VAR_24 = 0;
  }
  VAR_25 = ( VAR_21->ps.persistant[VAR_8] == 0 && VAR_21->ps.persistant[VAR_7] == 0 ) ? 1 : 0;

  FUNC_0 (VAR_16, sizeof(VAR_16),
   " %i %i %i %i %i %i %i %i %i %i %i %i %i %i", VAR_14.sortedClients[VAR_19],
   VAR_21->ps.persistant[VAR_9], VAR_26, (VAR_14.time - VAR_21->pers.enterTime)/60000,
   VAR_23, VAR_13[VAR_14.sortedClients[VAR_19]].s.powerups, VAR_24,
   VAR_21->ps.persistant[VAR_6],
   VAR_21->ps.persistant[VAR_4],
   VAR_21->ps.persistant[VAR_5],
   VAR_21->ps.persistant[VAR_3],
   VAR_21->ps.persistant[VAR_1],
   VAR_25,
   VAR_21->ps.persistant[VAR_2]);
  VAR_20 = FUNC_2(VAR_16);
  if (VAR_18 + VAR_20 >= sizeof(VAR_17))
   break;
  FUNC_1 (VAR_17 + VAR_18, VAR_16);
  VAR_18 += VAR_20;
 }

 FUNC_3( VAR_15-VAR_13, FUNC_4("scores %i %i %i%s", VAR_19,
  VAR_14.teamScores[VAR_12], VAR_14.teamScores[VAR_11],
  VAR_17 ) );
}
