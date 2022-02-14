
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int buttons; int rightmove; int forwardmove; } ;
struct TYPE_8__ {int xyspeed; int waterlevel; int noFootsteps; TYPE_2__* ps; TYPE_1__ cmd; } ;
struct TYPE_7__ {float msec; } ;
struct TYPE_6__ {int* velocity; scalar_t__ groundEntityNum; int bobCycle; int pm_flags; scalar_t__* powerups; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 size_t VAR_15 ;
 TYPE_4__* VAR_16 ;
 TYPE_3__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( void ) {
 float VAR_20;
 int VAR_21;
 qboolean VAR_22;





 VAR_16->xyspeed = FUNC_3( VAR_16->ps->velocity[0] * VAR_16->ps->velocity[0]
  + VAR_16->ps->velocity[1] * VAR_16->ps->velocity[1] );

 if ( VAR_16->ps->groundEntityNum == VAR_1 ) {

  if ( VAR_16->ps->powerups[VAR_15] ) {
   FUNC_1( VAR_8 );
  }

  if ( VAR_16->waterlevel > 1 ) {
   FUNC_1( VAR_10 );
  }
  return;
 }


 if ( !VAR_16->cmd.forwardmove && !VAR_16->cmd.rightmove ) {
  if ( VAR_16->xyspeed < 5 ) {
   VAR_16->ps->bobCycle = 0;
   if ( VAR_16->ps->pm_flags & VAR_14 ) {
    FUNC_1( VAR_8 );
   } else {
    FUNC_1( VAR_7 );
   }
  }
  return;
 }


 VAR_22 = VAR_18;

 if ( VAR_16->ps->pm_flags & VAR_14 ) {
  VAR_20 = 0.5;
  if ( VAR_16->ps->pm_flags & VAR_13 ) {
   FUNC_1( VAR_5 );
  }
  else {
   FUNC_1( VAR_12 );
  }
 } else {
  if ( !( VAR_16->cmd.buttons & VAR_0 ) ) {
   VAR_20 = 0.4f;
   if ( VAR_16->ps->pm_flags & VAR_13 ) {
    FUNC_1( VAR_4 );
   }
   else {
    FUNC_1( VAR_9 );
   }
   VAR_22 = VAR_19;
  } else {
   VAR_20 = 0.3f;
   if ( VAR_16->ps->pm_flags & VAR_13 ) {
    FUNC_1( VAR_6 );
   }
   else {
    FUNC_1( VAR_11 );
   }
  }
 }


 VAR_21 = VAR_16->ps->bobCycle;
 VAR_16->ps->bobCycle = (int)( VAR_21 + VAR_20 * VAR_17.msec ) & 255;


 if ( ( ( VAR_21 + 64 ) ^ ( VAR_16->ps->bobCycle + 64 ) ) & 128 ) {
  if ( VAR_16->waterlevel == 0 ) {

   if ( VAR_22 && !VAR_16->noFootsteps ) {
    FUNC_0( FUNC_2() );
   }
  } else if ( VAR_16->waterlevel == 1 ) {

   FUNC_0( VAR_2 );
  } else if ( VAR_16->waterlevel == 2 ) {

   FUNC_0( VAR_3 );
  } else if ( VAR_16->waterlevel == 3 ) {


  }
 }
}
