
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


struct TYPE_13__ {scalar_t__ yawAngle; void* pitching; scalar_t__ pitchAngle; void* yawing; } ;
struct TYPE_11__ {TYPE_4__ torso; TYPE_4__ legs; } ;
struct TYPE_10__ {size_t clientNum; int number; int apos; int pos; int torsoAnim; int legsAnim; } ;
struct TYPE_12__ {int errorTime; TYPE_2__ pe; TYPE_1__ currentState; scalar_t__* rawAngles; int lerpAngles; scalar_t__* rawOrigin; int lerpOrigin; void* extrapolated; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_16__ {int time; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int * clientinfo; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 size_t VAR_0 ;
 int FUNC_3 (int ,scalar_t__*) ;
 size_t VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 void* VAR_5 ;

void FUNC_5( centity_t *VAR_6 ) {
 VAR_6->errorTime = -99999;
 VAR_6->extrapolated = VAR_5;

 FUNC_1( &VAR_4.clientinfo[ VAR_6->currentState.clientNum ], &VAR_6->pe.legs, VAR_6->currentState.legsAnim );
 FUNC_1( &VAR_4.clientinfo[ VAR_6->currentState.clientNum ], &VAR_6->pe.torso, VAR_6->currentState.torsoAnim );

 FUNC_0( &VAR_6->currentState.pos, VAR_2.time, VAR_6->lerpOrigin );
 FUNC_0( &VAR_6->currentState.apos, VAR_2.time, VAR_6->lerpAngles );

 FUNC_3( VAR_6->lerpOrigin, VAR_6->rawOrigin );
 FUNC_3( VAR_6->lerpAngles, VAR_6->rawAngles );

 FUNC_4( &VAR_6->pe.legs, 0, sizeof( VAR_6->pe.legs ) );
 VAR_6->pe.legs.yawAngle = VAR_6->rawAngles[VAR_1];
 VAR_6->pe.legs.yawing = VAR_5;
 VAR_6->pe.legs.pitchAngle = 0;
 VAR_6->pe.legs.pitching = VAR_5;

 FUNC_4( &VAR_6->pe.torso, 0, sizeof( VAR_6->pe.torso ) );
 VAR_6->pe.torso.yawAngle = VAR_6->rawAngles[VAR_1];
 VAR_6->pe.torso.yawing = VAR_5;
 VAR_6->pe.torso.pitchAngle = VAR_6->rawAngles[VAR_0];
 VAR_6->pe.torso.pitching = VAR_5;

 if ( VAR_3.integer ) {
  FUNC_2("%i ResetPlayerEntity yaw=%f\n", VAR_6->currentState.number, VAR_6->pe.torso.yawAngle );
 }
}
