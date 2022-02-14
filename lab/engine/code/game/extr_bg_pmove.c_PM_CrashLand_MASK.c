
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int waterlevel; TYPE_2__* ps; } ;
struct TYPE_5__ {int surfaceFlags; } ;
struct TYPE_7__ {float* previous_origin; float* previous_velocity; TYPE_1__ groundTrace; } ;
struct TYPE_6__ {int pm_flags; float* origin; float gravity; scalar_t__* stats; scalar_t__ bobCycle; int legsTimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 TYPE_3__ VAR_11 ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4( void ) {
 float VAR_12;
 float VAR_13;
 float VAR_14, VAR_15;
 float VAR_16;
 float VAR_17, VAR_18, VAR_19, VAR_20;


 if ( VAR_10->ps->pm_flags & VAR_5 ) {
  FUNC_2( VAR_4 );
 } else {
  FUNC_2( VAR_3 );
 }

 VAR_10->ps->legsTimer = VAR_9;


 VAR_13 = VAR_10->ps->origin[2] - VAR_11.previous_origin[2];
 VAR_14 = VAR_11.previous_velocity[2];
 VAR_15 = -VAR_10->ps->gravity;

 VAR_17 = VAR_15 / 2;
 VAR_18 = VAR_14;
 VAR_19 = -VAR_13;

 VAR_20 = VAR_18 * VAR_18 - 4 * VAR_17 * VAR_19;
 if ( VAR_20 < 0 ) {
  return;
 }
 VAR_16 = (-VAR_18 - FUNC_3( VAR_20 ) ) / ( 2 * VAR_17 );

 VAR_12 = VAR_14 + VAR_16 * VAR_15;
 VAR_12 = VAR_12*VAR_12 * 0.0001;


 if ( VAR_10->ps->pm_flags & VAR_6 ) {
  VAR_12 *= 2;
 }


 if ( VAR_10->waterlevel == 3 ) {
  return;
 }


 if ( VAR_10->waterlevel == 2 ) {
  VAR_12 *= 0.25;
 }
 if ( VAR_10->waterlevel == 1 ) {
  VAR_12 *= 0.5;
 }

 if ( VAR_12 < 1 ) {
  return;
 }





 if ( !(VAR_11.groundTrace.surfaceFlags & VAR_8) ) {
  if ( VAR_12 > 60 ) {
   FUNC_0( VAR_0 );
  } else if ( VAR_12 > 40 ) {

   if ( VAR_10->ps->stats[VAR_7] > 0 ) {
    FUNC_0( VAR_1 );
   }
  } else if ( VAR_12 > 7 ) {
   FUNC_0( VAR_2 );
  } else {
   FUNC_0( FUNC_1() );
  }
 }


 VAR_10->ps->bobCycle = 0;
}
