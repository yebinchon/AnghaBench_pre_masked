
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_8__ {scalar_t__ fraction; int entityNum; scalar_t__ allsolid; scalar_t__ startsolid; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_9__ {int number; int solid; int pos; int modelindex; } ;
typedef TYPE_2__ entityState_t ;
typedef int clipHandle_t ;
struct TYPE_10__ {int lerpOrigin; TYPE_2__ currentState; int lerpAngles; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_11__ {int physicsTime; } ;


 int FUNC_0 (int *,int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*) ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (TYPE_1__*,int* const,int* const,int* const,int* const,int ,int,int*,int*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5 ( const vec3_t VAR_6, const vec3_t VAR_7, const vec3_t VAR_8, const vec3_t VAR_9,
       int VAR_10, int VAR_11, trace_t *VAR_12 ) {
 int VAR_13, VAR_14, VAR_15, VAR_16;
 trace_t VAR_17;
 entityState_t *VAR_18;
 clipHandle_t VAR_19;
 vec3_t VAR_20, VAR_21;
 vec3_t VAR_22, VAR_23;
 centity_t *VAR_24;

 for ( VAR_13 = 0 ; VAR_13 < VAR_2 ; VAR_13++ ) {
  VAR_24 = VAR_3[ VAR_13 ];
  VAR_18 = &VAR_24->currentState;

  if ( VAR_18->number == VAR_10 ) {
   continue;
  }

  if ( VAR_18->solid == VAR_0 ) {

   VAR_19 = FUNC_2( VAR_18->modelindex );
   FUNC_1( VAR_24->lerpAngles, VAR_23 );
   FUNC_0( &VAR_24->currentState.pos, VAR_1.physicsTime, VAR_22 );
  } else {

   VAR_14 = (VAR_18->solid & 255);
   VAR_15 = ((VAR_18->solid>>8) & 255);
   VAR_16 = ((VAR_18->solid>>16) & 255) - 32;

   VAR_20[0] = VAR_20[1] = -VAR_14;
   VAR_21[0] = VAR_21[1] = VAR_14;
   VAR_20[2] = -VAR_15;
   VAR_21[2] = VAR_16;

   VAR_19 = FUNC_3( VAR_20, VAR_21 );
   FUNC_1( VAR_5, VAR_23 );
   FUNC_1( VAR_24->lerpOrigin, VAR_22 );
  }


  FUNC_4 ( &VAR_17, VAR_6, VAR_9,
   VAR_7, VAR_8, VAR_19, VAR_11, VAR_22, VAR_23);

  if (VAR_17.allsolid || VAR_17.fraction < VAR_12->fraction) {
   VAR_17.entityNum = VAR_18->number;
   *VAR_12 = VAR_17;
  } else if (VAR_17.startsolid) {
   VAR_12->startsolid = VAR_4;
  }
  if ( VAR_12->allsolid ) {
   return;
  }
 }
}
