
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
typedef TYPE_1__ menucommon_s ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6( void* VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_1 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 131:
  FUNC_1();
  break;

 case 130:

  FUNC_4();
  FUNC_0();
  break;

 case 133:
  FUNC_3();
  break;

 case 128:
  FUNC_5( VAR_0, "cmd rank_spectate\n" );
  FUNC_0();
  break;

 case 129:
  FUNC_2();
  break;

 case 132:
  FUNC_5( VAR_0, "disconnect\n" );
  FUNC_0();
  break;

 }
}
