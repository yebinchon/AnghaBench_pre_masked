
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int weaponSelect; int time; int weaponSelectTime; TYPE_2__* snap; } ;
struct TYPE_4__ {int pm_flags; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_1( void ) {
 int VAR_4;
 int VAR_5;

 if ( !VAR_3.snap ) {
  return;
 }
 if ( VAR_3.snap->ps.pm_flags & VAR_1 ) {
  return;
 }

 VAR_3.weaponSelectTime = VAR_3.time;
 VAR_5 = VAR_3.weaponSelect;

 for ( VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++ ) {
  VAR_3.weaponSelect--;
  if ( VAR_3.weaponSelect == -1 ) {
   VAR_3.weaponSelect = VAR_0 - 1;
  }
  if ( VAR_3.weaponSelect == VAR_2 ) {
   continue;
  }
  if ( FUNC_0( VAR_3.weaponSelect ) ) {
   break;
  }
 }
 if ( VAR_4 == VAR_0 ) {
  VAR_3.weaponSelect = VAR_5;
 }
}
