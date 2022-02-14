
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_12__ ;


typedef size_t weapon_t ;
struct TYPE_30__ {scalar_t__* flashDlightColor; scalar_t__ weaponModel; scalar_t__ flashModel; scalar_t__ barrelModel; scalar_t__ readySound; scalar_t__ firingSound; } ;
typedef TYPE_4__ weaponInfo_t ;
typedef int* vec3_t ;
struct TYPE_31__ {int* shaderRGBA; int origin; int * axis; scalar_t__ hModel; int renderfx; int shadowPlane; int lightingOrigin; scalar_t__ backlerp; int frame; int oldframe; } ;
typedef TYPE_5__ refEntity_t ;
typedef int playerState_t ;
struct TYPE_32__ {int axis; int * origin; } ;
typedef TYPE_6__ orientation_t ;
typedef int gun ;
typedef int flash ;
struct TYPE_33__ {int* c1RGBA; int* color1; } ;
typedef TYPE_7__ clientInfo_t ;
struct TYPE_29__ {size_t weapon; size_t clientNum; int eFlags; scalar_t__ number; int powerups; } ;
struct TYPE_28__ {scalar_t__ railFireTime; int lightningFiring; } ;
struct TYPE_34__ {scalar_t__ muzzleFlashTime; TYPE_3__ currentState; int lerpOrigin; TYPE_2__ pe; } ;
typedef TYPE_8__ centity_t ;
typedef int barrel ;
struct TYPE_27__ {scalar_t__ clientNum; } ;
struct TYPE_26__ {scalar_t__ time; TYPE_1__ predictedPlayerState; scalar_t__ renderingThirdPerson; } ;
struct TYPE_25__ {int integer; } ;
struct TYPE_24__ {TYPE_7__* clientinfo; } ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*,scalar_t__,char*) ;
 int FUNC_6 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ,int *,int *) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_16__ VAR_9 ;
 TYPE_15__ VAR_10 ;
 TYPE_8__* VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_12__ VAR_13 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_6__*,scalar_t__,int ,int ,scalar_t__,char*) ;
 int FUNC_16 (scalar_t__,int ,int ,scalar_t__) ;
 int VAR_16 ;

