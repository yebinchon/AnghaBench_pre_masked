
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ giType; int giTag; } ;
typedef TYPE_1__ gitem_t ;
struct TYPE_19__ {size_t modelindex; int eFlags; } ;
struct TYPE_14__ {scalar_t__ miscTime; TYPE_9__ currentState; } ;
typedef TYPE_2__ centity_t ;
struct TYPE_18__ {scalar_t__* persistant; int* stats; int* ammo; } ;
struct TYPE_17__ {scalar_t__ time; TYPE_8__ predictedPlayerState; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {scalar_t__ gametype; } ;


 int FUNC_0 (int ,size_t,TYPE_8__*) ;
 int FUNC_1 (scalar_t__,TYPE_9__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_9__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 TYPE_5__ VAR_14 ;
 TYPE_4__ VAR_15 ;
 TYPE_3__ VAR_16 ;

__attribute__((used)) static void FUNC_3( centity_t *VAR_17 ) {
 gitem_t *VAR_18;

 if ( !VAR_15.integer ) {
  return;
 }
 if ( !FUNC_2( &VAR_14.predictedPlayerState, &VAR_17->currentState, VAR_14.time ) ) {
  return;
 }


 if ( VAR_17->miscTime == VAR_14.time ) {
  return;
 }

 if ( !FUNC_1( VAR_16.gametype, &VAR_17->currentState, &VAR_14.predictedPlayerState ) ) {
  return;
 }

 VAR_18 = &VAR_13[ VAR_17->currentState.modelindex ];
 if( VAR_16.gametype == VAR_3 ) {
  if (VAR_14.predictedPlayerState.persistant[VAR_6] == VAR_12 &&
   VAR_18->giType == VAR_4 && VAR_18->giTag == VAR_9)
   return;
  if (VAR_14.predictedPlayerState.persistant[VAR_6] == VAR_11 &&
   VAR_18->giType == VAR_4 && VAR_18->giTag == VAR_7)
   return;
 }


 FUNC_0( VAR_1, VAR_17->currentState.modelindex , &VAR_14.predictedPlayerState);


 VAR_17->currentState.eFlags |= VAR_0;


 VAR_17->miscTime = VAR_14.time;


 if ( VAR_18->giType == VAR_5 ) {
  VAR_14.predictedPlayerState.stats[ VAR_10 ] |= 1 << VAR_18->giTag;
  if ( !VAR_14.predictedPlayerState.ammo[ VAR_18->giTag ] ) {
   VAR_14.predictedPlayerState.ammo[ VAR_18->giTag ] = 1;
  }
 }
}
