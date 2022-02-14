
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_8__ {int renderfx; int origin; int lightingOrigin; } ;
struct TYPE_10__ {float* ambientLight; float* directedLight; int lightDir; TYPE_1__ e; } ;
typedef TYPE_3__ trRefEntity_t ;
typedef float byte ;
struct TYPE_13__ {float value; } ;
struct TYPE_12__ {float value; } ;
struct TYPE_11__ {float* sinTable; TYPE_2__* world; } ;
struct TYPE_9__ {float* lightGridInverseSize; int* lightGridBounds; float* lightGridData; int lightGridOrigin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (float*,float,float*,float*) ;
 int FUNC_3 (float*,int ) ;
 int FUNC_4 (float*,float,float*) ;
 int FUNC_5 (float*,int ,float*) ;
 int FUNC_6 (float*) ;
 int FUNC_7 (float) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_8( trRefEntity_t *VAR_6 ) {
 vec3_t VAR_7;
 int VAR_8[3];
 int VAR_9, VAR_10;
 byte *VAR_11;
 float VAR_12[3];
 int VAR_13[3];
 vec3_t VAR_14;
 float VAR_15;

 if ( VAR_6->e.renderfx & VAR_2 ) {



  FUNC_1( VAR_6->e.lightingOrigin, VAR_7 );
 } else {
  FUNC_1( VAR_6->e.origin, VAR_7 );
 }

 FUNC_5( VAR_7, VAR_5.world->lightGridOrigin, VAR_7 );
 for ( VAR_9 = 0 ; VAR_9 < 3 ; VAR_9++ ) {
  float VAR_16;

  VAR_16 = VAR_7[VAR_9]*VAR_5.world->lightGridInverseSize[VAR_9];
  VAR_8[VAR_9] = FUNC_7( VAR_16 );
  VAR_12[VAR_9] = VAR_16 - VAR_8[VAR_9];
  if ( VAR_8[VAR_9] < 0 ) {
   VAR_8[VAR_9] = 0;
  } else if ( VAR_8[VAR_9] > VAR_5.world->lightGridBounds[VAR_9] - 1 ) {
   VAR_8[VAR_9] = VAR_5.world->lightGridBounds[VAR_9] - 1;
  }
 }

 FUNC_0( VAR_6->ambientLight );
 FUNC_0( VAR_6->directedLight );
 FUNC_0( VAR_14 );

 FUNC_6( VAR_5.world->lightGridData );


 VAR_13[0] = 8;
 VAR_13[1] = 8 * VAR_5.world->lightGridBounds[0];
 VAR_13[2] = 8 * VAR_5.world->lightGridBounds[0] * VAR_5.world->lightGridBounds[1];
 VAR_11 = VAR_5.world->lightGridData + VAR_8[0] * VAR_13[0]
  + VAR_8[1] * VAR_13[1] + VAR_8[2] * VAR_13[2];

 VAR_15 = 0;
 for ( VAR_9 = 0 ; VAR_9 < 8 ; VAR_9++ ) {
  float VAR_17;
  byte *VAR_18;
  int VAR_19, VAR_20;
  vec3_t VAR_21;



  VAR_17 = 1.0;
  VAR_18 = VAR_11;
  for ( VAR_10 = 0 ; VAR_10 < 3 ; VAR_10++ ) {
   if ( VAR_9 & (1<<VAR_10) ) {
    if ( VAR_8[VAR_10] + 1 > VAR_5.world->lightGridBounds[VAR_10] - 1 ) {
     break;
    }
    VAR_17 *= VAR_12[VAR_10];
    VAR_18 += VAR_13[VAR_10];
   } else {
    VAR_17 *= (1.0f - VAR_12[VAR_10]);
   }
  }

  if ( VAR_10 != 3 ) {
   continue;
  }
  if ( !(VAR_18[0]+VAR_18[1]+VAR_18[2]) ) {
   continue;
  }
  VAR_15 += VAR_17;
  VAR_6->ambientLight[0] += VAR_17 * VAR_18[0];
  VAR_6->ambientLight[1] += VAR_17 * VAR_18[1];
  VAR_6->ambientLight[2] += VAR_17 * VAR_18[2];

  VAR_6->directedLight[0] += VAR_17 * VAR_18[3];
  VAR_6->directedLight[1] += VAR_17 * VAR_18[4];
  VAR_6->directedLight[2] += VAR_17 * VAR_18[5];

  VAR_19 = VAR_18[7];
  VAR_20 = VAR_18[6];
  VAR_19 *= (VAR_1/256);
  VAR_20 *= (VAR_1/256);





  VAR_21[0] = VAR_5.sinTable[(VAR_19+(VAR_1/4))&VAR_0] * VAR_5.sinTable[VAR_20];
  VAR_21[1] = VAR_5.sinTable[VAR_19] * VAR_5.sinTable[VAR_20];
  VAR_21[2] = VAR_5.sinTable[(VAR_20+(VAR_1/4))&VAR_0];

  FUNC_2( VAR_14, VAR_17, VAR_21, VAR_14 );
 }

 if ( VAR_15 > 0 && VAR_15 < 0.99 ) {
  VAR_15 = 1.0f / VAR_15;
  FUNC_4( VAR_6->ambientLight, VAR_15, VAR_6->ambientLight );
  FUNC_4( VAR_6->directedLight, VAR_15, VAR_6->directedLight );
 }

 FUNC_4( VAR_6->ambientLight, VAR_3->value, VAR_6->ambientLight );
 FUNC_4( VAR_6->directedLight, VAR_4->value, VAR_6->directedLight );

 FUNC_3( VAR_14, VAR_6->lightDir );
}
