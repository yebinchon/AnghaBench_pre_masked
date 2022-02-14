
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ eType; int eFlags; int event; int pos; int otherEntityNum; int number; } ;
struct TYPE_10__ {int previousEvent; int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_11__ {TYPE_2__* snap; } ;
struct TYPE_9__ {int serverTime; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_3( centity_t *VAR_4 ) {

 if ( VAR_4->currentState.eType > VAR_1 ) {
  if ( VAR_4->previousEvent ) {
   return;
  }

  if ( VAR_4->currentState.eFlags & VAR_0 ) {
   VAR_4->currentState.number = VAR_4->currentState.otherEntityNum;
  }

  VAR_4->previousEvent = 1;

  VAR_4->currentState.event = VAR_4->currentState.eType - VAR_1;
 } else {

  if ( VAR_4->currentState.event == VAR_4->previousEvent ) {
   return;
  }
  VAR_4->previousEvent = VAR_4->currentState.event;
  if ( ( VAR_4->currentState.event & ~VAR_2 ) == 0 ) {
   return;
  }
 }


 FUNC_0( &VAR_4->currentState.pos, VAR_3.snap->serverTime, VAR_4->lerpOrigin );
 FUNC_2( VAR_4 );

 FUNC_1( VAR_4, VAR_4->lerpOrigin );
}
