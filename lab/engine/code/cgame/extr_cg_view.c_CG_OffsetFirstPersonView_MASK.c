
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
typedef struct TYPE_11__ TYPE_10__ ;


typedef int vec3_t ;
struct TYPE_20__ {float value; } ;
struct TYPE_19__ {float value; } ;
struct TYPE_18__ {float value; } ;
struct TYPE_17__ {float value; } ;
struct TYPE_16__ {float value; } ;
struct TYPE_15__ {int pm_flags; scalar_t__ viewheight; int velocity; } ;
struct TYPE_14__ {float* vieworg; int * viewaxis; } ;
struct TYPE_12__ {scalar_t__ pm_type; float* stats; } ;
struct TYPE_13__ {TYPE_1__ ps; } ;
struct TYPE_11__ {float* refdefViewAngles; float damageTime; float time; float v_dmg_pitch; float v_dmg_roll; float landTime; float fall_value; int xyspeed; float bobfracsin; int bobcycle; int duckTime; int duckChange; float landChange; TYPE_4__ predictedPlayerState; TYPE_3__ refdef; TYPE_2__* snap; } ;


 int FUNC_0 (float*,int ,int *,int ) ;
 int FUNC_1 () ;
 float VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 float FUNC_2 (int ,int ) ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (float*,float,int ,float*) ;
 size_t VAR_13 ;
 TYPE_10__ VAR_14 ;
 TYPE_9__ VAR_15 ;
 TYPE_8__ VAR_16 ;
 TYPE_7__ VAR_17 ;
 TYPE_6__ VAR_18 ;
 TYPE_5__ VAR_19 ;

__attribute__((used)) static void FUNC_5( void ) {
 float *VAR_20;
 float *VAR_21;
 float VAR_22;
 float VAR_23;
 float VAR_24;
 float VAR_25;
 float VAR_26;
 vec3_t VAR_27;
 int VAR_28;

 if ( VAR_14.snap->ps.pm_type == VAR_9 ) {
  return;
 }

 VAR_20 = VAR_14.refdef.vieworg;
 VAR_21 = VAR_14.refdefViewAngles;


 if ( VAR_14.snap->ps.stats[VAR_12] <= 0 ) {
  VAR_21[VAR_10] = 40;
  VAR_21[VAR_7] = -15;
  VAR_21[VAR_13] = VAR_14.snap->ps.stats[VAR_11];
  VAR_20[2] += VAR_14.predictedPlayerState.viewheight;
  return;
 }


 if ( VAR_14.damageTime ) {
  VAR_23 = VAR_14.time - VAR_14.damageTime;
  if ( VAR_23 < VAR_0 ) {
   VAR_23 /= VAR_0;
   VAR_21[VAR_7] += VAR_23 * VAR_14.v_dmg_pitch;
   VAR_21[VAR_10] += VAR_23 * VAR_14.v_dmg_roll;
  } else {
   VAR_23 = 1.0 - ( VAR_23 - VAR_0 ) / VAR_1;
   if ( VAR_23 > 0 ) {
    VAR_21[VAR_7] += VAR_23 * VAR_14.v_dmg_pitch;
    VAR_21[VAR_10] += VAR_23 * VAR_14.v_dmg_roll;
   }
  }
 }
 FUNC_3( VAR_14.predictedPlayerState.velocity, VAR_27 );

 VAR_24 = FUNC_2 ( VAR_27, VAR_14.refdef.viewaxis[0]);
 VAR_21[VAR_7] += VAR_24 * VAR_18.value;

 VAR_24 = FUNC_2 ( VAR_27, VAR_14.refdef.viewaxis[1]);
 VAR_21[VAR_10] -= VAR_24 * VAR_19.value;




 VAR_25 = VAR_14.xyspeed > 200 ? VAR_14.xyspeed : 200;

 VAR_24 = VAR_14.bobfracsin * VAR_15.value * VAR_25;
 if (VAR_14.predictedPlayerState.pm_flags & VAR_8)
  VAR_24 *= 3;
 VAR_21[VAR_7] += VAR_24;
 VAR_24 = VAR_14.bobfracsin * VAR_16.value * VAR_25;
 if (VAR_14.predictedPlayerState.pm_flags & VAR_8)
  VAR_24 *= 3;
 if (VAR_14.bobcycle & 1)
  VAR_24 = -VAR_24;
 VAR_21[VAR_10] += VAR_24;




 VAR_20[2] += VAR_14.predictedPlayerState.viewheight;


 VAR_28 = VAR_14.time - VAR_14.duckTime;
 if ( VAR_28 < VAR_2) {
  VAR_20[2] -= VAR_14.duckChange
   * (VAR_2 - VAR_28) / VAR_2;
 }


 VAR_22 = VAR_14.bobfracsin * VAR_14.xyspeed * VAR_17.value;
 if (VAR_22 > 6) {
  VAR_22 = 6;
 }

 VAR_20[2] += VAR_22;



 VAR_24 = VAR_14.time - VAR_14.landTime;
 if ( VAR_24 < VAR_4 ) {
  VAR_26 = VAR_24 / VAR_4;
  VAR_20[2] += VAR_14.landChange * VAR_26;
 } else if ( VAR_24 < VAR_4 + VAR_5 ) {
  VAR_24 -= VAR_4;
  VAR_26 = 1.0 - ( VAR_24 / VAR_5 );
  VAR_20[2] += VAR_14.landChange * VAR_26;
 }


 FUNC_1();
}
