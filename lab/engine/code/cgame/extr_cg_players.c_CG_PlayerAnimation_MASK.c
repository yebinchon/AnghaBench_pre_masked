
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int clientInfo_t ;
struct TYPE_13__ {int oldFrame; int frame; float backlerp; scalar_t__ yawing; } ;
struct TYPE_9__ {TYPE_6__ torso; TYPE_6__ legs; } ;
struct TYPE_8__ {int clientNum; int powerups; int legsAnim; int torsoAnim; } ;
struct TYPE_10__ {TYPE_2__ pe; TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int * clientinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_6__*,int,float) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_1( centity_t *VAR_6, int *VAR_7, int *VAR_8, float *VAR_9,
      int *VAR_10, int *VAR_11, float *VAR_12 ) {
 clientInfo_t *VAR_13;
 int VAR_14;
 float VAR_15;

 VAR_14 = VAR_6->currentState.clientNum;

 if ( VAR_4.integer ) {
  *VAR_7 = *VAR_8 = *VAR_10 = *VAR_11 = 0;
  return;
 }

 if ( VAR_6->currentState.powerups & ( 1 << VAR_3 ) ) {
  VAR_15 = 1.5;
 } else {
  VAR_15 = 1;
 }

 VAR_13 = &VAR_5.clientinfo[ VAR_14 ];


 if ( VAR_6->pe.legs.yawing && ( VAR_6->currentState.legsAnim & ~VAR_0 ) == VAR_1 ) {
  FUNC_0( VAR_13, &VAR_6->pe.legs, VAR_2, VAR_15 );
 } else {
  FUNC_0( VAR_13, &VAR_6->pe.legs, VAR_6->currentState.legsAnim, VAR_15 );
 }

 *VAR_7 = VAR_6->pe.legs.oldFrame;
 *VAR_8 = VAR_6->pe.legs.frame;
 *VAR_9 = VAR_6->pe.legs.backlerp;

 FUNC_0( VAR_13, &VAR_6->pe.torso, VAR_6->currentState.torsoAnim, VAR_15 );

 *VAR_10 = VAR_6->pe.torso.oldFrame;
 *VAR_11 = VAR_6->pe.torso.frame;
 *VAR_12 = VAR_6->pe.torso.backlerp;
}
