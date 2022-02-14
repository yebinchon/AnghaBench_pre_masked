
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_5__ {int upmove; scalar_t__ forwardmove; } ;
struct TYPE_8__ {TYPE_2__* ps; TYPE_1__ cmd; } ;
struct TYPE_7__ {void* walking; void* groundPlane; } ;
struct TYPE_6__ {int pm_flags; int * velocity; int groundEntityNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_8 ;
 TYPE_3__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static qboolean FUNC_2( void ) {
 if ( VAR_8->ps->pm_flags & VAR_7 ) {
  return VAR_10;
 }

 if ( VAR_8->cmd.upmove < 10 ) {

  return VAR_10;
 }


 if ( VAR_8->ps->pm_flags & VAR_6 ) {

  VAR_8->cmd.upmove = 0;
  return VAR_10;
 }

 VAR_9.groundPlane = VAR_10;
 VAR_9.walking = VAR_10;
 VAR_8->ps->pm_flags |= VAR_6;

 VAR_8->ps->groundEntityNum = VAR_0;
 VAR_8->ps->velocity[2] = VAR_2;
 FUNC_0( VAR_1 );

 if ( VAR_8->cmd.forwardmove >= 0 ) {
  FUNC_1( VAR_3 );
  VAR_8->ps->pm_flags &= ~VAR_5;
 } else {
  FUNC_1( VAR_4 );
  VAR_8->ps->pm_flags |= VAR_5;
 }

 return VAR_11;
}
