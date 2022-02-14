
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;


struct TYPE_26__ {int trBase; } ;
struct TYPE_29__ {scalar_t__ eType; scalar_t__ weapon; int torsoAnim; int legsAnim; int powerups; int eventParm; int event; int frame; int modelindex2; int modelindex; int groundEntityNum; int eFlags; int origin2; TYPE_1__ apos; } ;
struct TYPE_30__ {int svFlags; scalar_t__ contents; scalar_t__ bmodel; int maxs; int mins; int currentAngles; int currentOrigin; int linked; } ;
struct TYPE_31__ {scalar_t__ touch; TYPE_3__* client; TYPE_4__ s; TYPE_5__ r; int inuse; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_32__ {scalar_t__ type; scalar_t__ weapon; int torsoAnim; int legsAnim; int powerups; int eventParm; int event; int frame; int modelindex2; int modelindex; int groundent; int solid; int flags; int maxs; int mins; int old_origin; int angles; int origin; } ;
typedef TYPE_7__ bot_entitystate_t ;
struct TYPE_34__ {int serverTime; scalar_t__ buttons; scalar_t__ upmove; scalar_t__ rightmove; scalar_t__ forwardmove; } ;
struct TYPE_33__ {int integer; } ;
struct TYPE_27__ {scalar_t__ connected; } ;
struct TYPE_28__ {TYPE_2__ pers; } ;
struct TYPE_25__ {int botthink_residual; TYPE_9__ lastucmd; int client; int inuse; } ;


