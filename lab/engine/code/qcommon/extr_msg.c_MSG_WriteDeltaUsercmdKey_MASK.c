
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serverTime; scalar_t__* angles; scalar_t__ forwardmove; scalar_t__ rightmove; scalar_t__ upmove; scalar_t__ buttons; scalar_t__ weapon; } ;
typedef TYPE_1__ usercmd_t ;
typedef int msg_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;

void FUNC_2( msg_t *VAR_1, int VAR_2, usercmd_t *VAR_3, usercmd_t *VAR_4 ) {
 if ( VAR_4->serverTime - VAR_3->serverTime < 256 ) {
  FUNC_0( VAR_1, 1, 1 );
  FUNC_0( VAR_1, VAR_4->serverTime - VAR_3->serverTime, 8 );
 } else {
  FUNC_0( VAR_1, 0, 1 );
  FUNC_0( VAR_1, VAR_4->serverTime, 32 );
 }
 if (VAR_3->angles[0] == VAR_4->angles[0] &&
  VAR_3->angles[1] == VAR_4->angles[1] &&
  VAR_3->angles[2] == VAR_4->angles[2] &&
  VAR_3->forwardmove == VAR_4->forwardmove &&
  VAR_3->rightmove == VAR_4->rightmove &&
  VAR_3->upmove == VAR_4->upmove &&
  VAR_3->buttons == VAR_4->buttons &&
  VAR_3->weapon == VAR_4->weapon) {
   FUNC_0( VAR_1, 0, 1 );
   VAR_0 += 7;
   return;
 }
 VAR_2 ^= VAR_4->serverTime;
 FUNC_0( VAR_1, 1, 1 );
 FUNC_1( VAR_1, VAR_2, VAR_3->angles[0], VAR_4->angles[0], 16 );
 FUNC_1( VAR_1, VAR_2, VAR_3->angles[1], VAR_4->angles[1], 16 );
 FUNC_1( VAR_1, VAR_2, VAR_3->angles[2], VAR_4->angles[2], 16 );
 FUNC_1( VAR_1, VAR_2, VAR_3->forwardmove, VAR_4->forwardmove, 8 );
 FUNC_1( VAR_1, VAR_2, VAR_3->rightmove, VAR_4->rightmove, 8 );
 FUNC_1( VAR_1, VAR_2, VAR_3->upmove, VAR_4->upmove, 8 );
 FUNC_1( VAR_1, VAR_2, VAR_3->buttons, VAR_4->buttons, 16 );
 FUNC_1( VAR_1, VAR_2, VAR_3->weapon, VAR_4->weapon, 8 );
}
