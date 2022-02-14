
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int weaponSelect; int time; int weaponSelectTime; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_1( void ) {
 int VAR_2;

 VAR_1.weaponSelectTime = VAR_1.time;

 for ( VAR_2 = VAR_0-1 ; VAR_2 > 0 ; VAR_2-- ) {
  if ( FUNC_0( VAR_2 ) ) {
   VAR_1.weaponSelect = VAR_2;
   break;
  }
 }
}
