
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* updateInfoString; int connState; char* connectPacketCount; int servername; int messageString; } ;
typedef TYPE_1__ uiClientState_t ;
typedef int text ;
typedef int qboolean ;
typedef int menuDef_t ;
typedef int info ;
typedef int downloadName ;







 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int ) ;
 int VAR_1 ;
 char* FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (float,float,float,int ,char*,int ) ;
 int FUNC_6 (float,float,int,int,float,int ,int ,int ) ;
 int FUNC_7 (char*,float,float,float) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,char*,int) ;
 char* FUNC_11 (char*,char*) ;

void FUNC_12( qboolean VAR_7 ) {
 char *VAR_8;
 uiClientState_t VAR_9;
 char VAR_10[VAR_2];
 char VAR_11[256];
 float VAR_12, VAR_13, VAR_14;

 menuDef_t *VAR_15 = FUNC_3("Connect");


 if ( !VAR_7 && VAR_15 ) {
  FUNC_2(VAR_15, VAR_6);
 }

 if (!VAR_7) {
  VAR_12 = 320;
  VAR_13 = 130;
  VAR_14 = 0.5f;
 } else {
  return;
 }


 FUNC_9( &VAR_9 );

 VAR_10[0] = '\0';
 if( FUNC_10( VAR_0, VAR_10, sizeof(VAR_10) ) ) {
  FUNC_5(VAR_12, VAR_13, VAR_14, VAR_3, FUNC_11( "Loading %s", FUNC_1( VAR_10, "mapname" )), 0);
 }

 if (!FUNC_4(VAR_9.servername,"localhost")) {
  FUNC_5(VAR_12, VAR_13 + 48, VAR_14, VAR_3, "Starting up...", VAR_1);
 } else {
  FUNC_0(VAR_11, sizeof(VAR_11), "Connecting to %s", VAR_9.servername);
  FUNC_5(VAR_12, VAR_13 + 48, VAR_14, VAR_3,VAR_11 , VAR_1);
 }


 FUNC_5(VAR_12, 600, VAR_14, VAR_3, FUNC_1( VAR_9.updateInfoString, "motd" ), 0);

 if ( VAR_9.connState < 131 ) {
  FUNC_6(VAR_12, VAR_13 + 176, 630, 20, VAR_14, VAR_3, VAR_9.messageString, 0);
 }

 if ( VAR_4 > VAR_9.connState ) {
  VAR_5[0] = '\0';
 }
 VAR_4 = VAR_9.connState;

 switch ( VAR_9.connState ) {
 case 130:
  VAR_8 = FUNC_11("Awaiting connection...%i", VAR_9.connectPacketCount);
  break;
 case 132:
  VAR_8 = FUNC_11("Awaiting challenge...%i", VAR_9.connectPacketCount);
  break;
 case 131: {
  char VAR_16[VAR_2];

   FUNC_8( "cl_downloadName", VAR_16, sizeof(VAR_16) );
   if (*VAR_16) {
    FUNC_7( VAR_16, VAR_12, VAR_13, VAR_14 );
    return;
   }
  }
  VAR_8 = "Awaiting gamestate...";
  break;
 case 129:
  return;
 case 128:
  return;
 default:
  return;
 }


 if (FUNC_4(VAR_9.servername,"localhost")) {
  FUNC_5(VAR_12, VAR_13 + 80, VAR_14, VAR_3, VAR_8, 0);
 }


}
