
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int eFlags; size_t clientNum; } ;
struct TYPE_17__ {TYPE_2__ currentState; } ;
typedef TYPE_6__ centity_t ;
struct TYPE_20__ {TYPE_4__* snap; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_16__ {int friendShader; int medalCapture; int medalAssist; int medalDefend; int medalGauntlet; int medalExcellent; int medalImpressive; int balloonShader; int connectionShader; } ;
struct TYPE_18__ {scalar_t__ gametype; TYPE_5__ media; TYPE_1__* clientinfo; } ;
struct TYPE_14__ {int* persistant; } ;
struct TYPE_15__ {TYPE_3__ ps; } ;
struct TYPE_12__ {int team; } ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 TYPE_9__ VAR_11 ;
 TYPE_8__ VAR_12 ;
 TYPE_7__ VAR_13 ;

__attribute__((used)) static void FUNC_1( centity_t *VAR_14 ) {
 int VAR_15;

 if ( VAR_14->currentState.eFlags & VAR_6 ) {
  FUNC_0( VAR_14, VAR_13.media.connectionShader );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_8 ) {
  FUNC_0( VAR_14, VAR_13.media.balloonShader );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_5 ) {
  FUNC_0( VAR_14, VAR_13.media.medalImpressive );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_3 ) {
  FUNC_0( VAR_14, VAR_13.media.medalExcellent );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_4 ) {
  FUNC_0( VAR_14, VAR_13.media.medalGauntlet );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_2 ) {
  FUNC_0( VAR_14, VAR_13.media.medalDefend );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_0 ) {
  FUNC_0( VAR_14, VAR_13.media.medalAssist );
  return;
 }

 if ( VAR_14->currentState.eFlags & VAR_1 ) {
  FUNC_0( VAR_14, VAR_13.media.medalCapture );
  return;
 }

 VAR_15 = VAR_13.clientinfo[ VAR_14->currentState.clientNum ].team;
 if ( !(VAR_14->currentState.eFlags & VAR_7) &&
  VAR_11.snap->ps.persistant[VAR_10] == VAR_15 &&
  VAR_13.gametype >= VAR_9) {
  if (VAR_12.integer) {
   FUNC_0( VAR_14, VAR_13.media.friendShader );
  }
  return;
 }
}
