
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int weaponInfo_t ;
typedef int vec3_t ;
struct TYPE_12__ {int* origin; int* oldorigin; int* shaderRGBA; int axis; int customShader; int reType; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_13__ {size_t otherEntityNum; int pos; } ;
typedef TYPE_3__ entityState_t ;
struct TYPE_14__ {TYPE_3__ currentState; int trailTime; } ;
typedef TYPE_4__ centity_t ;
typedef int beam ;
struct TYPE_17__ {int time; } ;
struct TYPE_16__ {int lerpAngles; int lerpOrigin; } ;
struct TYPE_11__ {int lightningShader; } ;
struct TYPE_15__ {TYPE_1__ media; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int*,int*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int*,int,int ,int*) ;
 TYPE_9__ VAR_1 ;
 TYPE_8__* VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8( centity_t *VAR_4, const weaponInfo_t *VAR_5 ) {
 vec3_t VAR_6;
 entityState_t *VAR_7;
 vec3_t VAR_8, VAR_9;
 refEntity_t VAR_10;

 VAR_7 = &VAR_4->currentState;

 FUNC_2( &VAR_7->pos, VAR_1.time, VAR_6 );
 VAR_4->trailTime = VAR_1.time;

 FUNC_6( &VAR_10, 0, sizeof( VAR_10 ) );

 FUNC_4 ( VAR_2[ VAR_4->currentState.otherEntityNum ].lerpOrigin, VAR_10.origin );
 VAR_10.origin[2] += 26;
 FUNC_0( VAR_2[ VAR_4->currentState.otherEntityNum ].lerpAngles, VAR_8, ((void*)0), VAR_9 );
 FUNC_5( VAR_10.origin, -6, VAR_9, VAR_10.origin );
 FUNC_4( VAR_6, VAR_10.oldorigin );

 if (FUNC_3( VAR_10.origin, VAR_10.oldorigin ) < 64 )
  return;

 VAR_10.reType = VAR_0;
 VAR_10.customShader = VAR_3.media.lightningShader;

 FUNC_1( VAR_10.axis );
 VAR_10.shaderRGBA[0] = 0xff;
 VAR_10.shaderRGBA[1] = 0xff;
 VAR_10.shaderRGBA[2] = 0xff;
 VAR_10.shaderRGBA[3] = 0xff;
 FUNC_7( &VAR_10 );
}
