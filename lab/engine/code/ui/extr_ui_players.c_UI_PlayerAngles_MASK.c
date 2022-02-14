
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_7__ {float yawAngle; float pitchAngle; void* pitching; void* yawing; } ;
struct TYPE_6__ {float yawAngle; void* yawing; } ;
struct TYPE_8__ {int legsAnim; int torsoAnim; scalar_t__ fixedlegs; scalar_t__ fixedtorso; TYPE_2__ torso; TYPE_1__ legs; int viewAngles; } ;
typedef TYPE_3__ playerInfo_t ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float**) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 float FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (float,int,int,float,float*,void**) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (int ,float*) ;
 size_t VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_7( playerInfo_t *VAR_8, vec3_t VAR_9[3], vec3_t VAR_10[3], vec3_t VAR_11[3] ) {
 vec3_t VAR_12, VAR_13, VAR_14;
 float VAR_15;
 float VAR_16;

 FUNC_6( VAR_8->viewAngles, VAR_14 );
 VAR_14[VAR_6] = FUNC_0( VAR_14[VAR_6] );
 FUNC_5( VAR_12 );
 FUNC_5( VAR_13 );




 if ( ( VAR_8->legsAnim & ~VAR_0 ) != VAR_1
  || ( VAR_8->torsoAnim & ~VAR_0 ) != VAR_5 ) {

  VAR_8->torso.yawing = VAR_7;
  VAR_8->torso.pitching = VAR_7;
  VAR_8->legs.yawing = VAR_7;
 }


 VAR_16 = FUNC_3( VAR_8 );
 VAR_12[VAR_6] = VAR_14[VAR_6] + VAR_16;
 VAR_13[VAR_6] = VAR_14[VAR_6] + 0.25 * VAR_16;



 FUNC_4( VAR_13[VAR_6], 25, 90, VAR_4, &VAR_8->torso.yawAngle, &VAR_8->torso.yawing );
 FUNC_4( VAR_12[VAR_6], 40, 90, VAR_4, &VAR_8->legs.yawAngle, &VAR_8->legs.yawing );

 VAR_13[VAR_6] = VAR_8->torso.yawAngle;
 VAR_12[VAR_6] = VAR_8->legs.yawAngle;




 if ( VAR_14[VAR_2] > 180 ) {
  VAR_15 = (-360 + VAR_14[VAR_2]) * 0.75;
 } else {
  VAR_15 = VAR_14[VAR_2] * 0.75;
 }
 FUNC_4( VAR_15, 15, 30, 0.1f, &VAR_8->torso.pitchAngle, &VAR_8->torso.pitching );
 VAR_13[VAR_2] = VAR_8->torso.pitchAngle;

 if ( VAR_8->fixedtorso ) {
  VAR_13[VAR_2] = 0.0f;
 }

 if ( VAR_8->fixedlegs ) {
  VAR_12[VAR_6] = VAR_13[VAR_6];
  VAR_12[VAR_2] = 0.0f;
  VAR_12[VAR_3] = 0.0f;
 }


 FUNC_1( VAR_14, VAR_13, VAR_14 );
 FUNC_1( VAR_13, VAR_12, VAR_13 );
 FUNC_2( VAR_12, VAR_9 );
 FUNC_2( VAR_13, VAR_10 );
 FUNC_2( VAR_14, VAR_11 );
}
