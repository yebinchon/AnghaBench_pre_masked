
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
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {int integer; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {scalar_t__ state; int timeDemoStart; int timeDemoLastFrame; int timeDemoMinDuration; int timeDemoMaxDuration; int timeDemoFrames; int* timeDemoDurations; int timeDemoBaseTime; scalar_t__ demoplaying; void* firstDemoFrameSkipped; } ;
struct TYPE_19__ {int realtime; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_15__ {int (* set_map_finished ) (int ,void*) ;} ;
struct TYPE_17__ {int userdata; TYPE_2__ hooks; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_14__ {int serverTime; int valid; } ;
struct TYPE_13__ {int oldFrameServerTime; int serverTime; int serverTimeDelta; int oldServerTime; TYPE_1__ snap; scalar_t__ newSnapshots; void* extrapolatedSnapshot; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 TYPE_11__ VAR_6 ;
 TYPE_10__* VAR_7 ;
 TYPE_9__* VAR_8 ;
 TYPE_8__* VAR_9 ;
 TYPE_7__ VAR_10 ;
 TYPE_6__ VAR_11 ;
 TYPE_5__* VAR_12 ;
 TYPE_4__* FUNC_6 () ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 int FUNC_7 (int ,void*) ;
 TYPE_3__* VAR_15 ;

void FUNC_8( void ) {

 if ( VAR_10.state != VAR_0 ) {
  if ( VAR_10.state != VAR_1 ) {
   return;
  }
  if ( VAR_10.demoplaying ) {


   if ( !VAR_10.firstDemoFrameSkipped ) {
    VAR_10.firstDemoFrameSkipped = VAR_14;
    return;
   }
   FUNC_3();
  }
  if ( VAR_6.newSnapshots ) {
   VAR_6.newSnapshots = VAR_13;
   FUNC_2();
  }
  if ( VAR_10.state != VAR_0 ) {
   return;
  }
 }


 if ( !VAR_6.snap.valid ) {
  FUNC_4( VAR_2, "CL_SetCGameTime: !cl.snap.valid" );
 }


 if ( VAR_15->integer && FUNC_1() && VAR_12->integer ) {

  return;
 }

 if ( VAR_6.snap.serverTime < VAR_6.oldFrameServerTime ) {
  FUNC_4( VAR_2, "cl.snap.serverTime < cl.oldFrameServerTime" );
 }
 VAR_6.oldFrameServerTime = VAR_6.snap.serverTime;




 if ( VAR_10.demoplaying && VAR_7->integer ) {


 } else {



  int VAR_16;

  VAR_16 = VAR_8->integer;
  if (VAR_16<-30) {
   VAR_16 = -30;
  } else if (VAR_16>30) {
   VAR_16 = 30;
  }

  VAR_6.serverTime = VAR_11.realtime + VAR_6.serverTimeDelta - VAR_16;



  if ( VAR_6.serverTime < VAR_6.oldServerTime ) {
   VAR_6.serverTime = VAR_6.oldServerTime;
  }
  VAR_6.oldServerTime = VAR_6.serverTime;



  if ( VAR_11.realtime + VAR_6.serverTimeDelta >= VAR_6.snap.serverTime - 5 ) {
   VAR_6.extrapolatedSnapshot = VAR_14;
  }
 }




 if ( VAR_6.newSnapshots ) {
  FUNC_0();
 }

 if ( !VAR_10.demoplaying ) {
  return;
 }
 if ( VAR_9->integer ) {
  int VAR_17 = FUNC_5( );
  int VAR_18;

  if (!VAR_10.timeDemoStart) {
   VAR_10.timeDemoStart = VAR_10.timeDemoLastFrame = VAR_17;
   VAR_10.timeDemoMinDuration = VAR_3;
   VAR_10.timeDemoMaxDuration = 0;
  }

  VAR_18 = VAR_17 - VAR_10.timeDemoLastFrame;
  VAR_10.timeDemoLastFrame = VAR_17;


  if( VAR_10.timeDemoFrames > 0 )
  {
   if( VAR_18 > VAR_10.timeDemoMaxDuration )
    VAR_10.timeDemoMaxDuration = VAR_18;

   if( VAR_18 < VAR_10.timeDemoMinDuration )
    VAR_10.timeDemoMinDuration = VAR_18;


   if( VAR_18 > VAR_5 )
    VAR_18 = VAR_5;

   VAR_10.timeDemoDurations[ ( VAR_10.timeDemoFrames - 1 ) %
    VAR_4 ] = VAR_18;
  }

  VAR_10.timeDemoFrames++;
  VAR_6.serverTime = VAR_10.timeDemoBaseTime + VAR_10.timeDemoFrames * 50;
 }

 while ( VAR_6.serverTime >= VAR_6.snap.serverTime ) {


  FUNC_3();
  if ( VAR_10.state != VAR_0 ) {
   FUNC_6()->hooks.set_map_finished(FUNC_6()->userdata, VAR_14);
   return;
  }
 }

}
