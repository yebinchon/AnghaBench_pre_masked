
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int ownerNum; int currentOrigin; int contents; int absmax; int absmin; int maxs; int mins; int svFlags; } ;
struct TYPE_14__ {int trBase; int trType; int trDelta; scalar_t__ trTime; } ;
struct TYPE_15__ {int eFlags; int number; scalar_t__ groundEntityNum; int legsAnim; int torsoAnim; TYPE_3__ pos; scalar_t__ event; scalar_t__ loopSound; scalar_t__ powerups; int origin; } ;
struct TYPE_17__ {int clipmask; scalar_t__ health; TYPE_5__ r; TYPE_4__ s; void* takedamage; int die; int think; scalar_t__ nextthink; TYPE_2__* client; scalar_t__ physicsBounce; void* physicsObject; scalar_t__ timestamp; struct TYPE_17__* activator; int classname; int inuse; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_18__ {size_t bodyQueIndex; int num_entities; scalar_t__ time; TYPE_6__** bodyQue; } ;
struct TYPE_12__ {int velocity; } ;
struct TYPE_13__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int VAR_13 ;
 TYPE_6__* VAR_14 ;
 TYPE_9__ VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_6__*) ;

void FUNC_5( gentity_t *VAR_18 ) {




 gentity_t *VAR_19;
 int VAR_20;

 FUNC_4 (VAR_18);


 VAR_20 = FUNC_3( VAR_18->s.origin, -1 );
 if ( VAR_20 & VAR_4 ) {
  return;
 }


 VAR_19 = VAR_15.bodyQue[ VAR_15.bodyQueIndex ];
 VAR_15.bodyQueIndex = (VAR_15.bodyQueIndex + 1) % VAR_1;

 VAR_19->s = VAR_18->s;
 VAR_19->s.eFlags = VAR_7;
 VAR_19->s.powerups = 0;
 VAR_19->s.loopSound = 0;
 VAR_19->s.number = VAR_19 - VAR_14;
 VAR_19->timestamp = VAR_15.time;
 VAR_19->physicsObject = VAR_17;
 VAR_19->physicsBounce = 0;
 if ( VAR_19->s.groundEntityNum == VAR_9 ) {
  VAR_19->s.pos.trType = VAR_11;
  VAR_19->s.pos.trTime = VAR_15.time;
  FUNC_0( VAR_18->client->ps.velocity, VAR_19->s.pos.trDelta );
 } else {
  VAR_19->s.pos.trType = VAR_12;
 }
 VAR_19->s.event = 0;



 switch ( VAR_19->s.legsAnim & ~VAR_0 ) {
 case 130:
 case 133:
  VAR_19->s.torsoAnim = VAR_19->s.legsAnim = 133;
  break;
 case 129:
 case 132:
  VAR_19->s.torsoAnim = VAR_19->s.legsAnim = 132;
  break;
 case 128:
 case 131:
 default:
  VAR_19->s.torsoAnim = VAR_19->s.legsAnim = 131;
  break;
 }

 VAR_19->r.svFlags = VAR_18->r.svFlags;
 FUNC_0 (VAR_18->r.mins, VAR_19->r.mins);
 FUNC_0 (VAR_18->r.maxs, VAR_19->r.maxs);
 FUNC_0 (VAR_18->r.absmin, VAR_19->r.absmin);
 FUNC_0 (VAR_18->r.absmax, VAR_19->r.absmax);

 VAR_19->clipmask = VAR_6 | VAR_5;
 VAR_19->r.contents = VAR_3;
 VAR_19->r.ownerNum = VAR_18->s.number;

 VAR_19->nextthink = VAR_15.time + 5000;
 VAR_19->think = VAR_2;

 VAR_19->die = VAR_13;


 if ( VAR_18->health <= VAR_10 ) {
  VAR_19->takedamage = VAR_16;
 } else {
  VAR_19->takedamage = VAR_17;
 }


 FUNC_0 ( VAR_19->s.pos.trBase, VAR_19->r.currentOrigin );
 FUNC_2 (VAR_19);
}
