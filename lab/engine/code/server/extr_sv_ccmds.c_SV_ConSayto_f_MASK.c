
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; int state; } ;
typedef TYPE_1__ client_t ;
typedef int cleanName ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {TYPE_1__* clients; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_12(void) {
 char *VAR_4;
 char VAR_5[1024];
 client_t *VAR_6;
 char *VAR_7;
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 client_t *VAR_10;
 int VAR_11;


 if ( !VAR_1->integer ) {
  FUNC_4( "Server is not running.\n" );
  return;
 }

 if ( FUNC_0() < 3 ) {
  FUNC_4 ("Usage: sayto <player name> <text>\n");
  return;
 }

 VAR_7 = FUNC_2(1);



 FUNC_3( VAR_8, VAR_0, VAR_7 );

 VAR_10 = ((void*)0);
 for ( VAR_11=0, VAR_6=VAR_3.clients ; VAR_11 < VAR_2->integer ; VAR_11++,VAR_6++ ) {
  if ( !VAR_6->state ) {
   continue;
  }
  FUNC_7( VAR_9, VAR_6->name, sizeof(VAR_9) );
  FUNC_5( VAR_9 );

  if ( !FUNC_6( VAR_9, VAR_8 ) ) {
   VAR_10 = VAR_6;
   break;
  }
 }
 if( !VAR_10 )
 {
  FUNC_4 ("No such player name: %s.\n", VAR_8);
  return;
 }

 FUNC_10 (VAR_5, "console_sayto: ");
 VAR_4 = FUNC_1(2);

 if ( *VAR_4 == '"' ) {
  VAR_4++;
  VAR_4[FUNC_11(VAR_4)-1] = 0;
 }

 FUNC_9(VAR_5, VAR_4);

 FUNC_4("%s\n", VAR_5);
 FUNC_8(VAR_10, "chat \"%s\"", VAR_5);
}
