
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int oldFrame; int frame; float backlerp; scalar_t__ yawing; } ;
struct TYPE_10__ {scalar_t__ legsAnimationTimer; int legsAnim; scalar_t__ torsoAnimationTimer; int torsoAnim; TYPE_6__ torso; TYPE_6__ legs; } ;
typedef TYPE_2__ playerInfo_t ;
struct TYPE_9__ {scalar_t__ frameTime; } ;
struct TYPE_11__ {TYPE_1__ uiDC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void FUNC_3( playerInfo_t *VAR_4, int *VAR_5, int *VAR_6, float *VAR_7,
      int *VAR_8, int *VAR_9, float *VAR_10 ) {


 VAR_4->legsAnimationTimer -= VAR_3.uiDC.frameTime;
 if ( VAR_4->legsAnimationTimer < 0 ) {
  VAR_4->legsAnimationTimer = 0;
 }

 FUNC_0( VAR_4 );

 if ( VAR_4->legs.yawing && ( VAR_4->legsAnim & ~VAR_0 ) == VAR_1 ) {
  FUNC_1( VAR_4, &VAR_4->legs, VAR_2 );
 } else {
  FUNC_1( VAR_4, &VAR_4->legs, VAR_4->legsAnim );
 }
 *VAR_5 = VAR_4->legs.oldFrame;
 *VAR_6 = VAR_4->legs.frame;
 *VAR_7 = VAR_4->legs.backlerp;


 VAR_4->torsoAnimationTimer -= VAR_3.uiDC.frameTime;
 if ( VAR_4->torsoAnimationTimer < 0 ) {
  VAR_4->torsoAnimationTimer = 0;
 }

 FUNC_2( VAR_4 );

 FUNC_1( VAR_4, &VAR_4->torso, VAR_4->torsoAnim );
 *VAR_8 = VAR_4->torso.oldFrame;
 *VAR_9 = VAR_4->torso.frame;
 *VAR_10 = VAR_4->torso.backlerp;
}
