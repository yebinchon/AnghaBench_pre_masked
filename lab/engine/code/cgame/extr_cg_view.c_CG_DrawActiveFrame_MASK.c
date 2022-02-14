
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


typedef scalar_t__ stereoFrame_t ;
typedef scalar_t__ qboolean ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {scalar_t__ value; } ;
struct TYPE_20__ {scalar_t__ value; } ;
struct TYPE_19__ {float value; } ;
struct TYPE_18__ {int scores1; int scores2; } ;
struct TYPE_17__ {int time; int viewaxis; int vieworg; int areamask; } ;
struct TYPE_15__ {scalar_t__* stats; int* persistant; int clientNum; } ;
struct TYPE_16__ {int snapFlags; TYPE_2__ ps; int areamask; } ;
struct TYPE_14__ {scalar_t__ hModel; } ;
struct TYPE_13__ {int time; scalar_t__* infoScreenText; int renderingThirdPerson; scalar_t__ frametime; scalar_t__ oldTime; int clientFrame; TYPE_4__ refdef; TYPE_3__* snap; TYPE_1__ testModelEntity; int predictedPlayerState; int hyperspace; int zoomSensitivity; int weaponSelect; scalar_t__ demoPlayback; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_11__ VAR_7 ;
 TYPE_10__ VAR_8 ;
 TYPE_9__ VAR_9 ;
 TYPE_8__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 int FUNC_19 (int *,int ,int,int) ;
 int FUNC_20 (int ,int ,int) ;
 int VAR_14 ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int ,int) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (char*,scalar_t__) ;

void FUNC_27( int VAR_15, stereoFrame_t VAR_16, qboolean VAR_17, qboolean VAR_18 ) {
 int VAR_19;
 int VAR_20 = -1;
 int VAR_21 = 0, VAR_22 = 0;

 VAR_7.time = VAR_15;
 VAR_7.demoPlayback = VAR_17;


 FUNC_18();

 FUNC_0();



 if ( VAR_7.infoScreenText[0] != 0 ) {
  if ( !VAR_18 ) {
   FUNC_11();
  }
  return;
 }



 FUNC_23(VAR_14);


 FUNC_22();


 FUNC_17();



 if ( !VAR_7.snap || ( VAR_7.snap->snapFlags & VAR_1 ) ) {
  if ( !VAR_18 ) {
   FUNC_11();
  }
  return;
 }


 FUNC_25( VAR_7.weaponSelect, VAR_7.zoomSensitivity );


 VAR_7.clientFrame++;


 FUNC_15();


 VAR_7.renderingThirdPerson = VAR_20 != VAR_6
       && (VAR_9.integer || (VAR_7.snap->ps.stats[VAR_2] <= 0));


 VAR_19 = FUNC_8();


 VAR_20 = VAR_7.snap->ps.persistant[VAR_0];
 if ( VAR_20 == VAR_5 ) {
  VAR_21 = VAR_13.scores1;
  VAR_22 = VAR_13.scores2;
 } else if ( VAR_20 == VAR_4 ) {
  VAR_22 = VAR_13.scores1;
  VAR_21 = VAR_13.scores2;
 }
 FUNC_19( &VAR_7.predictedPlayerState, VAR_7.refdef.vieworg, VAR_21, VAR_22 );

 if ( VAR_18 ) return;


 if ( !VAR_7.renderingThirdPerson ) {
  FUNC_9();
 }


 if ( !VAR_7.hyperspace ) {
  FUNC_4();
  FUNC_3();
  FUNC_5 ();
  FUNC_2();
 }
 FUNC_7( &VAR_7.predictedPlayerState );


 FUNC_12();







 if ( VAR_7.testModelEntity.hModel ) {
  FUNC_6();
 }
 VAR_7.refdef.time = VAR_7.time;
 FUNC_20( VAR_7.refdef.areamask, VAR_7.snap->areamask, sizeof( VAR_7.refdef.areamask ) );


 FUNC_14();


 FUNC_24( VAR_7.snap->ps.clientNum, VAR_7.refdef.vieworg, VAR_7.refdef.viewaxis, VAR_19 );


 if ( VAR_16 != VAR_3 ) {
  VAR_7.frametime = VAR_7.time - VAR_7.oldTime;
  if ( VAR_7.frametime < 0 ) {
   VAR_7.frametime = 0;
  }
  VAR_7.oldTime = VAR_7.time;
  FUNC_1();
 }
 if (VAR_10.value != VAR_11.value) {
  if (VAR_10.value < VAR_11.value) {
   VAR_10.value += VAR_12.value * ((float)VAR_7.frametime) / 1000;
   if (VAR_10.value > VAR_11.value)
    VAR_10.value = VAR_11.value;
  }
  else {
   VAR_10.value -= VAR_12.value * ((float)VAR_7.frametime) / 1000;
   if (VAR_10.value < VAR_11.value)
    VAR_10.value = VAR_11.value;
  }
  if (VAR_12.value) {
   FUNC_21("timescale", FUNC_26("%f", VAR_10.value));
  }
 }


 FUNC_10( VAR_16 );

 if ( VAR_8.integer ) {
  FUNC_16( "cg.clientFrame:%i\n", VAR_7.clientFrame );
 }
}
