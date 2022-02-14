
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int info ;
typedef int data ;
typedef int byte ;
struct TYPE_16__ {int type; } ;
struct TYPE_15__ {int state; scalar_t__ connectTime; int challenge; TYPE_7__ serverAddress; int compat; int connectPacketCount; scalar_t__ demoplaying; } ;
struct TYPE_14__ {scalar_t__ realtime; } ;
struct TYPE_13__ {int string; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,TYPE_7__,int *,int ) ;
 int FUNC_7 (int ,TYPE_7__,char*,char*) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (TYPE_7__) ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_4__* VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;

void FUNC_12( void ) {
 int VAR_14;
 char VAR_15[VAR_2];
 char VAR_16[VAR_2 + 10];


 if ( VAR_6.demoplaying ) {
  return;
 }


 if ( VAR_6.state != 128 && VAR_6.state != 129 ) {
  return;
 }

 if ( VAR_7.realtime - VAR_6.connectTime < VAR_5 ) {
  return;
 }

 VAR_6.connectTime = VAR_7.realtime;
 VAR_6.connectPacketCount++;


 switch ( VAR_6.state ) {
 case 128:


  if (!VAR_11->integer && VAR_6.serverAddress.type == VAR_3 && !FUNC_9( VAR_6.serverAddress ) )
   FUNC_0();





  FUNC_2(VAR_16, sizeof(VAR_16), "getchallenge %d %s", VAR_6.challenge, VAR_8->string);

  FUNC_7(VAR_4, VAR_6.serverAddress, "%s", VAR_16);
  break;

 case 129:

  VAR_14 = FUNC_4 ("net_qport");

  FUNC_8( VAR_15, FUNC_3( VAR_0 ), sizeof( VAR_15 ) );
   FUNC_5(VAR_15, "protocol", FUNC_11("%i", VAR_10->integer));
  FUNC_5( VAR_15, "qport", FUNC_11("%i", VAR_14 ) );
  FUNC_5( VAR_15, "challenge", FUNC_11("%i", VAR_6.challenge ) );

  FUNC_2( VAR_16, sizeof(VAR_16), "connect \"%s\"", VAR_15 );
  FUNC_6( VAR_4, VAR_6.serverAddress, (byte *) VAR_16, FUNC_10 ( VAR_16 ) );


  VAR_12 &= ~VAR_0;
  break;

 default:
  FUNC_1( VAR_1, "CL_CheckForResend: bad clc.state" );
 }
}
