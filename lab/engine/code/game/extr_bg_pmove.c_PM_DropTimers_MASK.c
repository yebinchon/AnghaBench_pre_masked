
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ps; } ;
struct TYPE_5__ {scalar_t__ msec; } ;
struct TYPE_4__ {scalar_t__ pm_time; scalar_t__ legsTimer; scalar_t__ torsoTimer; int pm_flags; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_0( void ) {

 if ( VAR_1->ps->pm_time ) {
  if ( VAR_2.msec >= VAR_1->ps->pm_time ) {
   VAR_1->ps->pm_flags &= ~VAR_0;
   VAR_1->ps->pm_time = 0;
  } else {
   VAR_1->ps->pm_time -= VAR_2.msec;
  }
 }


 if ( VAR_1->ps->legsTimer > 0 ) {
  VAR_1->ps->legsTimer -= VAR_2.msec;
  if ( VAR_1->ps->legsTimer < 0 ) {
   VAR_1->ps->legsTimer = 0;
  }
 }

 if ( VAR_1->ps->torsoTimer > 0 ) {
  VAR_1->ps->torsoTimer -= VAR_2.msec;
  if ( VAR_1->ps->torsoTimer < 0 ) {
   VAR_1->ps->torsoTimer = 0;
  }
 }
}
