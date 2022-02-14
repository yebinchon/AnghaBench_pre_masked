
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ forwardmove; scalar_t__ rightmove; } ;
struct TYPE_6__ {TYPE_2__* ps; TYPE_1__ cmd; } ;
struct TYPE_5__ {int movementDir; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_0( void ) {
 if ( VAR_0->cmd.forwardmove || VAR_0->cmd.rightmove ) {
  if ( VAR_0->cmd.rightmove == 0 && VAR_0->cmd.forwardmove > 0 ) {
   VAR_0->ps->movementDir = 0;
  } else if ( VAR_0->cmd.rightmove < 0 && VAR_0->cmd.forwardmove > 0 ) {
   VAR_0->ps->movementDir = 1;
  } else if ( VAR_0->cmd.rightmove < 0 && VAR_0->cmd.forwardmove == 0 ) {
   VAR_0->ps->movementDir = 2;
  } else if ( VAR_0->cmd.rightmove < 0 && VAR_0->cmd.forwardmove < 0 ) {
   VAR_0->ps->movementDir = 3;
  } else if ( VAR_0->cmd.rightmove == 0 && VAR_0->cmd.forwardmove < 0 ) {
   VAR_0->ps->movementDir = 4;
  } else if ( VAR_0->cmd.rightmove > 0 && VAR_0->cmd.forwardmove < 0 ) {
   VAR_0->ps->movementDir = 5;
  } else if ( VAR_0->cmd.rightmove > 0 && VAR_0->cmd.forwardmove == 0 ) {
   VAR_0->ps->movementDir = 6;
  } else if ( VAR_0->cmd.rightmove > 0 && VAR_0->cmd.forwardmove > 0 ) {
   VAR_0->ps->movementDir = 7;
  }
 } else {



  if ( VAR_0->ps->movementDir == 2 ) {
   VAR_0->ps->movementDir = 1;
  } else if ( VAR_0->ps->movementDir == 6 ) {
   VAR_0->ps->movementDir = 7;
  }
 }
}
