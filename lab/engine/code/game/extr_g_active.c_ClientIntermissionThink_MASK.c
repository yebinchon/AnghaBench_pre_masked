
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int buttons; } ;
struct TYPE_6__ {TYPE_3__ cmd; } ;
struct TYPE_7__ {int eFlags; } ;
struct TYPE_9__ {int oldbuttons; int buttons; int readyToExit; TYPE_1__ pers; TYPE_2__ ps; } ;
typedef TYPE_4__ gclient_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0( gclient_t *VAR_4 ) {
 VAR_4->ps.eFlags &= ~VAR_3;
 VAR_4->ps.eFlags &= ~VAR_2;




 VAR_4->oldbuttons = VAR_4->buttons;
 VAR_4->buttons = VAR_4->pers.cmd.buttons;
 if ( VAR_4->buttons & ( VAR_0 | VAR_1 ) & ( VAR_4->oldbuttons ^ VAR_4->buttons ) ) {

  VAR_4->readyToExit = 1;
 }
}
