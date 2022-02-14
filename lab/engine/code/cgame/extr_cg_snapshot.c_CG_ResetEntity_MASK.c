
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ eType; int angles; int origin; } ;
struct TYPE_9__ {scalar_t__ snapShotTime; TYPE_2__ currentState; int lerpAngles; int lerpOrigin; int trailTime; scalar_t__ previousEvent; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_10__ {scalar_t__ time; TYPE_1__* snap; } ;
struct TYPE_7__ {int serverTime; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_2( centity_t *VAR_3 ) {


 if ( VAR_3->snapShotTime < VAR_2.time - VAR_1 ) {
  VAR_3->previousEvent = 0;
 }

 VAR_3->trailTime = VAR_2.snap->serverTime;

 FUNC_1 (VAR_3->currentState.origin, VAR_3->lerpOrigin);
 FUNC_1 (VAR_3->currentState.angles, VAR_3->lerpAngles);
 if ( VAR_3->currentState.eType == VAR_0 ) {
  FUNC_0( VAR_3 );
 }
}
