
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int numEntities; TYPE_1__* entities; } ;
typedef TYPE_3__ snapshot_t ;
struct TYPE_13__ {scalar_t__ eType; } ;
typedef TYPE_4__ entityState_t ;
struct TYPE_11__ {scalar_t__ solid; } ;
struct TYPE_14__ {TYPE_2__ nextState; TYPE_4__ currentState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_15__ {TYPE_3__* snap; TYPE_3__* nextSnap; int thisFrameTeleport; int nextFrameTeleport; } ;
struct TYPE_10__ {size_t number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_9__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_5__** VAR_7 ;
 TYPE_5__** VAR_8 ;

void FUNC_0( void ) {
 int VAR_9;
 centity_t *VAR_10;
 snapshot_t *VAR_11;
 entityState_t *VAR_12;

 VAR_5 = 0;
 VAR_6 = 0;

 if ( VAR_3.nextSnap && !VAR_3.nextFrameTeleport && !VAR_3.thisFrameTeleport ) {
  VAR_11 = VAR_3.nextSnap;
 } else {
  VAR_11 = VAR_3.snap;
 }

 for ( VAR_9 = 0 ; VAR_9 < VAR_11->numEntities ; VAR_9++ ) {
  VAR_10 = &VAR_4[ VAR_11->entities[ VAR_9 ].number ];
  VAR_12 = &VAR_10->currentState;

  if ( VAR_12->eType == VAR_0 || VAR_12->eType == VAR_1 || VAR_12->eType == VAR_2 ) {
   VAR_8[VAR_6] = VAR_10;
   VAR_6++;
   continue;
  }

  if ( VAR_10->nextState.solid ) {
   VAR_7[VAR_5] = VAR_10;
   VAR_5++;
   continue;
  }
 }
}
