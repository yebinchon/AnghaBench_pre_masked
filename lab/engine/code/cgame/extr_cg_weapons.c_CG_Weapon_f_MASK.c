
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int weaponSelect; TYPE_1__* snap; int time; int weaponSelectTime; } ;
struct TYPE_5__ {int pm_flags; int* stats; } ;
struct TYPE_4__ {TYPE_2__ ps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_3 ;

void FUNC_2( void ) {
 int VAR_4;

 if ( !VAR_3.snap ) {
  return;
 }
 if ( VAR_3.snap->ps.pm_flags & VAR_1 ) {
  return;
 }

 VAR_4 = FUNC_1( FUNC_0( 1 ) );

 if ( VAR_4 < 1 || VAR_4 > VAR_0-1 ) {
  return;
 }

 VAR_3.weaponSelectTime = VAR_3.time;

 if ( ! ( VAR_3.snap->ps.stats[VAR_2] & ( 1 << VAR_4 ) ) ) {
  return;
 }

 VAR_3.weaponSelect = VAR_4;
}
