
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {int (* ejectBrassFunc ) (TYPE_5__*) ;scalar_t__* flashSound; } ;
typedef TYPE_3__ weaponInfo_t ;
struct TYPE_16__ {size_t weapon; int powerups; int number; } ;
typedef TYPE_4__ entityState_t ;
struct TYPE_13__ {int railFireTime; scalar_t__ lightningFiring; } ;
struct TYPE_17__ {TYPE_4__ currentState; TYPE_1__ pe; int muzzleFlashTime; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_14__ {scalar_t__ quadSound; } ;
struct TYPE_18__ {TYPE_2__ media; } ;
struct TYPE_12__ {int time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_10__ VAR_7 ;
 TYPE_9__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_7__ VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,int ,int ,scalar_t__) ;

void FUNC_4( centity_t *VAR_11 ) {
 entityState_t *VAR_12;
 int VAR_13;
 weaponInfo_t *VAR_14;

 VAR_12 = &VAR_11->currentState;
 if ( VAR_12->weapon == VAR_4 ) {
  return;
 }
 if ( VAR_12->weapon >= VAR_5 ) {
  FUNC_0( "CG_FireWeapon: ent->weapon >= WP_NUM_WEAPONS" );
  return;
 }
 VAR_14 = &VAR_9[ VAR_12->weapon ];



 VAR_11->muzzleFlashTime = VAR_7.time;


 if ( VAR_12->weapon == VAR_3 ) {
  if ( VAR_11->pe.lightningFiring ) {
   return;
  }
 }

 if( VAR_12->weapon == VAR_6 ) {
  VAR_11->pe.railFireTime = VAR_7.time;
 }


 if ( VAR_11->currentState.powerups & ( 1 << VAR_2 ) ) {
  FUNC_3 (((void*)0), VAR_11->currentState.number, VAR_0, VAR_10.media.quadSound );
 }


 for ( VAR_13 = 0 ; VAR_13 < 4 ; VAR_13++ ) {
  if ( !VAR_14->flashSound[VAR_13] ) {
   break;
  }
 }
 if ( VAR_13 > 0 ) {
  VAR_13 = FUNC_1() % VAR_13;
  if ( VAR_14->flashSound[VAR_13] )
  {
   FUNC_3( ((void*)0), VAR_12->number, VAR_1, VAR_14->flashSound[VAR_13] );
  }
 }


 if ( VAR_14->ejectBrassFunc && VAR_8.integer > 0 ) {
  VAR_14->ejectBrassFunc( VAR_11 );
 }
}
