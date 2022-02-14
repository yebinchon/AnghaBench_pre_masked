
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int* vec3_t ;
struct TYPE_22__ {int* lightingOrigin; int hModel; int * axis; int backlerp; int frame; int oldframe; int renderfx; int shadowPlane; int customSkin; } ;
typedef TYPE_5__ refEntity_t ;
typedef int qhandle_t ;
typedef int pole ;
typedef int flag ;
typedef int clientInfo_t ;
struct TYPE_17__ {int yawAngle; int backlerp; int frame; int oldFrame; int yawing; } ;
struct TYPE_21__ {TYPE_10__ flag; } ;
struct TYPE_19__ {int* trDelta; } ;
struct TYPE_20__ {int legsAnim; size_t clientNum; TYPE_2__ pos; } ;
struct TYPE_23__ {TYPE_4__ pe; TYPE_3__ currentState; } ;
typedef TYPE_6__ centity_t ;
struct TYPE_18__ {int flagFlapModel; int flagPoleModel; } ;
struct TYPE_24__ {int * clientinfo; TYPE_1__ media; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,int ,char*) ;
 int FUNC_3 (int *,TYPE_10__*,int,int) ;
 int FUNC_4 (int,int,int,float,int*,int *) ;
 float FUNC_5 (int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float VAR_7 ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (int*) ;
 size_t VAR_8 ;
 float FUNC_9 (float) ;
 TYPE_9__ VAR_9 ;
 double FUNC_10 (float) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_13( centity_t *VAR_12, qhandle_t VAR_13, refEntity_t *VAR_14 ) {
 clientInfo_t *VAR_15;
 refEntity_t VAR_16;
 refEntity_t VAR_17;
 vec3_t VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;
 float VAR_23, VAR_24;


 FUNC_11( &VAR_16, 0, sizeof(VAR_16) );
 VAR_16.hModel = VAR_9.media.flagPoleModel;
 FUNC_7( VAR_14->lightingOrigin, VAR_16.lightingOrigin );
 VAR_16.shadowPlane = VAR_14->shadowPlane;
 VAR_16.renderfx = VAR_14->renderfx;
 FUNC_1( &VAR_16, VAR_14, VAR_14->hModel, "tag_flag" );
 FUNC_12( &VAR_16 );


 FUNC_11( &VAR_17, 0, sizeof(VAR_17) );
 VAR_17.hModel = VAR_9.media.flagFlapModel;
 VAR_17.customSkin = VAR_13;
 FUNC_7( VAR_14->lightingOrigin, VAR_17.lightingOrigin );
 VAR_17.shadowPlane = VAR_14->shadowPlane;
 VAR_17.renderfx = VAR_14->renderfx;

 FUNC_6(VAR_18);

 VAR_22 = VAR_10;
 VAR_20 = VAR_12->currentState.legsAnim & ~VAR_0;
 if( VAR_20 == VAR_3 || VAR_20 == VAR_4 ) {
  VAR_21 = VAR_2;
 } else if ( VAR_20 == VAR_5 || VAR_20 == VAR_6 ) {
  VAR_21 = VAR_2;
  VAR_22 = VAR_11;
 } else {
  VAR_21 = VAR_1;
  VAR_22 = VAR_11;
 }

 if ( VAR_22 ) {

  FUNC_7( VAR_12->currentState.pos.trDelta, VAR_19 );

  VAR_19[2] += 100;
  FUNC_8( VAR_19 );
  VAR_24 = FUNC_5(VAR_16.axis[2], VAR_19);

  if (FUNC_10(VAR_24) < 0.9) {

   VAR_24 = FUNC_5(VAR_16.axis[0], VAR_19);
   if (VAR_24 > 1.0f) {
    VAR_24 = 1.0f;
   }
   else if (VAR_24 < -1.0f) {
    VAR_24 = -1.0f;
   }
   VAR_23 = FUNC_9(VAR_24);

   VAR_24 = FUNC_5(VAR_16.axis[1], VAR_19);
   if (VAR_24 < 0) {
    VAR_18[VAR_8] = 360 - VAR_23 * 180 / VAR_7;
   }
   else {
    VAR_18[VAR_8] = VAR_23 * 180 / VAR_7;
   }
   if (VAR_18[VAR_8] < 0)
    VAR_18[VAR_8] += 360;
   if (VAR_18[VAR_8] > 360)
    VAR_18[VAR_8] -= 360;




   FUNC_4( VAR_18[VAR_8], 25, 90, 0.15f, &VAR_12->pe.flag.yawAngle, &VAR_12->pe.flag.yawing );
  }
 }


 VAR_18[VAR_8] = VAR_12->pe.flag.yawAngle;

 VAR_15 = &VAR_9.clientinfo[ VAR_12->currentState.clientNum ];
 FUNC_3( VAR_15, &VAR_12->pe.flag, VAR_21, 1 );
 VAR_17.oldframe = VAR_12->pe.flag.oldFrame;
 VAR_17.frame = VAR_12->pe.flag.frame;
 VAR_17.backlerp = VAR_12->pe.flag.backlerp;

 FUNC_0( VAR_18, VAR_17.axis );
 FUNC_2( &VAR_17, &VAR_16, VAR_16.hModel, "tag_flag" );

 FUNC_12( &VAR_17 );
}
