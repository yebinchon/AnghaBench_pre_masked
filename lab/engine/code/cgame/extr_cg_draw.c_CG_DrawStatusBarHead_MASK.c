
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {float damageTime; float time; float damageX; int headStartYaw; int headEndYaw; int headEndPitch; scalar_t__ headStartTime; scalar_t__ headEndTime; int headStartPitch; TYPE_2__* snap; } ;
struct TYPE_7__ {scalar_t__ value; } ;
struct TYPE_5__ {int clientNum; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;


 int FUNC_0 (float,int,float,float,int ,float*) ;
 float VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (float*) ;
 size_t VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5( float VAR_7 ) {
 vec3_t VAR_8;
 float VAR_9, VAR_10;
 float VAR_11;

 FUNC_1( VAR_8 );

 if ( VAR_6.value != 0 ) {

  if ( VAR_5.damageTime && VAR_5.time - VAR_5.damageTime < VAR_0 ) {
   VAR_11 = (float)(VAR_5.time - VAR_5.damageTime ) / VAR_0;
   VAR_9 = VAR_1 * 1.25 * ( 1.5 - VAR_11 * 0.5 );

   VAR_10 = VAR_9 - VAR_1 * 1.25;

   VAR_7 -= VAR_10 * 0.5 + VAR_5.damageX * VAR_10 * 0.5;

   VAR_5.headStartYaw = 180 + VAR_5.damageX * 45;

   VAR_5.headEndYaw = 180 + 20 * FUNC_2( FUNC_3()*VAR_2 );
   VAR_5.headEndPitch = 5 * FUNC_2( FUNC_3()*VAR_2 );

   VAR_5.headStartTime = VAR_5.time;
   VAR_5.headEndTime = VAR_5.time + 100 + FUNC_4() * 2000;
  } else {
   if ( VAR_5.time >= VAR_5.headEndTime ) {

    VAR_5.headStartYaw = VAR_5.headEndYaw;
    VAR_5.headStartPitch = VAR_5.headEndPitch;
    VAR_5.headStartTime = VAR_5.headEndTime;
    VAR_5.headEndTime = VAR_5.time + 100 + FUNC_4() * 2000;

    VAR_5.headEndYaw = 180 + 20 * FUNC_2( FUNC_3()*VAR_2 );
    VAR_5.headEndPitch = 5 * FUNC_2( FUNC_3()*VAR_2 );
   }

   VAR_9 = VAR_1 * 1.25;
  }


  if ( VAR_5.headStartTime > VAR_5.time ) {
   VAR_5.headStartTime = VAR_5.time;
  }

  VAR_11 = ( VAR_5.time - VAR_5.headStartTime ) / (float)( VAR_5.headEndTime - VAR_5.headStartTime );
  VAR_11 = VAR_11 * VAR_11 * ( 3 - 2 * VAR_11 );
  VAR_8[VAR_4] = VAR_5.headStartYaw + ( VAR_5.headEndYaw - VAR_5.headStartYaw ) * VAR_11;
  VAR_8[VAR_3] = VAR_5.headStartPitch + ( VAR_5.headEndPitch - VAR_5.headStartPitch ) * VAR_11;
 } else {
  VAR_8[VAR_4] = 180;
  VAR_8[VAR_3] = 5;
  VAR_9 = VAR_1 * 1.25;
 }

 FUNC_0( VAR_7, 480 - VAR_9, VAR_9, VAR_9,
    VAR_5.snap->ps.clientNum, VAR_8 );
}
