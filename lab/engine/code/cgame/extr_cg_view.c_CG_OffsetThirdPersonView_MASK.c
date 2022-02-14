
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_11__ {double fraction; int* endpos; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_10__ {int* vieworg; } ;
struct TYPE_9__ {scalar_t__* stats; int clientNum; scalar_t__ viewheight; } ;
struct TYPE_15__ {int* refdefViewAngles; TYPE_2__ refdef; TYPE_1__ predictedPlayerState; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {float value; } ;


 int FUNC_0 (int*,int*,int*,int*) ;
 int FUNC_1 (TYPE_3__*,int*,int*,int*,int*,int ,int ) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int*,float,int*,int*) ;
 int FUNC_4 (int*,int*,int*) ;
 size_t VAR_6 ;
 int FUNC_5 (int,float) ;
 TYPE_7__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 float FUNC_6 (int) ;
 float FUNC_7 (int) ;
 float FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9( void ) {
 vec3_t VAR_11, VAR_12, VAR_13;
 vec3_t VAR_14;
 vec3_t VAR_15;
 trace_t VAR_16;
 static vec3_t VAR_17 = { -4, -4, -4 };
 static vec3_t VAR_18 = { 4, 4, 4 };
 vec3_t VAR_19;
 float VAR_20;
 float VAR_21, VAR_22;

 VAR_7.refdef.vieworg[2] += VAR_7.predictedPlayerState.viewheight;

 FUNC_2( VAR_7.refdefViewAngles, VAR_15 );


 if ( VAR_7.predictedPlayerState.stats[VAR_5] <= 0 ) {
  VAR_15[VAR_6] = VAR_7.predictedPlayerState.stats[VAR_4];
  VAR_7.refdefViewAngles[VAR_6] = VAR_7.predictedPlayerState.stats[VAR_4];
 }

 if ( VAR_15[VAR_3] > 45 ) {
  VAR_15[VAR_3] = 45;
 }
 FUNC_0( VAR_15, VAR_11, ((void*)0), ((void*)0) );

 FUNC_3( VAR_7.refdef.vieworg, VAR_0, VAR_11, VAR_19 );

 FUNC_2( VAR_7.refdef.vieworg, VAR_14 );

 VAR_14[2] += 8;

 VAR_7.refdefViewAngles[VAR_3] *= 0.5;

 FUNC_0( VAR_7.refdefViewAngles, VAR_11, VAR_12, VAR_13 );

 VAR_21 = FUNC_6( VAR_9.value / 180 * VAR_2 );
 VAR_22 = FUNC_7( VAR_9.value / 180 * VAR_2 );
 FUNC_3( VAR_14, -VAR_10.value * VAR_21, VAR_11, VAR_14 );
 FUNC_3( VAR_14, -VAR_10.value * VAR_22, VAR_12, VAR_14 );




 if (!VAR_8.integer) {
  FUNC_1( &VAR_16, VAR_7.refdef.vieworg, VAR_17, VAR_18, VAR_14, VAR_7.predictedPlayerState.clientNum, VAR_1 );

  if ( VAR_16.fraction != 1.0 ) {
   FUNC_2( VAR_16.endpos, VAR_14 );
   VAR_14[2] += (1.0 - VAR_16.fraction) * 32;



   FUNC_1( &VAR_16, VAR_7.refdef.vieworg, VAR_17, VAR_18, VAR_14, VAR_7.predictedPlayerState.clientNum, VAR_1 );
   FUNC_2( VAR_16.endpos, VAR_14 );
  }
 }


 FUNC_2( VAR_14, VAR_7.refdef.vieworg );


 FUNC_4( VAR_19, VAR_7.refdef.vieworg, VAR_19 );
 VAR_20 = FUNC_8( VAR_19[0] * VAR_19[0] + VAR_19[1] * VAR_19[1] );
 if ( VAR_20 < 1 ) {
  VAR_20 = 1;
 }
 VAR_7.refdefViewAngles[VAR_3] = -180 / VAR_2 * FUNC_5( VAR_19[2], VAR_20 );
 VAR_7.refdefViewAngles[VAR_6] -= VAR_9.value;
}
