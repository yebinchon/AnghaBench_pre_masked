
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {float x; double w; int h; int y; } ;
typedef TYPE_3__ rectDef_t ;
typedef int qboolean ;
struct TYPE_9__ {float damageTime; float time; float damageX; int headStartYaw; int headEndYaw; int headEndPitch; scalar_t__ headStartTime; scalar_t__ headEndTime; int headStartPitch; TYPE_2__* snap; } ;
struct TYPE_6__ {int clientNum; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int FUNC_0 (float,int ,double,int ,int ,float*) ;
 float VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (float*) ;
 size_t VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(rectDef_t *VAR_5, qboolean VAR_6) {
 vec3_t VAR_7;
 float VAR_8, VAR_9;
 float VAR_10;
 float VAR_11 = VAR_5->x;

 FUNC_1( VAR_7 );

 if ( VAR_4.damageTime && VAR_4.time - VAR_4.damageTime < VAR_0 ) {
  VAR_10 = (float)(VAR_4.time - VAR_4.damageTime ) / VAR_0;
  VAR_8 = VAR_5->w * 1.25 * ( 1.5 - VAR_10 * 0.5 );

  VAR_9 = VAR_8 - VAR_5->w * 1.25;

  VAR_11 -= VAR_9 * 0.5 + VAR_4.damageX * VAR_9 * 0.5;

  VAR_4.headStartYaw = 180 + VAR_4.damageX * 45;

  VAR_4.headEndYaw = 180 + 20 * FUNC_2( FUNC_3()*VAR_1 );
  VAR_4.headEndPitch = 5 * FUNC_2( FUNC_3()*VAR_1 );

  VAR_4.headStartTime = VAR_4.time;
  VAR_4.headEndTime = VAR_4.time + 100 + FUNC_4() * 2000;
 } else {
  if ( VAR_4.time >= VAR_4.headEndTime ) {

   VAR_4.headStartYaw = VAR_4.headEndYaw;
   VAR_4.headStartPitch = VAR_4.headEndPitch;
   VAR_4.headStartTime = VAR_4.headEndTime;
   VAR_4.headEndTime = VAR_4.time + 100 + FUNC_4() * 2000;

   VAR_4.headEndYaw = 180 + 20 * FUNC_2( FUNC_3()*VAR_1 );
   VAR_4.headEndPitch = 5 * FUNC_2( FUNC_3()*VAR_1 );
  }
 }


 if ( VAR_4.headStartTime > VAR_4.time ) {
  VAR_4.headStartTime = VAR_4.time;
 }

 VAR_10 = ( VAR_4.time - VAR_4.headStartTime ) / (float)( VAR_4.headEndTime - VAR_4.headStartTime );
 VAR_10 = VAR_10 * VAR_10 * ( 3 - 2 * VAR_10 );
 VAR_7[VAR_3] = VAR_4.headStartYaw + ( VAR_4.headEndYaw - VAR_4.headStartYaw ) * VAR_10;
 VAR_7[VAR_2] = VAR_4.headStartPitch + ( VAR_4.headEndPitch - VAR_4.headStartPitch ) * VAR_10;

 FUNC_0( VAR_11, VAR_5->y, VAR_5->w, VAR_5->h, VAR_4.snap->ps.clientNum, VAR_7 );
}
