
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ps; } ;
struct TYPE_3__ {scalar_t__ weaponstate; scalar_t__ weapon; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_1( void ) {
 if ( VAR_4->ps->weaponstate == VAR_2 ) {
  if ( VAR_4->ps->weapon == VAR_3 ) {
   FUNC_0( VAR_1 );
  } else {
   FUNC_0( VAR_0 );
  }
  return;
 }
}
