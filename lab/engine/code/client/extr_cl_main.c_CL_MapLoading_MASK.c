
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int gameState; } ;
struct TYPE_9__ {scalar_t__ state; int lastPacketSentTime; int serverAddress; int servername; int connectTime; int * serverMessage; } ;
struct TYPE_8__ {int * updateInfoString; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_9 () ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

void FUNC_10( void ) {
 if ( VAR_10->integer ) {
  VAR_7.state = VAR_2;
  FUNC_5( VAR_3 );
  return;
 }

 if ( !VAR_9->integer ) {
  return;
 }

 FUNC_3();
 FUNC_5( 0 );


 if ( VAR_7.state >= VAR_1 && !FUNC_7( VAR_7.servername, "localhost" ) ) {
  VAR_7.state = VAR_1;
  FUNC_2( VAR_8.updateInfoString, 0, sizeof( VAR_8.updateInfoString ) );
  FUNC_2( VAR_7.serverMessage, 0, sizeof( VAR_7.serverMessage ) );
  FUNC_2( &VAR_6.gameState, 0, sizeof( VAR_6.gameState ) );
  VAR_7.lastPacketSentTime = -9999;
  FUNC_9();
 } else {

  FUNC_4( "nextmap", "" );
  FUNC_1( VAR_11 );
  FUNC_8( VAR_7.servername, "localhost", sizeof(VAR_7.servername) );
  VAR_7.state = VAR_0;
  FUNC_5( 0 );
  FUNC_9();
  VAR_7.connectTime = -VAR_5;
  FUNC_6( VAR_7.servername, &VAR_7.serverAddress, VAR_4);


  FUNC_0();
 }
}
