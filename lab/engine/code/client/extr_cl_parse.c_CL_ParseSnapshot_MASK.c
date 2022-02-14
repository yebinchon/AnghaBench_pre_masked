
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int newSnap ;
typedef int msg_t ;
struct TYPE_22__ {scalar_t__ commandTime; } ;
struct TYPE_16__ {int messageNum; int deltaNum; scalar_t__ parseEntitiesNum; int ping; TYPE_9__ ps; void* valid; int areamask; void* snapFlags; int serverTime; int serverCommandNum; } ;
typedef TYPE_3__ clSnapshot_t ;
struct TYPE_21__ {scalar_t__ parseEntitiesNum; void* newSnapshots; TYPE_3__ snap; TYPE_3__* snapshots; TYPE_2__* outPackets; } ;
struct TYPE_20__ {scalar_t__ modified; } ;
struct TYPE_19__ {int integer; } ;
struct TYPE_14__ {int outgoingSequence; } ;
struct TYPE_18__ {int serverMessageSequence; TYPE_1__ netchan; void* demowaiting; int serverCommandSequence; } ;
struct TYPE_17__ {int realtime; } ;
struct TYPE_15__ {scalar_t__ p_serverTime; int p_realtime; } ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,TYPE_9__*,TYPE_9__*) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_8 (int *,char*) ;
 TYPE_8__ VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

void FUNC_9( msg_t *VAR_12 ) {
 int VAR_13;
 clSnapshot_t *VAR_14;
 clSnapshot_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;







 FUNC_2 (&VAR_15, 0, sizeof(VAR_15));



 VAR_15.serverCommandNum = VAR_8.serverCommandSequence;

 VAR_15.serverTime = FUNC_7( VAR_12 );



 VAR_6->modified = 0;

 VAR_15.messageNum = VAR_8.serverMessageSequence;

 VAR_16 = FUNC_4( VAR_12 );
 if ( !VAR_16 ) {
  VAR_15.deltaNum = -1;
 } else {
  VAR_15.deltaNum = VAR_15.messageNum - VAR_16;
 }
 VAR_15.snapFlags = FUNC_4( VAR_12 );





 if ( VAR_15.deltaNum <= 0 ) {
  VAR_15.valid = VAR_11;
  VAR_14 = ((void*)0);
  VAR_8.demowaiting = VAR_10;
 } else {
  VAR_14 = &VAR_5.snapshots[VAR_15.deltaNum & VAR_4];
  if ( !VAR_14->valid ) {

   FUNC_3 ("Delta from invalid frame (not supposed to happen!).\n");
  } else if ( VAR_14->messageNum != VAR_15.deltaNum ) {


   FUNC_3 ("Delta frame too old.\n");
  } else if ( VAR_5.parseEntitiesNum - VAR_14->parseEntitiesNum > VAR_1 - VAR_2 ) {
   FUNC_3 ("Delta parseEntitiesNum too old.\n");
  } else {
   VAR_15.valid = VAR_11;
  }
 }


 VAR_13 = FUNC_4( VAR_12 );

 if(VAR_13 > sizeof(VAR_15.areamask))
 {
  FUNC_1 (VAR_0,"CL_ParseSnapshot: Invalid size %d for areamask", VAR_13);
  return;
 }

 FUNC_5( VAR_12, &VAR_15.areamask, VAR_13);


 FUNC_8( VAR_12, "playerstate" );
 if ( VAR_14 ) {
  FUNC_6( VAR_12, &VAR_14->ps, &VAR_15.ps );
 } else {
  FUNC_6( VAR_12, ((void*)0), &VAR_15.ps );
 }


 FUNC_8( VAR_12, "packet entities" );
 FUNC_0( VAR_12, VAR_14, &VAR_15 );



 if ( !VAR_15.valid ) {
  return;
 }





 VAR_17 = VAR_5.snap.messageNum + 1;

 if ( VAR_15.messageNum - VAR_17 >= VAR_3 ) {
  VAR_17 = VAR_15.messageNum - ( VAR_3 - 1 );
 }
 for ( ; VAR_17 < VAR_15.messageNum ; VAR_17++ ) {
  VAR_5.snapshots[VAR_17 & VAR_4].valid = VAR_10;
 }


 VAR_5.snap = VAR_15;
 VAR_5.snap.ping = 999;

 for ( VAR_18 = 0 ; VAR_18 < VAR_3 ; VAR_18++ ) {
  VAR_19 = ( VAR_8.netchan.outgoingSequence - 1 - VAR_18 ) & VAR_4;
  if ( VAR_5.snap.ps.commandTime >= VAR_5.outPackets[ VAR_19 ].p_serverTime ) {
   VAR_5.snap.ping = VAR_9.realtime - VAR_5.outPackets[ VAR_19 ].p_realtime;
   break;
  }
 }

 VAR_5.snapshots[VAR_5.snap.messageNum & VAR_4] = VAR_5.snap;

 if (VAR_7->integer == 3) {
  FUNC_3( "   snapshot:%i  delta:%i  ping:%i\n", VAR_5.snap.messageNum,
  VAR_5.snap.deltaNum, VAR_5.snap.ping );
 }

 VAR_5.newSnapshots = VAR_11;
}
