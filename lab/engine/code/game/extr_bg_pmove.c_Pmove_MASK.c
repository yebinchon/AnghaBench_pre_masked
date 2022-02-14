
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int serverTime; int upmove; } ;
struct TYPE_8__ {int pmove_msec; TYPE_2__ cmd; TYPE_1__* ps; scalar_t__ pmove_fixed; } ;
typedef TYPE_3__ pmove_t ;
struct TYPE_6__ {int commandTime; int pmove_framecount; int pm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1 (pmove_t *VAR_2) {
 int VAR_3;

 VAR_3 = VAR_2->cmd.serverTime;

 if ( VAR_3 < VAR_2->ps->commandTime ) {
  return;
 }

 if ( VAR_3 > VAR_2->ps->commandTime + 1000 ) {
  VAR_2->ps->commandTime = VAR_3 - 1000;
 }

 VAR_2->ps->pmove_framecount = (VAR_2->ps->pmove_framecount+1) & ((1<<VAR_1)-1);



 while ( VAR_2->ps->commandTime != VAR_3 ) {
  int VAR_4;

  VAR_4 = VAR_3 - VAR_2->ps->commandTime;

  if ( VAR_2->pmove_fixed ) {
   if ( VAR_4 > VAR_2->pmove_msec ) {
    VAR_4 = VAR_2->pmove_msec;
   }
  }
  else {
   if ( VAR_4 > 66 ) {
    VAR_4 = 66;
   }
  }
  VAR_2->cmd.serverTime = VAR_2->ps->commandTime + VAR_4;
  FUNC_0( VAR_2 );

  if ( VAR_2->ps->pm_flags & VAR_0 ) {
   VAR_2->cmd.upmove = 20;
  }
 }



}
