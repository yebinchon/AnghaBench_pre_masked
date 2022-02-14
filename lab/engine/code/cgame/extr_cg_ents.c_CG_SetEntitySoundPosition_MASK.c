
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {scalar_t__ solid; size_t modelindex; int number; } ;
struct TYPE_6__ {int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;
struct TYPE_7__ {float** inlineModelMidpoints; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,float*,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( centity_t *VAR_2 ) {
 if ( VAR_2->currentState.solid == VAR_0 ) {
  vec3_t VAR_3;
  float *VAR_4;

  VAR_4 = VAR_1.inlineModelMidpoints[ VAR_2->currentState.modelindex ];
  FUNC_0( VAR_2->lerpOrigin, VAR_4, VAR_3 );
  FUNC_1( VAR_2->currentState.number, VAR_3 );
 } else {
  FUNC_1( VAR_2->currentState.number, VAR_2->lerpOrigin );
 }
}
