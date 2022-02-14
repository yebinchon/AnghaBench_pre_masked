
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ps; } ;
struct TYPE_3__ {int* stats; scalar_t__ weaponstate; int weaponTime; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_2( int VAR_7 ) {
 if ( VAR_7 <= VAR_4 || VAR_7 >= VAR_5 ) {
  return;
 }

 if ( !( VAR_6->ps->stats[VAR_1] & ( 1 << VAR_7 ) ) ) {
  return;
 }

 if ( VAR_6->ps->weaponstate == VAR_3 ) {
  return;
 }

 FUNC_0( VAR_0 );
 VAR_6->ps->weaponstate = VAR_3;
 VAR_6->ps->weaponTime += 200;
 FUNC_1( VAR_2 );
}
