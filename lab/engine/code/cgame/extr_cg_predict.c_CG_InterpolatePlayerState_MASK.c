
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usercmd_t ;
struct TYPE_6__ {int bobCycle; float* origin; float* velocity; int * viewangles; } ;
struct TYPE_5__ {scalar_t__ serverTime; TYPE_2__ ps; } ;
typedef TYPE_1__ snapshot_t ;
typedef scalar_t__ qboolean ;
typedef TYPE_2__ playerState_t ;
struct TYPE_7__ {scalar_t__ time; scalar_t__ nextFrameTeleport; TYPE_1__* snap; TYPE_1__* nextSnap; TYPE_2__ predictedPlayerState; } ;


 int FUNC_0 (int ,int ,float) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4( qboolean VAR_1 ) {
 float VAR_2;
 int VAR_3;
 playerState_t *VAR_4;
 snapshot_t *VAR_5, *VAR_6;

 VAR_4 = &VAR_0.predictedPlayerState;
 VAR_5 = VAR_0.snap;
 VAR_6 = VAR_0.nextSnap;

 *VAR_4 = VAR_0.snap->ps;


 if ( VAR_1 ) {
  usercmd_t VAR_7;
  int VAR_8;

  VAR_8 = FUNC_2();
  FUNC_3( VAR_8, &VAR_7 );

  FUNC_1( VAR_4, &VAR_7 );
 }


 if ( VAR_0.nextFrameTeleport ) {
  return;
 }

 if ( !VAR_6 || VAR_6->serverTime <= VAR_5->serverTime ) {
  return;
 }

 VAR_2 = (float)( VAR_0.time - VAR_5->serverTime ) / ( VAR_6->serverTime - VAR_5->serverTime );

 VAR_3 = VAR_6->ps.bobCycle;
 if ( VAR_3 < VAR_5->ps.bobCycle ) {
  VAR_3 += 256;
 }
 VAR_4->bobCycle = VAR_5->ps.bobCycle + VAR_2 * ( VAR_3 - VAR_5->ps.bobCycle );

 for ( VAR_3 = 0 ; VAR_3 < 3 ; VAR_3++ ) {
  VAR_4->origin[VAR_3] = VAR_5->ps.origin[VAR_3] + VAR_2 * (VAR_6->ps.origin[VAR_3] - VAR_5->ps.origin[VAR_3] );
  if ( !VAR_1 ) {
   VAR_4->viewangles[VAR_3] = FUNC_0(
    VAR_5->ps.viewangles[VAR_3], VAR_6->ps.viewangles[VAR_3], VAR_2 );
  }
  VAR_4->velocity[VAR_3] = VAR_5->ps.velocity[VAR_3] +
   VAR_2 * (VAR_6->ps.velocity[VAR_3] - VAR_5->ps.velocity[VAR_3] );
 }

}
