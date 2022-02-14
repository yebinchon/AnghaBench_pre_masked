
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_27__ {void* upmove; void* forwardmove; void* rightmove; int buttons; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_35__ {float value; } ;
struct TYPE_34__ {size_t integer; } ;
struct TYPE_33__ {float value; } ;
struct TYPE_32__ {size_t integer; } ;
struct TYPE_31__ {float value; } ;
struct TYPE_30__ {size_t integer; } ;
struct TYPE_29__ {float value; } ;
struct TYPE_28__ {size_t integer; } ;
struct TYPE_26__ {float* joystickAxis; float* viewangles; } ;
struct TYPE_25__ {double value; } ;
struct TYPE_24__ {int integer; } ;
struct TYPE_23__ {double frametime; } ;
struct TYPE_22__ {int active; } ;
struct TYPE_21__ {int active; } ;
struct TYPE_20__ {float value; } ;
struct TYPE_19__ {size_t integer; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_17__ VAR_3 ;
 TYPE_16__* VAR_4 ;
 TYPE_15__* VAR_5 ;
 TYPE_14__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_13__ VAR_8 ;
 TYPE_12__ VAR_9 ;
 TYPE_11__* VAR_10 ;
 TYPE_10__* VAR_11 ;
 TYPE_9__* VAR_12 ;
 TYPE_8__* VAR_13 ;
 TYPE_7__* VAR_14 ;
 TYPE_6__* VAR_15 ;
 TYPE_5__* VAR_16 ;
 TYPE_4__* VAR_17 ;
 TYPE_3__* VAR_18 ;
 TYPE_2__* VAR_19 ;

void FUNC_1( usercmd_t *VAR_20 ) {
 float VAR_21;

 float VAR_22 = VAR_18->value * VAR_3.joystickAxis[VAR_19->integer];
 float VAR_23 = VAR_14->value * VAR_3.joystickAxis[VAR_15->integer];
 float VAR_24 = VAR_10->value * VAR_3.joystickAxis[VAR_11->integer];
 float VAR_25 = VAR_12->value * VAR_3.joystickAxis[VAR_13->integer];
 float VAR_26 = VAR_16->value * VAR_3.joystickAxis[VAR_17->integer];

 if ( !(VAR_8.active ^ VAR_5->integer) ) {
  VAR_20->buttons |= VAR_0;
 }

 if ( VAR_8.active ) {
  VAR_21 = 0.001 * VAR_6.frametime * VAR_4->value;
 } else {
  VAR_21 = 0.001 * VAR_6.frametime;
 }

 if ( !VAR_9.active ) {
  VAR_3.viewangles[VAR_2] += VAR_21 * VAR_22;
  VAR_20->rightmove = FUNC_0( VAR_20->rightmove + (int)VAR_23 );
 } else {
  VAR_3.viewangles[VAR_2] += VAR_21 * VAR_23;
  VAR_20->rightmove = FUNC_0( VAR_20->rightmove + (int)VAR_22 );
 }

 if ( VAR_7 ) {
  VAR_3.viewangles[VAR_1] += VAR_21 * VAR_24;
  VAR_20->forwardmove = FUNC_0( VAR_20->forwardmove + (int)VAR_25 );
 } else {
  VAR_3.viewangles[VAR_1] += VAR_21 * VAR_25;
  VAR_20->forwardmove = FUNC_0( VAR_20->forwardmove + (int)VAR_24 );
 }

 VAR_20->upmove = FUNC_0( VAR_20->upmove + (int)VAR_26 );
}
