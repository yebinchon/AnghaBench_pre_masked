
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {int trType; int trTime; int trDuration; int trDelta; } ;
typedef TYPE_1__ trajectory_t ;


 int FUNC_0 (int ,char*,int) ;
 float VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;






 int FUNC_1 (float*) ;
 int FUNC_2 (int ,float*) ;
 int FUNC_3 (int ,float,float*) ;
 float FUNC_4 (float) ;

void FUNC_5( const trajectory_t *VAR_3, int VAR_4, vec3_t VAR_5 ) {
 float VAR_6;
 float VAR_7;

 switch( VAR_3->trType ) {
 case 128:
 case 132:
  FUNC_1( VAR_5 );
  break;
 case 131:
  FUNC_2( VAR_3->trDelta, VAR_5 );
  break;
 case 129:
  VAR_6 = ( VAR_4 - VAR_3->trTime ) / (float) VAR_3->trDuration;
  VAR_7 = FUNC_4( VAR_6 * VAR_2 * 2 );
  VAR_7 *= 0.5;
  FUNC_3( VAR_3->trDelta, VAR_7, VAR_5 );
  break;
 case 130:
  if ( VAR_4 > VAR_3->trTime + VAR_3->trDuration ) {
   FUNC_1( VAR_5 );
   return;
  }
  FUNC_2( VAR_3->trDelta, VAR_5 );
  break;
 case 133:
  VAR_6 = ( VAR_4 - VAR_3->trTime ) * 0.001;
  FUNC_2( VAR_3->trDelta, VAR_5 );
  VAR_5[2] -= VAR_0 * VAR_6;
  break;
 default:
  FUNC_0( VAR_1, "BG_EvaluateTrajectoryDelta: unknown trType: %i", VAR_3->trType );
  break;
 }
}
