
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client_t ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void) {
 char *VAR_1;
 char VAR_2[1024];
 client_t *VAR_3;


 if ( !VAR_0->integer ) {
  FUNC_2( "Server is not running.\n" );
  return;
 }

 if ( FUNC_0() < 3 ) {
  FUNC_2 ("Usage: tell <client number> <text>\n");
  return;
 }

 VAR_3 = FUNC_3();
 if ( !VAR_3 ) {
  return;
 }

 FUNC_6 (VAR_2, "console_tell: ");
 VAR_1 = FUNC_1(2);

 if ( *VAR_1 == '"' ) {
  VAR_1++;
  VAR_1[FUNC_7(VAR_1)-1] = 0;
 }

 FUNC_5(VAR_2, VAR_1);

 FUNC_2("%s\n", VAR_2);
 FUNC_4(VAR_3, "chat \"%s\"", VAR_2);
}
