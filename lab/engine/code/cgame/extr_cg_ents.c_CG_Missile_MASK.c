
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_21__ {int missileRenderfx; int missileModel; scalar_t__ missileSound; int * missileDlightColor; scalar_t__ missileDlight; int (* missileTrailFunc ) (TYPE_5__*,TYPE_2__ const*) ;} ;
typedef TYPE_2__ weaponInfo_t ;
typedef int vec3_t ;
struct TYPE_22__ {int radius; int skinNum; int renderfx; int** axis; int hModel; int customShader; scalar_t__ rotation; int reType; int oldorigin; int origin; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_19__ {scalar_t__ trType; int trDelta; } ;
struct TYPE_23__ {size_t weapon; scalar_t__ generic1; int time; TYPE_16__ pos; int number; int angles; } ;
typedef TYPE_4__ entityState_t ;
typedef int ent ;
struct TYPE_24__ {int lerpAngles; TYPE_4__ currentState; int lerpOrigin; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_20__ {int blueProxMine; int plasmaBallShader; } ;
struct TYPE_18__ {int time; int clientFrame; } ;
struct TYPE_17__ {TYPE_1__ media; } ;


 int FUNC_0 (int ,int**) ;
 int FUNC_1 (TYPE_16__*,int,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int**,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 TYPE_12__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_10__ VAR_10 ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_5__*,TYPE_2__ const*) ;
 int FUNC_8 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11( centity_t *VAR_11 ) {
 refEntity_t VAR_12;
 entityState_t *VAR_13;
 const weaponInfo_t *VAR_14;


 VAR_13 = &VAR_11->currentState;
 if ( VAR_13->weapon >= VAR_5 ) {
  VAR_13->weapon = 0;
 }
 VAR_14 = &VAR_9[VAR_13->weapon];


 FUNC_4( VAR_13->angles, VAR_11->lerpAngles);


 if ( VAR_14->missileTrailFunc )
 {
  VAR_14->missileTrailFunc( VAR_11, VAR_14 );
 }
 if ( VAR_14->missileDlight ) {
  FUNC_8(VAR_11->lerpOrigin, VAR_14->missileDlight,
   VAR_14->missileDlightColor[0], VAR_14->missileDlightColor[1], VAR_14->missileDlightColor[2] );
 }


 if ( VAR_14->missileSound ) {
  vec3_t VAR_15;

  FUNC_1( &VAR_11->currentState.pos, VAR_8.time, VAR_15 );

  FUNC_10( VAR_11->currentState.number, VAR_11->lerpOrigin, VAR_15, VAR_14->missileSound );
 }


 FUNC_6 (&VAR_12, 0, sizeof(VAR_12));
 FUNC_4( VAR_11->lerpOrigin, VAR_12.origin);
 FUNC_4( VAR_11->lerpOrigin, VAR_12.oldorigin);

 if ( VAR_11->currentState.weapon == VAR_6 ) {
  VAR_12.reType = VAR_1;
  VAR_12.radius = 16;
  VAR_12.rotation = 0;
  VAR_12.customShader = VAR_10.media.plasmaBallShader;
  FUNC_9( &VAR_12 );
  return;
 }


 VAR_12.skinNum = VAR_8.clientFrame & 1;
 VAR_12.hModel = VAR_14->missileModel;
 VAR_12.renderfx = VAR_14->missileRenderfx | VAR_0;
 if ( FUNC_5( VAR_13->pos.trDelta, VAR_12.axis[0] ) == 0 ) {
  VAR_12.axis[0][2] = 1;
 }


 if ( VAR_13->pos.trType != VAR_4 ) {
  FUNC_3( VAR_12.axis, VAR_8.time / 4 );
 } else {






  {
   FUNC_3( VAR_12.axis, VAR_13->time );
  }
 }


 FUNC_2( &VAR_12, VAR_13, VAR_3 );
}
