
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* barrelTime; int barrelSpinning; int barrelAngle; int torsoAnim; } ;
typedef TYPE_1__ playerInfo_t ;


 int VAR_0 ;
 int FUNC_0 (float) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

float FUNC_1( playerInfo_t *VAR_6 ) {
 int VAR_7;
 float VAR_8;
 float VAR_9;
 int VAR_10;

 VAR_7 = VAR_5 - VAR_6->barrelTime;
 if ( VAR_6->barrelSpinning ) {
  VAR_8 = VAR_6->barrelAngle + VAR_7 * VAR_2;
 } else {
  if ( VAR_7 > VAR_1 ) {
   VAR_7 = VAR_1;
  }

  VAR_9 = 0.5 * ( VAR_2 + (float)( VAR_1 - VAR_7 ) / VAR_1 );
  VAR_8 = VAR_6->barrelAngle + VAR_7 * VAR_9;
 }

 VAR_10 = VAR_6->torsoAnim & ~VAR_0;
 if( VAR_10 == VAR_4 ) {
  VAR_10 = VAR_3;
 }
 if ( VAR_6->barrelSpinning == !(VAR_10 == VAR_3) ) {
  VAR_6->barrelTime = VAR_5;
  VAR_6->barrelAngle = FUNC_0( VAR_8 );
  VAR_6->barrelSpinning = !!(VAR_10 == VAR_3);
 }

 return VAR_8;
}
