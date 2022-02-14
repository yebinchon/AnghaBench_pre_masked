
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {size_t clientNum; int eFlags; int pm_flags; } ;
struct TYPE_14__ {int numEntities; TYPE_3__ ps; int serverTime; TYPE_1__* entities; int serverCommandSequence; } ;
typedef TYPE_2__ snapshot_t ;
typedef TYPE_3__ playerState_t ;
struct TYPE_16__ {int snapShotTime; void* interpolate; int currentState; void* currentValid; } ;
typedef TYPE_4__ centity_t ;
struct TYPE_19__ {TYPE_2__* snap; scalar_t__ demoPlayback; int thisFrameTeleport; TYPE_2__* nextSnap; scalar_t__ mapRestart; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_13__ {size_t number; } ;


 int FUNC_0 (TYPE_3__*,int *,void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5( void ) {
 centity_t *VAR_8;
 snapshot_t *VAR_9;
 int VAR_10;

 if ( !VAR_2.snap ) {
  FUNC_1( "CG_TransitionSnapshot: NULL cg.snap" );
 }
 if ( !VAR_2.nextSnap ) {
  FUNC_1( "CG_TransitionSnapshot: NULL cg.nextSnap" );
 }


 FUNC_2( VAR_2.nextSnap->serverCommandSequence );


 if ( VAR_2.mapRestart ) {
 }


 for ( VAR_10 = 0 ; VAR_10 < VAR_2.snap->numEntities ; VAR_10++ ) {
  VAR_8 = &VAR_3[ VAR_2.snap->entities[ VAR_10 ].number ];
  VAR_8->currentValid = VAR_6;
 }


 VAR_9 = VAR_2.snap;
 VAR_2.snap = VAR_2.nextSnap;

 FUNC_0( &VAR_2.snap->ps, &VAR_3[ VAR_2.snap->ps.clientNum ].currentState, VAR_6 );
 VAR_3[ VAR_2.snap->ps.clientNum ].interpolate = VAR_6;

 for ( VAR_10 = 0 ; VAR_10 < VAR_2.snap->numEntities ; VAR_10++ ) {
  VAR_8 = &VAR_3[ VAR_2.snap->entities[ VAR_10 ].number ];
  FUNC_3( VAR_8 );


  VAR_8->snapShotTime = VAR_2.snap->serverTime;
 }

 VAR_2.nextSnap = ((void*)0);


 if ( VAR_9 ) {
  playerState_t *VAR_11, *VAR_12;

  VAR_11 = &VAR_9->ps;
  VAR_12 = &VAR_2.snap->ps;

  if ( ( VAR_12->eFlags ^ VAR_11->eFlags ) & VAR_0 ) {
   VAR_2.thisFrameTeleport = VAR_7;
  }



  if ( VAR_2.demoPlayback || (VAR_2.snap->ps.pm_flags & VAR_1)
   || VAR_4.integer || VAR_5.integer ) {
   FUNC_4( VAR_12, VAR_11 );
  }
 }

}
