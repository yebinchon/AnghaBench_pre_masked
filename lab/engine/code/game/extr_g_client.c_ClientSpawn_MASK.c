
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_30__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef int vec3_t ;
typedef int userinfo ;
struct TYPE_37__ {int clientNum; int groundEntityNum; int eFlags; } ;
struct TYPE_35__ {int svFlags; int currentOrigin; int maxs; int mins; int contents; } ;
struct TYPE_38__ {char* classname; int health; TYPE_30__ s; TYPE_4__* client; TYPE_1__ r; int flags; scalar_t__ watertype; scalar_t__ waterlevel; int die; int clipmask; void* inuse; void* takedamage; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_34__ {int eFlags; int ping; int* persistant; int eventSequence; int* stats; int clientNum; int* ammo; int pm_time; int weapon; scalar_t__ commandTime; int origin; int weaponstate; int legsAnim; int torsoAnim; int pm_flags; } ;
struct TYPE_40__ {scalar_t__ sessionTeam; scalar_t__ spectatorState; } ;
struct TYPE_42__ {scalar_t__ serverTime; } ;
struct TYPE_36__ {int state; } ;
struct TYPE_41__ {int maxHealth; TYPE_8__ cmd; TYPE_2__ teamState; void* initialSpawn; scalar_t__ localClient; } ;
struct TYPE_39__ {int accuracy_hits; int accuracy_shots; int lastkilled_client; TYPE_14__ ps; TYPE_5__ sess; TYPE_6__ pers; scalar_t__ latched_buttons; scalar_t__ inactivityTime; scalar_t__ respawnTime; scalar_t__ airOutTime; } ;
typedef TYPE_4__ gclient_t ;
typedef TYPE_5__ clientSession_t ;
typedef TYPE_6__ clientPersistant_t ;
struct TYPE_43__ {scalar_t__ time; int intermissiontime; TYPE_4__* clients; } ;
struct TYPE_33__ {scalar_t__ integer; } ;
struct TYPE_32__ {int integer; } ;
struct TYPE_31__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_14__*,TYPE_30__*,void*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (TYPE_3__*) ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 TYPE_3__* FUNC_10 (scalar_t__,int ,int ,int ,int) ;
 TYPE_3__* FUNC_11 (int ,int ,int) ;
 TYPE_3__* FUNC_12 (int ,int ,int ,int) ;
 TYPE_3__* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_14__*,int) ;
 TYPE_3__* VAR_30 ;
 TYPE_12__ VAR_31 ;
 TYPE_11__ VAR_32 ;
 TYPE_10__ VAR_33 ;
 TYPE_9__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 void* VAR_38 ;
 int FUNC_19 (int,TYPE_8__*) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 (TYPE_3__*) ;

