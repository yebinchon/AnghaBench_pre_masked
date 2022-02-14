
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int eventSequence; int* events; int * eventParms; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_8__ {int event; int eventParm; } ;
struct TYPE_10__ {int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_12__ {int eventSequence; int* predictableEvents; TYPE_3__ predictedPlayerEntity; } ;
struct TYPE_11__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_2( playerState_t *VAR_4 ) {
 int VAR_5;
 int VAR_6;
 centity_t *VAR_7;

 VAR_7 = &VAR_2.predictedPlayerEntity;
 for ( VAR_5 = VAR_4->eventSequence - VAR_1 ; VAR_5 < VAR_4->eventSequence ; VAR_5++ ) {

  if (VAR_5 >= VAR_2.eventSequence) {
   continue;
  }

  if (VAR_5 > VAR_2.eventSequence - VAR_0) {

   if ( VAR_4->events[VAR_5 & (VAR_1-1)] != VAR_2.predictableEvents[VAR_5 & (VAR_0-1) ] ) {

    VAR_6 = VAR_4->events[ VAR_5 & (VAR_1-1) ];
    VAR_7->currentState.event = VAR_6;
    VAR_7->currentState.eventParm = VAR_4->eventParms[ VAR_5 & (VAR_1-1) ];
    FUNC_0( VAR_7, VAR_7->lerpOrigin );

    VAR_2.predictableEvents[ VAR_5 & (VAR_0-1) ] = VAR_6;

    if ( VAR_3.integer ) {
     FUNC_1("WARNING: changed predicted event\n");
    }
   }
  }
 }
}
