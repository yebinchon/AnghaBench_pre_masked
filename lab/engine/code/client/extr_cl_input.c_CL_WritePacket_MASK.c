
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_24__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_30__ {int serverTime; } ;
typedef TYPE_3__ usercmd_t ;
typedef int nullcmd ;
struct TYPE_31__ {int cursize; } ;
typedef TYPE_4__ msg_t ;
typedef int fakedata ;
typedef int data ;
typedef int byte ;
struct TYPE_36__ {scalar_t__ integer; } ;
struct TYPE_35__ {int integer; } ;
struct TYPE_34__ {scalar_t__ integer; } ;
struct TYPE_28__ {int outgoingSequence; } ;
struct TYPE_33__ {scalar_t__ state; int serverMessageSequence; int serverCommandSequence; int reliableAcknowledge; int reliableSequence; int const voipOutgoingDataSize; int voipFlags; int voipOutgoingGeneration; int voipOutgoingSequence; int voipOutgoingDataFrames; int const clientNum; int checksumFeed; TYPE_24__ netchan; int lastPacketSentTime; int * serverCommands; scalar_t__ demowaiting; int voipOutgoingData; scalar_t__ demorecording; int voipTargets; int * reliableCommands; scalar_t__ demoplaying; } ;
struct TYPE_32__ {int realtime; } ;
struct TYPE_29__ {int messageNum; int valid; } ;
struct TYPE_27__ {int p_cmdNumber; int p_serverTime; int p_realtime; } ;
struct TYPE_26__ {int serverId; int cmdNumber; TYPE_1__* outPackets; TYPE_3__* cmds; TYPE_2__ snap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_24__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_4__*,int *,int) ;
 int FUNC_9 (TYPE_4__*,int,int ) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (TYPE_4__*,int ,int const) ;
 int FUNC_12 (TYPE_4__*,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*,int const) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_10__ VAR_8 ;
 TYPE_9__* VAR_9 ;
 TYPE_8__* VAR_10 ;
 TYPE_7__* VAR_11 ;
 TYPE_6__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_5__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_16( void ) {
 msg_t VAR_20;
 byte VAR_21[VAR_2];
 int VAR_22, VAR_23;
 usercmd_t *VAR_24, *VAR_25;
 usercmd_t VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29, VAR_30;


 if ( VAR_12.demoplaying || VAR_12.state == VAR_0 ) {
  return;
 }

 FUNC_3( &VAR_26, 0, sizeof(VAR_26) );
 VAR_25 = &VAR_26;

 FUNC_8( &VAR_20, VAR_21, sizeof(VAR_21) );

 FUNC_6( &VAR_20 );


 FUNC_13( &VAR_20, VAR_8.serverId );




 FUNC_13( &VAR_20, VAR_12.serverMessageSequence );


 FUNC_13( &VAR_20, VAR_12.serverCommandSequence );


 for ( VAR_22 = VAR_12.reliableAcknowledge + 1 ; VAR_22 <= VAR_12.reliableSequence ; VAR_22++ ) {
  FUNC_10( &VAR_20, VAR_13 );
  FUNC_13( &VAR_20, VAR_22 );
  FUNC_15( &VAR_20, VAR_12.reliableCommands[ VAR_22 & (VAR_4-1) ] );
 }




 if ( VAR_10->integer < 0 ) {
  FUNC_5( "cl_packetdup", "0" );
 } else if ( VAR_10->integer > 5 ) {
  FUNC_5( "cl_packetdup", "5" );
 }
 VAR_28 = (VAR_12.netchan.outgoingSequence - 1 - VAR_10->integer) & VAR_5;
 VAR_29 = VAR_8.cmdNumber - VAR_8.outPackets[ VAR_28 ].p_cmdNumber;
 if ( VAR_29 > VAR_3 ) {
  VAR_29 = VAR_3;
  FUNC_4("MAX_PACKET_USERCMDS\n");
 }
 if ( VAR_29 >= 1 ) {
  if ( VAR_11->integer ) {
   FUNC_4( "(%i)", VAR_29 );
  }


  if ( VAR_9->integer || !VAR_8.snap.valid || VAR_12.demowaiting
   || VAR_12.serverMessageSequence != VAR_8.snap.messageNum ) {
   FUNC_10 (&VAR_20, VAR_15);
  } else {
   FUNC_10 (&VAR_20, VAR_14);
  }


  FUNC_10( &VAR_20, VAR_29 );


  VAR_30 = VAR_12.checksumFeed;

  VAR_30 ^= VAR_12.serverMessageSequence;

  VAR_30 ^= FUNC_7(VAR_12.serverCommands[ VAR_12.serverCommandSequence & (VAR_4-1) ], 32);


  for ( VAR_22 = 0 ; VAR_22 < VAR_29 ; VAR_22++ ) {
   VAR_23 = (VAR_8.cmdNumber - VAR_29 + VAR_22 + 1) & VAR_1;
   VAR_24 = &VAR_8.cmds[VAR_23];
   FUNC_12 (&VAR_20, VAR_30, VAR_25, VAR_24);
   VAR_25 = VAR_24;
  }
 }




 VAR_27 = VAR_12.netchan.outgoingSequence & VAR_5;
 VAR_8.outPackets[ VAR_27 ].p_realtime = VAR_17.realtime;
 VAR_8.outPackets[ VAR_27 ].p_serverTime = VAR_25->serverTime;
 VAR_8.outPackets[ VAR_27 ].p_cmdNumber = VAR_8.cmdNumber;
 VAR_12.lastPacketSentTime = VAR_17.realtime;

 if ( VAR_11->integer ) {
  FUNC_4( "%i ", VAR_20.cursize );
 }

 FUNC_0 (&VAR_12.netchan, &VAR_20);
}
