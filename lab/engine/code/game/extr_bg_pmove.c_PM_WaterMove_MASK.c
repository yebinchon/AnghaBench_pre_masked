
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_12__ {int upmove; float forwardmove; float rightmove; } ;
struct TYPE_11__ {int watertype; TYPE_3__* ps; TYPE_6__ cmd; } ;
struct TYPE_7__ {int normal; } ;
struct TYPE_8__ {TYPE_1__ plane; } ;
struct TYPE_10__ {float* forward; float* right; TYPE_2__ groundTrace; scalar_t__ groundPlane; } ;
struct TYPE_9__ {int* velocity; float speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int ) ;
 int VAR_2 ;
 int FUNC_1 (float*,float,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int*,int ,int*,int ) ;
 float FUNC_4 (TYPE_6__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (float*,float*) ;
 float FUNC_9 (int*) ;
 float FUNC_10 (float*) ;
 int FUNC_11 (float*,float,float*) ;
 TYPE_5__* VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_12( void ) {
 int VAR_8;
 vec3_t VAR_9;
 float VAR_10;
 vec3_t VAR_11;
 float VAR_12;
 float VAR_13;

 if ( FUNC_2() ) {
  FUNC_7();
  return;
 }
 FUNC_5 ();

 VAR_12 = FUNC_4( &VAR_3->cmd );



 if ( !VAR_12 ) {
  VAR_9[0] = 0;
  VAR_9[1] = 0;
  VAR_9[2] = -60;
 } else {
  for (VAR_8=0 ; VAR_8<3 ; VAR_8++)
   VAR_9[VAR_8] = VAR_12 * VAR_6.forward[VAR_8]*VAR_3->cmd.forwardmove + VAR_12 * VAR_6.right[VAR_8]*VAR_3->cmd.rightmove;

  VAR_9[2] += VAR_12 * VAR_3->cmd.upmove;
 }

 FUNC_8 (VAR_9, VAR_11);
 VAR_10 = FUNC_10(VAR_11);

 if ( VAR_10 > VAR_3->ps->speed * VAR_4 ) {
  VAR_10 = VAR_3->ps->speed * VAR_4;
 }

 FUNC_1 (VAR_11, VAR_10, VAR_5);


 if ( VAR_6.groundPlane && FUNC_0( VAR_3->ps->velocity, VAR_6.groundTrace.plane.normal ) < 0 ) {
  VAR_13 = FUNC_9(VAR_3->ps->velocity);

  FUNC_3 (VAR_3->ps->velocity, VAR_6.groundTrace.plane.normal,
   VAR_3->ps->velocity, VAR_2 );

  FUNC_10(VAR_3->ps->velocity);
  FUNC_11(VAR_3->ps->velocity, VAR_13, VAR_3->ps->velocity);
 }

 FUNC_6( VAR_7 );
}
