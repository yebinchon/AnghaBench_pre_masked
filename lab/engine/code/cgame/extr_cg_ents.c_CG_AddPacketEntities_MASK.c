
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int playerState_t ;
struct TYPE_14__ {int currentState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_15__ {float frameInterpolation; int time; int* autoAngles; int* autoAnglesFast; TYPE_4__* snap; TYPE_5__ predictedPlayerEntity; int predictedPlayerState; int autoAxisFast; int autoAxis; TYPE_1__* nextSnap; } ;
struct TYPE_11__ {size_t clientNum; } ;
struct TYPE_13__ {int serverTime; int numEntities; TYPE_3__* entities; TYPE_2__ ps; } ;
struct TYPE_12__ {size_t number; } ;
struct TYPE_10__ {int serverTime; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_7__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;

void FUNC_4( void ) {
 int VAR_3;
 centity_t *VAR_4;
 playerState_t *VAR_5;


 if ( VAR_0.nextSnap ) {
  int VAR_6;

  VAR_6 = (VAR_0.nextSnap->serverTime - VAR_0.snap->serverTime);
  if ( VAR_6 == 0 ) {
   VAR_0.frameInterpolation = 0;
  } else {
   VAR_0.frameInterpolation = (float)( VAR_0.time - VAR_0.snap->serverTime ) / VAR_6;
  }
 } else {
  VAR_0.frameInterpolation = 0;

 }


 VAR_0.autoAngles[0] = 0;
 VAR_0.autoAngles[1] = ( VAR_0.time & 2047 ) * 360 / 2048.0;
 VAR_0.autoAngles[2] = 0;

 VAR_0.autoAnglesFast[0] = 0;
 VAR_0.autoAnglesFast[1] = ( VAR_0.time & 1023 ) * 360 / 1024.0f;
 VAR_0.autoAnglesFast[2] = 0;

 FUNC_0( VAR_0.autoAngles, VAR_0.autoAxis );
 FUNC_0( VAR_0.autoAnglesFast, VAR_0.autoAxisFast );


 VAR_5 = &VAR_0.predictedPlayerState;
 FUNC_1( VAR_5, &VAR_0.predictedPlayerEntity.currentState, VAR_2 );
 FUNC_2( &VAR_0.predictedPlayerEntity );


 FUNC_3( &VAR_1[ VAR_0.snap->ps.clientNum ] );


 for ( VAR_3 = 0 ; VAR_3 < VAR_0.snap->numEntities ; VAR_3++ ) {
  VAR_4 = &VAR_1[ VAR_0.snap->entities[ VAR_3 ].number ];
  FUNC_2( VAR_4 );
 }
}
