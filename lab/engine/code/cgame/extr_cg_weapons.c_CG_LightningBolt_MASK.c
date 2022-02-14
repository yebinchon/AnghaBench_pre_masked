
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int* vec3_t ;
struct TYPE_19__ {int* endpos; double fraction; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_20__ {int* oldorigin; int* origin; int axis; int hModel; int customShader; int reType; } ;
typedef TYPE_5__ refEntity_t ;
struct TYPE_17__ {scalar_t__ weapon; int legsAnim; int number; } ;
struct TYPE_21__ {float* lerpAngles; int* lerpOrigin; TYPE_2__ currentState; } ;
typedef TYPE_6__ centity_t ;
typedef int beam ;
struct TYPE_18__ {int lightningExplosionModel; int lightningShader; } ;
struct TYPE_22__ {TYPE_3__ media; } ;
struct TYPE_16__ {int clientNum; } ;
struct TYPE_15__ {float* refdefViewAngles; TYPE_1__ predictedPlayerState; } ;
struct TYPE_14__ {double value; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int *,int *) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (TYPE_4__*,int*,int ,int ,int*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int,int*,int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*,int*,int*) ;
 scalar_t__ VAR_8 ;
 TYPE_11__ VAR_9 ;
 TYPE_10__ VAR_10 ;
 TYPE_9__ VAR_11 ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_10( centity_t *VAR_13, vec3_t VAR_14 ) {
 trace_t VAR_15;
 refEntity_t VAR_16;
 vec3_t VAR_17;
 vec3_t VAR_18, VAR_19;
 int VAR_20;

 if (VAR_13->currentState.weapon != VAR_8) {
  return;
 }

 FUNC_7( &VAR_16, 0, sizeof( VAR_16 ) );


 if ((VAR_13->currentState.number == VAR_9.predictedPlayerState.clientNum) && (VAR_10.value != 0)) {
  vec3_t VAR_21;
  int VAR_22;

  for (VAR_22 = 0; VAR_22 < 3; VAR_22++) {
   float VAR_23 = VAR_13->lerpAngles[VAR_22] - VAR_9.refdefViewAngles[VAR_22];
   if (VAR_23 > 180) {
    VAR_23 -= 360;
   }
   if (VAR_23 < -180) {
    VAR_23 += 360;
   }

   VAR_21[VAR_22] = VAR_9.refdefViewAngles[VAR_22] + VAR_23 * (1.0 - VAR_10.value);
   if (VAR_21[VAR_22] < 0) {
    VAR_21[VAR_22] += 360;
   }
   if (VAR_21[VAR_22] > 360) {
    VAR_21[VAR_22] -= 360;
   }
  }

  FUNC_0(VAR_21, VAR_17, ((void*)0), ((void*)0) );
  FUNC_3(VAR_13->lerpOrigin, VAR_18 );

 } else {

  FUNC_0( VAR_13->lerpAngles, VAR_17, ((void*)0), ((void*)0) );
  FUNC_3(VAR_13->lerpOrigin, VAR_18 );
 }

 VAR_20 = VAR_13->currentState.legsAnim & ~VAR_0;
 if ( VAR_20 == VAR_4 || VAR_20 == VAR_3 ) {
  VAR_18[2] += VAR_1;
 } else {
  VAR_18[2] += VAR_2;
 }

 FUNC_4( VAR_18, 14, VAR_17, VAR_18 );


 FUNC_4( VAR_18, VAR_5, VAR_17, VAR_19 );


 FUNC_2( &VAR_15, VAR_18, VAR_12, VAR_12, VAR_19,
  VAR_13->currentState.number, VAR_6 );


 FUNC_3( VAR_15.endpos, VAR_16.oldorigin );



 FUNC_3( VAR_14, VAR_16.origin );

 VAR_16.reType = VAR_7;
 VAR_16.customShader = VAR_11.media.lightningShader;
 FUNC_9( &VAR_16 );


 if ( VAR_15.fraction < 1.0 ) {
  vec3_t VAR_24;
  vec3_t VAR_25;

  FUNC_6( VAR_16.oldorigin, VAR_16.origin, VAR_25 );
  FUNC_5( VAR_25 );

  FUNC_7( &VAR_16, 0, sizeof( VAR_16 ) );
  VAR_16.hModel = VAR_11.media.lightningExplosionModel;

  FUNC_4( VAR_15.endpos, -16, VAR_25, VAR_16.origin );


  VAR_24[0] = FUNC_8() % 360;
  VAR_24[1] = FUNC_8() % 360;
  VAR_24[2] = FUNC_8() % 360;
  FUNC_1( VAR_24, VAR_16.axis );
  FUNC_9( &VAR_16 );
 }
}