void FUNC_17( refEntity_t *VAR_17, playerState_t *VAR_18, centity_t *VAR_19, int VAR_20 ) {
 refEntity_t VAR_21;
 refEntity_t VAR_22;
 refEntity_t VAR_23;
 vec3_t VAR_24;
 weapon_t VAR_25;
 weaponInfo_t *VAR_26;
 centity_t *VAR_27;
 orientation_t VAR_28;

 VAR_25 = VAR_19->currentState.weapon;

 FUNC_6( VAR_25 );
 VAR_26 = &VAR_12[VAR_25];


 FUNC_11( &VAR_21, 0, sizeof( VAR_21 ) );
 FUNC_8( VAR_17->lightingOrigin, VAR_21.lightingOrigin );
 VAR_21.shadowPlane = VAR_17->shadowPlane;
 VAR_21.renderfx = VAR_17->renderfx;


 if( VAR_25 == VAR_7 ) {
  clientInfo_t *VAR_29 = &VAR_13.clientinfo[VAR_19->currentState.clientNum];
  if( VAR_19->pe.railFireTime + 1500 > VAR_9.time ) {
   int VAR_30 = 255 * ( VAR_9.time - VAR_19->pe.railFireTime ) / 1500;
   VAR_21.shaderRGBA[0] = ( VAR_29->c1RGBA[0] * VAR_30 ) >> 8;
   VAR_21.shaderRGBA[1] = ( VAR_29->c1RGBA[1] * VAR_30 ) >> 8;
   VAR_21.shaderRGBA[2] = ( VAR_29->c1RGBA[2] * VAR_30 ) >> 8;
   VAR_21.shaderRGBA[3] = 255;
  }
  else {
   FUNC_1( VAR_29->c1RGBA, VAR_21.shaderRGBA );
  }
 }

 VAR_21.hModel = VAR_26->weaponModel;
 if (!VAR_21.hModel) {
  return;
 }

 if ( !VAR_18 ) {

  VAR_19->pe.lightningFiring = VAR_14;
  if ( ( VAR_19->currentState.eFlags & VAR_0 ) && VAR_26->firingSound ) {

   FUNC_16( VAR_19->currentState.number, VAR_19->lerpOrigin, VAR_16, VAR_26->firingSound );
   VAR_19->pe.lightningFiring = VAR_15;
  } else if ( VAR_26->readySound ) {
   FUNC_16( VAR_19->currentState.number, VAR_19->lerpOrigin, VAR_16, VAR_26->readySound );
  }
 }

 FUNC_15(&VAR_28, VAR_17->hModel, VAR_17->oldframe, VAR_17->frame,
  1.0 - VAR_17->backlerp, "tag_weapon");
 FUNC_8(VAR_17->origin, VAR_21.origin);

 FUNC_9(VAR_21.origin, VAR_28.origin[0], VAR_17->axis[0], VAR_21.origin);


 if(VAR_18 && VAR_10.integer == 2)
  FUNC_9(VAR_21.origin, -VAR_28.origin[1], VAR_17->axis[1], VAR_21.origin);
 else if(!VAR_18 || VAR_10.integer != 3)
         FUNC_9(VAR_21.origin, VAR_28.origin[1], VAR_17->axis[1], VAR_21.origin);

 FUNC_9(VAR_21.origin, VAR_28.origin[2], VAR_17->axis[2], VAR_21.origin);

 FUNC_7(VAR_28.axis, ((refEntity_t *)VAR_17)->axis, VAR_21.axis);
 VAR_21.backlerp = VAR_17->backlerp;

 FUNC_2( &VAR_21, VAR_19->currentState.powerups );


 if ( VAR_26->barrelModel ) {
  FUNC_11( &VAR_22, 0, sizeof( VAR_22 ) );
  FUNC_8( VAR_17->lightingOrigin, VAR_22.lightingOrigin );
  VAR_22.shadowPlane = VAR_17->shadowPlane;
  VAR_22.renderfx = VAR_17->renderfx;

  VAR_22.hModel = VAR_26->barrelModel;
  VAR_24[VAR_8] = 0;
  VAR_24[VAR_2] = 0;
  VAR_24[VAR_3] = FUNC_4( VAR_19 );
  FUNC_0( VAR_24, VAR_22.axis );

  FUNC_5( &VAR_22, &VAR_21, VAR_26->weaponModel, "tag_barrel" );

  FUNC_2( &VAR_22, VAR_19->currentState.powerups );
 }


 VAR_27 = &VAR_11[VAR_19->currentState.clientNum];




 if( ( VAR_27 - VAR_11 ) != VAR_19->currentState.clientNum ) {
  VAR_27 = VAR_19;
 }


 if ( ( VAR_25 == VAR_6 || VAR_25 == VAR_4 || VAR_25 == VAR_5 )
  && ( VAR_27->currentState.eFlags & VAR_0 ) )
 {

 } else {

  if ( VAR_9.time - VAR_19->muzzleFlashTime > VAR_1 ) {
   return;
  }
 }

 FUNC_11( &VAR_23, 0, sizeof( VAR_23 ) );
 FUNC_8( VAR_17->lightingOrigin, VAR_23.lightingOrigin );
 VAR_23.shadowPlane = VAR_17->shadowPlane;
 VAR_23.renderfx = VAR_17->renderfx;

 VAR_23.hModel = VAR_26->flashModel;
 if (!VAR_23.hModel) {
  return;
 }
 VAR_24[VAR_8] = 0;
 VAR_24[VAR_2] = 0;
 VAR_24[VAR_3] = FUNC_10() * 10;
 FUNC_0( VAR_24, VAR_23.axis );


 if ( VAR_25 == VAR_7 ) {
  clientInfo_t *VAR_31;

  VAR_31 = &VAR_13.clientinfo[ VAR_19->currentState.clientNum ];
  VAR_23.shaderRGBA[0] = 255 * VAR_31->color1[0];
  VAR_23.shaderRGBA[1] = 255 * VAR_31->color1[1];
  VAR_23.shaderRGBA[2] = 255 * VAR_31->color1[2];
 }

 FUNC_5( &VAR_23, &VAR_21, VAR_26->weaponModel, "tag_flash");
 FUNC_14( &VAR_23 );

 if ( VAR_18 || VAR_9.renderingThirdPerson ||
  VAR_19->currentState.number != VAR_9.predictedPlayerState.clientNum ) {

  FUNC_3( VAR_27, VAR_23.origin );

  if ( VAR_26->flashDlightColor[0] || VAR_26->flashDlightColor[1] || VAR_26->flashDlightColor[2] ) {
   FUNC_13( VAR_23.origin, 300 + (FUNC_12()&31), VAR_26->flashDlightColor[0],
    VAR_26->flashDlightColor[1], VAR_26->flashDlightColor[2] );
  }
 }
}
