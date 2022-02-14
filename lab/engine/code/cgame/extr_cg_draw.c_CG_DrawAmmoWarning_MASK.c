
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lowAmmoWarning; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char const*,float) ;
 int FUNC_1 (char const*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2( void ) {
 const char *VAR_3;
 int VAR_4;

 if ( VAR_2.integer == 0 ) {
  return;
 }

 if ( !VAR_1.lowAmmoWarning ) {
  return;
 }

 if ( VAR_1.lowAmmoWarning == 2 ) {
  VAR_3 = "OUT OF AMMO";
 } else {
  VAR_3 = "LOW AMMO WARNING";
 }
 VAR_4 = FUNC_1( VAR_3 ) * VAR_0;
 FUNC_0(320 - VAR_4 / 2, 64, VAR_3, 1.0F);
}
