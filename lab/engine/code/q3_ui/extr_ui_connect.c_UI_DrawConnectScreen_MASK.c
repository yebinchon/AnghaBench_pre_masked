
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* servername; char* updateInfoString; int connState; char* connectPacketCount; int messageString; } ;
typedef TYPE_2__ uiClientState_t ;
typedef int qboolean ;
typedef int info ;
typedef int downloadName ;
struct TYPE_15__ {int widthInChars; int buffer; } ;
struct TYPE_10__ {char* name; int x; int y; scalar_t__ callback; int type; } ;
struct TYPE_14__ {int width; TYPE_9__ field; TYPE_1__ generic; } ;
struct TYPE_13__ {int x; int wrapAround; scalar_t__ nitems; } ;
struct TYPE_12__ {int menuBackShader; } ;







 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_9__*) ;
 char* FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_5__*,void*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int,int,int ) ;
 int FUNC_9 (int,int,char*,int,int ) ;
 int FUNC_10 (int,int,int,int,int ,int,int ) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 TYPE_6__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_5__ VAR_17 ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,char*,int) ;
 TYPE_3__ VAR_18 ;
 char* FUNC_15 (char*,char*) ;

void FUNC_16( qboolean VAR_19 ) {
 char *VAR_20;
 uiClientState_t VAR_21;
 char VAR_22[VAR_1];

 FUNC_5();

 if ( !VAR_19 ) {

  FUNC_11( VAR_9 );
  FUNC_8( 0, 0, VAR_4, VAR_3, VAR_18.menuBackShader );
 }


 FUNC_13( &VAR_21 );

 VAR_22[0] = '\0';
 if( FUNC_14( VAR_0, VAR_22, sizeof(VAR_22) ) ) {
  FUNC_9( 320, 16, FUNC_15( "Loading %s", FUNC_2( VAR_22, "mapname" ) ), VAR_5|VAR_6|VAR_7, VAR_9 );
 }

 FUNC_9( 320, 64, FUNC_15("Connecting to %s", VAR_21.servername), VAR_6|VAR_8|VAR_7, VAR_12 );



 FUNC_9( VAR_4/2, VAR_3-32,
  FUNC_2( VAR_21.updateInfoString, "motd" ), VAR_6|VAR_8|VAR_7, VAR_12 );


 if ( VAR_21.connState < 131 ) {
  FUNC_10( 320, 192, 630, 20, VAR_21.messageString, VAR_6|VAR_8|VAR_7, VAR_12 );
 }
 if ( VAR_10 > VAR_21.connState ) {
  VAR_11[0] = '\0';
 }
 VAR_10 = VAR_21.connState;

 switch ( VAR_21.connState ) {
 case 130:
  VAR_20 = FUNC_15("Awaiting challenge...%i", VAR_21.connectPacketCount);
  break;
 case 132:
  VAR_20 = FUNC_15("Awaiting connection...%i", VAR_21.connectPacketCount);
  break;
 case 131: {
  char VAR_23[VAR_1];

   FUNC_12( "cl_downloadName", VAR_23, sizeof(VAR_23) );
   if (*VAR_23) {
    FUNC_7( VAR_23 );
    return;
   }
  }
  VAR_20 = "Awaiting gamestate...";
  break;
 case 129:
  return;
 case 128:
  return;
 default:
  return;
 }

 FUNC_9( 320, 128, VAR_20, VAR_6|VAR_8|VAR_7, VAR_9 );


}
