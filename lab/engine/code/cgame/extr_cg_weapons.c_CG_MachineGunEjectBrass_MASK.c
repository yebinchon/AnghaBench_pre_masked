
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_15__ {int hModel; int axis; int origin; } ;
typedef TYPE_4__ refEntity_t ;
struct TYPE_13__ {int* trBase; int* trDelta; scalar_t__ trTime; int trType; } ;
struct TYPE_14__ {int trDelta; int trBase; scalar_t__ trTime; int trType; } ;
struct TYPE_16__ {double bounceFactor; int leMarkType; int leBounceSoundType; int leFlags; TYPE_2__ angles; TYPE_3__ pos; scalar_t__ startTime; scalar_t__ endTime; int leType; TYPE_4__ refEntity; } ;
typedef TYPE_5__ localEntity_t ;
struct TYPE_17__ {int lerpOrigin; int lerpAngles; } ;
typedef TYPE_6__ centity_t ;
struct TYPE_20__ {scalar_t__ time; } ;
struct TYPE_19__ {int integer; } ;
struct TYPE_12__ {int machinegunBrassModel; } ;
struct TYPE_18__ {TYPE_1__ media; } ;


 int FUNC_0 (int ,int**) ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int*,float,int ) ;
 int VAR_7 ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 TYPE_7__ VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10( centity_t *VAR_11 ) {
 localEntity_t *VAR_12;
 refEntity_t *VAR_13;
 vec3_t VAR_14, VAR_15;
 vec3_t VAR_16, VAR_17;
 float VAR_18 = 1.0f;
 vec3_t VAR_19[3];

 if ( VAR_9.integer <= 0 ) {
  return;
 }

 VAR_12 = FUNC_2();
 VAR_13 = &VAR_12->refEntity;

 VAR_14[0] = 0;
 VAR_14[1] = -50 + 40 * FUNC_7();
 VAR_14[2] = 100 + 50 * FUNC_7();

 VAR_12->leType = VAR_4;
 VAR_12->startTime = VAR_8.time;
 VAR_12->endTime = VAR_12->startTime + VAR_9.integer + ( VAR_9.integer / 4 ) * FUNC_9();

 VAR_12->pos.trType = VAR_5;
 VAR_12->pos.trTime = VAR_8.time - (FUNC_8()&15);

 FUNC_0( VAR_11->lerpAngles, VAR_19 );

 VAR_16[0] = 8;
 VAR_16[1] = -4;
 VAR_16[2] = 24;

 VAR_17[0] = VAR_16[0] * VAR_19[0][0] + VAR_16[1] * VAR_19[1][0] + VAR_16[2] * VAR_19[2][0];
 VAR_17[1] = VAR_16[0] * VAR_19[0][1] + VAR_16[1] * VAR_19[1][1] + VAR_16[2] * VAR_19[2][1];
 VAR_17[2] = VAR_16[0] * VAR_19[0][2] + VAR_16[1] * VAR_19[1][2] + VAR_16[2] * VAR_19[2][2];
 FUNC_4( VAR_11->lerpOrigin, VAR_17, VAR_13->origin );

 FUNC_5( VAR_13->origin, VAR_12->pos.trBase );

 if ( FUNC_3( VAR_13->origin, -1 ) & VAR_0 ) {
  VAR_18 = 0.10f;
 }

 VAR_15[0] = VAR_14[0] * VAR_19[0][0] + VAR_14[1] * VAR_19[1][0] + VAR_14[2] * VAR_19[2][0];
 VAR_15[1] = VAR_14[0] * VAR_19[0][1] + VAR_14[1] * VAR_19[1][1] + VAR_14[2] * VAR_19[2][1];
 VAR_15[2] = VAR_14[0] * VAR_19[0][2] + VAR_14[1] * VAR_19[1][2] + VAR_14[2] * VAR_19[2][2];
 FUNC_6( VAR_15, VAR_18, VAR_12->pos.trDelta );

 FUNC_1( VAR_7, VAR_13->axis );
 VAR_13->hModel = VAR_10.media.machinegunBrassModel;

 VAR_12->bounceFactor = 0.4 * VAR_18;

 VAR_12->angles.trType = VAR_6;
 VAR_12->angles.trTime = VAR_8.time;
 VAR_12->angles.trBase[0] = FUNC_8()&31;
 VAR_12->angles.trBase[1] = FUNC_8()&31;
 VAR_12->angles.trBase[2] = FUNC_8()&31;
 VAR_12->angles.trDelta[0] = 2;
 VAR_12->angles.trDelta[1] = 1;
 VAR_12->angles.trDelta[2] = 0;

 VAR_12->leFlags = VAR_2;
 VAR_12->leBounceSoundType = VAR_1;
 VAR_12->leMarkType = VAR_3;
}
