
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int grank_status_t ;
struct TYPE_2__ {int menu; } ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;

void FUNC_5( void ) {

 VAR_2 = (grank_status_t)FUNC_4("client_status");

 switch( VAR_2 )
 {
 case 133:
  return;
 case 130:

  return;
 case 131:

  VAR_1 = "Username unavailable";
  break;
 case 136:
  VAR_1 = "Invalid password";
  break;
 case 128:
  VAR_1 = "Timed out";
  break;
 case 132:
  VAR_1 = "No membership";
  break;
 case 134:
  VAR_1 = "Validation failed";
  break;
 case 135:
  VAR_1 = "Error";
  break;
 case 129:
 case 137:
  FUNC_1();
  return;
 default:
  return;
 }
 FUNC_0();
 FUNC_3();
 FUNC_2 ( &VAR_0.menu );
}
