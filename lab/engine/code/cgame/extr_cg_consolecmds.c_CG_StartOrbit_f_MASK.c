
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int var ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3( void ) {
 char VAR_2[VAR_0];

 FUNC_2( "developer", VAR_2, sizeof( VAR_2 ) );
 if ( !FUNC_0(VAR_2) ) {
  return;
 }
 if (VAR_1.value != 0) {
  FUNC_1 ("cg_cameraOrbit", "0");
  FUNC_1("cg_thirdPerson", "0");
 } else {
  FUNC_1("cg_cameraOrbit", "5");
  FUNC_1("cg_thirdPerson", "1");
  FUNC_1("cg_thirdPersonAngle", "0");
  FUNC_1("cg_thirdPersonRange", "100");
 }
}