void FUNC_22(gentity_t *VAR_39) {
 int VAR_40;
 vec3_t VAR_41, VAR_42;
 gclient_t *VAR_43;
 int VAR_44;
 clientPersistant_t VAR_45;
 clientSession_t VAR_46;
 int VAR_47[VAR_12];
 gentity_t *VAR_48;
 gentity_t *VAR_49;
 int VAR_50;
 int VAR_51;

 int VAR_52, VAR_53;
 int VAR_54;
 char VAR_55[VAR_11];

 VAR_40 = VAR_39 - VAR_30;
 VAR_43 = VAR_39->client;

 FUNC_15(VAR_41);




 if ( VAR_43->sess.sessionTeam == VAR_23 ) {
  VAR_48 = FUNC_13 (
      VAR_41, VAR_42);
 } else if (VAR_31.integer >= VAR_7 ) {

  VAR_48 = FUNC_10 (
      VAR_43->sess.sessionTeam,
      VAR_43->pers.teamState.state,
      VAR_41, VAR_42,
      !!(VAR_39->r.svFlags & VAR_21));
 }
 else
 {

  if ( !VAR_43->pers.initialSpawn && VAR_43->pers.localClient )
  {
   VAR_43->pers.initialSpawn = VAR_38;
   VAR_48 = FUNC_11(VAR_41, VAR_42,
            !!(VAR_39->r.svFlags & VAR_21));
  }
  else
  {

   VAR_48 = FUNC_12 (
    VAR_43->ps.origin,
    VAR_41, VAR_42, !!(VAR_39->r.svFlags & VAR_21));
  }
 }
 VAR_43->pers.teamState.state = VAR_22;


 VAR_39->s.eFlags &= ~VAR_1;



 VAR_50 = VAR_39->client->ps.eFlags & (VAR_3 | VAR_4 | VAR_2);
 VAR_50 ^= VAR_3;



 VAR_45 = VAR_43->pers;
 VAR_46 = VAR_43->sess;
 VAR_51 = VAR_43->ps.ping;

 VAR_52 = VAR_43->accuracy_hits;
 VAR_53 = VAR_43->accuracy_shots;
 for ( VAR_44 = 0 ; VAR_44 < VAR_12 ; VAR_44++ ) {
  VAR_47[VAR_44] = VAR_43->ps.persistant[VAR_44];
 }
 VAR_54 = VAR_43->ps.eventSequence;

 FUNC_3 (VAR_43, 0, sizeof(*VAR_43));

 VAR_43->pers = VAR_45;
 VAR_43->sess = VAR_46;
 VAR_43->ps.ping = VAR_51;

 VAR_43->accuracy_hits = VAR_52;
 VAR_43->accuracy_shots = VAR_53;
 VAR_43->lastkilled_client = -1;

 for ( VAR_44 = 0 ; VAR_44 < VAR_12 ; VAR_44++ ) {
  VAR_43->ps.persistant[VAR_44] = VAR_47[VAR_44];
 }
 VAR_43->ps.eventSequence = VAR_54;

 VAR_43->ps.persistant[VAR_13]++;
 VAR_43->ps.persistant[VAR_14] = VAR_43->sess.sessionTeam;

 VAR_43->airOutTime = VAR_34.time + 12000;

 FUNC_20( VAR_40, VAR_55, sizeof(VAR_55) );

 VAR_43->pers.maxHealth = FUNC_17( FUNC_8( VAR_55, "handicap" ) );
 if ( VAR_43->pers.maxHealth < 1 || VAR_43->pers.maxHealth > 100 ) {
  VAR_43->pers.maxHealth = 100;
 }

 VAR_43->ps.stats[VAR_19] = VAR_43->pers.maxHealth;
 VAR_43->ps.eFlags = VAR_50;

 VAR_39->s.groundEntityNum = VAR_5;
 VAR_39->client = &VAR_34.clients[VAR_40];
 VAR_39->takedamage = VAR_38;
 VAR_39->inuse = VAR_38;
 VAR_39->classname = "player";
 VAR_39->r.contents = VAR_0;
 VAR_39->clipmask = VAR_10;
 VAR_39->die = VAR_37;
 VAR_39->waterlevel = 0;
 VAR_39->watertype = 0;
 VAR_39->flags = 0;

 FUNC_16 (VAR_36, VAR_39->r.mins);
 FUNC_16 (VAR_35, VAR_39->r.maxs);

 VAR_43->ps.clientNum = VAR_40;

 VAR_43->ps.stats[VAR_20] = ( 1 << VAR_28 );
 if ( VAR_33.integer != 0 ) {
  VAR_43->ps.ammo[VAR_28] = -1;
 } else if ( VAR_31.integer == VAR_8 ) {
  VAR_43->ps.ammo[VAR_28] = 50;
 } else {
  VAR_43->ps.ammo[VAR_28] = 100;
 }

 VAR_43->ps.stats[VAR_20] |= ( 1 << VAR_26 );
 VAR_43->ps.ammo[VAR_26] = -1;
 VAR_43->ps.ammo[VAR_27] = -1;


 VAR_43->ps.stats[VAR_18] = VAR_43->ps.stats[VAR_19] + 25;

 FUNC_5( VAR_39, VAR_41 );
 FUNC_16( VAR_41, VAR_43->ps.origin );

 FUNC_18(&VAR_43->ps, !!(VAR_39->r.svFlags & VAR_21));
 VAR_39->health = VAR_43->ps.stats[VAR_18];


 VAR_43->ps.pm_flags |= VAR_15;

 FUNC_19( VAR_43 - VAR_34.clients, &VAR_39->client->pers.cmd );
 FUNC_14( VAR_39, VAR_42 );

 VAR_43->ps.pm_flags |= VAR_16;
 VAR_43->ps.pm_time = 100;

 VAR_43->respawnTime = VAR_34.time;
 VAR_43->inactivityTime = VAR_34.time + VAR_32.integer * 1000;
 VAR_43->latched_buttons = 0;


 VAR_43->ps.torsoAnim = VAR_24;
 VAR_43->ps.legsAnim = VAR_9;

 if (!VAR_34.intermissiontime) {
  if (VAR_39->client->sess.sessionTeam != VAR_23) {
   FUNC_4(VAR_39);

   VAR_43->ps.weapon = VAR_28;
   VAR_43->ps.weaponstate = VAR_25;

   FUNC_7(VAR_48, VAR_39);

   VAR_43->ps.weapon = 1;

   for (VAR_44 = VAR_29 - 1 ; VAR_44 > 0 ; VAR_44--) {
    if (VAR_43->ps.stats[VAR_20] & (1 << VAR_44)) {
     VAR_43->ps.weapon = VAR_44;
     break;
    }
   }

   FUNC_16(VAR_39->client->ps.origin, VAR_39->r.currentOrigin);

   VAR_49 = FUNC_6(VAR_39->client->ps.origin, VAR_6);
   VAR_49->s.clientNum = VAR_39->s.clientNum;

   FUNC_21 (VAR_39);
  }
 } else {

  FUNC_9(VAR_39);
 }


 VAR_43->ps.commandTime = VAR_34.time - 100;
 VAR_39->client->pers.cmd.serverTime = VAR_34.time;
 FUNC_2( VAR_39-VAR_30 );


 if ( VAR_39->client->sess.spectatorState != VAR_17 ) {
  FUNC_1( VAR_39 );
 }


 FUNC_0( &VAR_43->ps, &VAR_39->s, VAR_38 );
}
