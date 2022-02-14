
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ externalEvent; size_t clientNum; int eventSequence; int* events; int * eventParms; int externalEventParm; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_9__ {scalar_t__ event; int eventParm; } ;
struct TYPE_11__ {int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_12__ {int* predictableEvents; int eventSequence; TYPE_3__ predictedPlayerEntity; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_3__* VAR_3 ;

void FUNC_1( playerState_t *VAR_4, playerState_t *VAR_5 ) {
 int VAR_6;
 int VAR_7;
 centity_t *VAR_8;

 if ( VAR_4->externalEvent && VAR_4->externalEvent != VAR_5->externalEvent ) {
  VAR_8 = &VAR_3[ VAR_4->clientNum ];
  VAR_8->currentState.event = VAR_4->externalEvent;
  VAR_8->currentState.eventParm = VAR_4->externalEventParm;
  FUNC_0( VAR_8, VAR_8->lerpOrigin );
 }

 VAR_8 = &VAR_2.predictedPlayerEntity;

 for ( VAR_6 = VAR_4->eventSequence - VAR_1 ; VAR_6 < VAR_4->eventSequence ; VAR_6++ ) {

  if ( VAR_6 >= VAR_5->eventSequence


   || (VAR_6 > VAR_5->eventSequence - VAR_1 && VAR_4->events[VAR_6 & (VAR_1-1)] != VAR_5->events[VAR_6 & (VAR_1-1)]) ) {

   VAR_7 = VAR_4->events[ VAR_6 & (VAR_1-1) ];
   VAR_8->currentState.event = VAR_7;
   VAR_8->currentState.eventParm = VAR_4->eventParms[ VAR_6 & (VAR_1-1) ];
   FUNC_0( VAR_8, VAR_8->lerpOrigin );

   VAR_2.predictableEvents[ VAR_6 & (VAR_0-1) ] = VAR_7;

   VAR_2.eventSequence++;
  }
 }
}
