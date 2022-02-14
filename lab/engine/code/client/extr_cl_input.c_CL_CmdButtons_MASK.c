
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_5__ {scalar_t__ wasPressed; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1( usercmd_t *VAR_5 ) {
 int VAR_6;






 for (VAR_6 = 0 ; VAR_6 < 15 ; VAR_6++) {
  if ( VAR_3[VAR_6].active || VAR_3[VAR_6].wasPressed ) {
   VAR_5->buttons |= 1 << VAR_6;
  }
  VAR_3[VAR_6].wasPressed = VAR_4;
 }

 if ( FUNC_0( ) ) {
  VAR_5->buttons |= VAR_1;
 }



 if ( VAR_2 && FUNC_0( ) == 0 ) {
  VAR_5->buttons |= VAR_0;
 }
}