 int FUNC_0 (int,float) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_13__*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_10 ;
 TYPE_8__ VAR_11 ;
 TYPE_8__ VAR_12 ;
 TYPE_8__ VAR_13 ;
 TYPE_8__ VAR_14 ;
 TYPE_8__ VAR_15 ;
 TYPE_8__ VAR_16 ;
 TYPE_8__ VAR_17 ;
 TYPE_8__ VAR_18 ;
 TYPE_8__ VAR_19 ;
 TYPE_8__ VAR_20 ;
 TYPE_13__** VAR_21 ;
 int VAR_22 ;
 TYPE_6__* VAR_23 ;
 int FUNC_8 (TYPE_7__*,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (float) ;
 int FUNC_12 (int,TYPE_7__*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,TYPE_9__*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (TYPE_8__*) ;

int FUNC_17(int VAR_26) {
 int VAR_27;
 gentity_t *VAR_28;
 bot_entitystate_t VAR_29;
 int VAR_30, VAR_31;
 static int VAR_32;
 static int VAR_33;
 static int VAR_34;

 FUNC_6();

 FUNC_16(&VAR_17);
 FUNC_16(&VAR_12);
 FUNC_16(&VAR_11);
 FUNC_16(&VAR_14);
 FUNC_16(&VAR_19);
 FUNC_16(&VAR_20);
 FUNC_16(&VAR_13);
 FUNC_16(&VAR_18);
 FUNC_16(&VAR_15);
 FUNC_16(&VAR_16);

 if (VAR_16.integer) {


  FUNC_4();
 }

 if (VAR_15.integer) {

  for( VAR_27 = 0; VAR_27 < VAR_4; VAR_27++ ) {
   if( !VAR_21[VAR_27] || !VAR_21[VAR_27]->inuse ) {
    continue;
   }
   if( VAR_23[VAR_27].client->pers.connected != VAR_1 ) {
    continue;
   }
   VAR_21[VAR_27]->lastucmd.forwardmove = 0;
   VAR_21[VAR_27]->lastucmd.rightmove = 0;
   VAR_21[VAR_27]->lastucmd.upmove = 0;
   VAR_21[VAR_27]->lastucmd.buttons = 0;
   VAR_21[VAR_27]->lastucmd.serverTime = VAR_26;
   FUNC_14(VAR_21[VAR_27]->client, &VAR_21[VAR_27]->lastucmd);
  }
  return VAR_25;
 }

 if (VAR_13.integer) {
  FUNC_13("memorydump", "1");
  FUNC_15("bot_memorydump", "0");
 }
 if (VAR_18.integer) {
  FUNC_13("saveroutingcache", "1");
  FUNC_15("bot_saveroutingcache", "0");
 }

 FUNC_2();

 if (VAR_20.integer > 200) {
  FUNC_15("bot_thinktime", "200");
 }

 if (VAR_20.integer != VAR_34) {
  VAR_34 = VAR_20.integer;
  FUNC_3();
 }

 VAR_30 = VAR_26 - VAR_32;
 VAR_32 = VAR_26;

 VAR_33 += VAR_30;

 if (VAR_30 > VAR_20.integer) VAR_31 = VAR_30;
 else VAR_31 = VAR_20.integer;


 if ( VAR_33 >= VAR_31 ) {
  VAR_33 -= VAR_31;

  FUNC_11((float) VAR_26 / 1000);

  if (!FUNC_9()) return VAR_24;


  for (VAR_27 = 0; VAR_27 < VAR_5; VAR_27++) {
   VAR_28 = &VAR_23[VAR_27];
   if (!VAR_28->inuse) {
    FUNC_12(VAR_27, ((void*)0));
    continue;
   }
   if (!VAR_28->r.linked) {
    FUNC_12(VAR_27, ((void*)0));
    continue;
   }
   if (VAR_28->r.svFlags & VAR_9) {
    FUNC_12(VAR_27, ((void*)0));
    continue;
   }

   if (VAR_28->s.eType == VAR_3 && VAR_28->s.weapon != VAR_10) {
    FUNC_12(VAR_27, ((void*)0));
    continue;
   }

   if (VAR_28->s.eType > VAR_2) {
    FUNC_12(VAR_27, ((void*)0));
    continue;
   }
   FUNC_8(&VAR_29, 0, sizeof(bot_entitystate_t));

   FUNC_7(VAR_28->r.currentOrigin, VAR_29.origin);
   if (VAR_27 < VAR_4) {
    FUNC_7(VAR_28->s.apos.trBase, VAR_29.angles);
   } else {
    FUNC_7(VAR_28->r.currentAngles, VAR_29.angles);
   }
   FUNC_7(VAR_28->s.origin2, VAR_29.old_origin);
   FUNC_7(VAR_28->r.mins, VAR_29.mins);
   FUNC_7(VAR_28->r.maxs, VAR_29.maxs);
   VAR_29.type = VAR_28->s.eType;
   VAR_29.flags = VAR_28->s.eFlags;
   if (VAR_28->r.bmodel) VAR_29.solid = VAR_8;
   else VAR_29.solid = VAR_7;
   VAR_29.groundent = VAR_28->s.groundEntityNum;
   VAR_29.modelindex = VAR_28->s.modelindex;
   VAR_29.modelindex2 = VAR_28->s.modelindex2;
   VAR_29.frame = VAR_28->s.frame;
   VAR_29.event = VAR_28->s.event;
   VAR_29.eventParm = VAR_28->s.eventParm;
   VAR_29.powerups = VAR_28->s.powerups;
   VAR_29.legsAnim = VAR_28->s.legsAnim;
   VAR_29.torsoAnim = VAR_28->s.torsoAnim;
   VAR_29.weapon = VAR_28->s.weapon;

   FUNC_12(VAR_27, &VAR_29);
  }

  FUNC_1();
 }

 VAR_22 = FUNC_10();


 for( VAR_27 = 0; VAR_27 < VAR_4; VAR_27++ ) {
  if( !VAR_21[VAR_27] || !VAR_21[VAR_27]->inuse ) {
   continue;
  }

  VAR_21[VAR_27]->botthink_residual += VAR_30;

  if ( VAR_21[VAR_27]->botthink_residual >= VAR_31 ) {
   VAR_21[VAR_27]->botthink_residual -= VAR_31;

   if (!FUNC_9()) return VAR_24;

   if (VAR_23[VAR_27].client->pers.connected == VAR_1) {
    FUNC_0(VAR_27, (float) VAR_31 / 1000);
   }
  }
 }



 for( VAR_27 = 0; VAR_27 < VAR_4; VAR_27++ ) {
  if( !VAR_21[VAR_27] || !VAR_21[VAR_27]->inuse ) {
   continue;
  }
  if( VAR_23[VAR_27].client->pers.connected != VAR_1 ) {
   continue;
  }

  FUNC_5(VAR_21[VAR_27], VAR_26, VAR_30);
  FUNC_14(VAR_21[VAR_27]->client, &VAR_21[VAR_27]->lastucmd);
 }

 return VAR_25;
}
