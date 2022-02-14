
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int refEntity_t ;
struct TYPE_12__ {scalar_t__ newAnims; } ;
typedef TYPE_3__ clientInfo_t ;
struct TYPE_10__ {int powerups; size_t clientNum; int number; } ;
struct TYPE_13__ {int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_4__ centity_t ;
struct TYPE_11__ {int neutralFlagModel; int neutralFlagFlapSkin; int blueFlagModel; int blueFlagFlapSkin; int redFlagModel; int redFlagFlapSkin; int flightSound; } ;
struct TYPE_14__ {TYPE_2__ media; TYPE_3__* clientinfo; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,double,double,double) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6( centity_t *VAR_8, refEntity_t *VAR_9 ) {
 int VAR_10;
 clientInfo_t *VAR_11;

 VAR_10 = VAR_8->currentState.powerups;
 if ( !VAR_10 ) {
  return;
 }


 if ( VAR_10 & ( 1 << VAR_4 ) ) {
  FUNC_4( VAR_8->lerpOrigin, 200 + (FUNC_3()&31), 0.2f, 0.2f, 1 );
 }


 if ( VAR_10 & ( 1 << VAR_1 ) ) {
  FUNC_5( VAR_8->currentState.number, VAR_8->lerpOrigin, VAR_7, VAR_6.media.flightSound );
 }

 VAR_11 = &VAR_6.clientinfo[ VAR_8->currentState.clientNum ];

 if ( VAR_10 & ( 1 << VAR_5 ) ) {
  if (VAR_11->newAnims) {
   FUNC_1( VAR_8, VAR_6.media.redFlagFlapSkin, VAR_9 );
  }
  else {
   FUNC_2( VAR_8, VAR_6.media.redFlagModel );
  }
  FUNC_4( VAR_8->lerpOrigin, 200 + (FUNC_3()&31), 1.0, 0.2f, 0.2f );
 }


 if ( VAR_10 & ( 1 << VAR_0 ) ) {
  if (VAR_11->newAnims){
   FUNC_1( VAR_8, VAR_6.media.blueFlagFlapSkin, VAR_9 );
  }
  else {
   FUNC_2( VAR_8, VAR_6.media.blueFlagModel );
  }
  FUNC_4( VAR_8->lerpOrigin, 200 + (FUNC_3()&31), 0.2f, 0.2f, 1.0 );
 }


 if ( VAR_10 & ( 1 << VAR_3 ) ) {
  if (VAR_11->newAnims) {
   FUNC_1( VAR_8, VAR_6.media.neutralFlagFlapSkin, VAR_9 );
  }
  else {
   FUNC_2( VAR_8, VAR_6.media.neutralFlagModel );
  }
  FUNC_4( VAR_8->lerpOrigin, 200 + (FUNC_3()&31), 1.0, 1.0, 1.0 );
 }


 if ( VAR_10 & ( 1 << VAR_2 ) ) {
  FUNC_0( VAR_8 );
 }
}
