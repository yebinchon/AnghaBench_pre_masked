
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef double* vec3_t ;
typedef int torso ;
struct TYPE_19__ {float x; float y; float width; float height; int fov_x; int fov_y; int time; double* origin; double* lightingOrigin; int renderfx; double* oldorigin; int shaderRGBA; scalar_t__ hModel; int axis; int customSkin; int backlerp; int frame; int oldframe; int viewaxis; int rdflags; int member_0; } ;
typedef TYPE_2__ refdef_t ;
typedef int refdef ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_20__ {scalar_t__ pendingWeapon; int weaponTimer; scalar_t__ weapon; scalar_t__ lastWeapon; scalar_t__ currentWeapon; scalar_t__ realWeapon; int muzzleFlashTime; double* flashDlightColor; scalar_t__ chat; scalar_t__ weaponModel; int c1RGBA; scalar_t__ flashModel; scalar_t__ barrelModel; scalar_t__ torsoModel; int headSkin; scalar_t__ headModel; scalar_t__ legsModel; int torsoSkin; int legsSkin; TYPE_1__* animations; } ;
typedef TYPE_4__ playerInfo_t ;
typedef int legs ;
typedef int head ;
typedef int gun ;
typedef int flash ;
typedef int barrel ;
struct TYPE_21__ {float xscale; int yscale; } ;
struct TYPE_18__ {int numFrames; } ;


 int FUNC_0 (double*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 double FUNC_3 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (float*,float*,float*,float*) ;
 double FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_4__*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_4__*,double*,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,scalar_t__,char*) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*,scalar_t__,char*) ;
 int FUNC_11 (double*,double*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 int FUNC_12 (int,float) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_13 (TYPE_2__*,int ,int) ;
 int FUNC_14 () ;
 float FUNC_15 (double) ;
 int FUNC_16 (double*,int,double,double,double) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 () ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int ,int ) ;
 TYPE_5__ VAR_17 ;
 int VAR_18 ;

void FUNC_22( float VAR_19, float VAR_20, float VAR_21, float VAR_22, playerInfo_t *VAR_23, int VAR_24 ) {
 refdef_t VAR_25;
 refEntity_t VAR_26 = {0};
 refEntity_t VAR_27 = {0};
 refEntity_t VAR_28 = {0};
 refEntity_t VAR_29 = {0};
 refEntity_t VAR_30 = {0};
 refEntity_t VAR_31 = {0};
 vec3_t VAR_32;
 int VAR_33;
 vec3_t VAR_34 = {-16, -16, -24};
 vec3_t VAR_35 = {16, 16, 32};
 float VAR_36;
 float VAR_37;

 if ( !VAR_23->legsModel || !VAR_23->torsoModel || !VAR_23->headModel || !VAR_23->animations[0].numFrames ) {
  return;
 }

 VAR_15 = VAR_24;

 if ( VAR_23->pendingWeapon != VAR_11 && VAR_15 > VAR_23->weaponTimer ) {
  VAR_23->weapon = VAR_23->pendingWeapon;
  VAR_23->lastWeapon = VAR_23->pendingWeapon;
  VAR_23->pendingWeapon = VAR_11;
  VAR_23->weaponTimer = 0;
  if( VAR_23->currentWeapon != VAR_23->weapon ) {
   FUNC_21( VAR_18, VAR_0 );
  }
 }

 FUNC_4( &VAR_19, &VAR_20, &VAR_21, &VAR_22 );

 VAR_20 -= VAR_16;

 FUNC_13( &VAR_25, 0, sizeof( VAR_25 ) );
 FUNC_13( &VAR_26, 0, sizeof(VAR_26) );
 FUNC_13( &VAR_27, 0, sizeof(VAR_27) );
 FUNC_13( &VAR_28, 0, sizeof(VAR_28) );

 VAR_25.rdflags = VAR_3;

 FUNC_1( VAR_25.viewaxis );

 VAR_25.x = VAR_19;
 VAR_25.y = VAR_20;
 VAR_25.width = VAR_21;
 VAR_25.height = VAR_22;

 VAR_25.fov_x = (int)((float)VAR_25.width / VAR_17.xscale / 640.0f * 90.0f);
 VAR_37 = VAR_25.width / VAR_17.xscale / FUNC_15( VAR_25.fov_x / 360 * VAR_1 );
 VAR_25.fov_y = FUNC_12( VAR_25.height / VAR_17.yscale, VAR_37 );
 VAR_25.fov_y *= ( 360 / VAR_1 );


 VAR_36 = 0.7 * ( VAR_35[2] - VAR_34[2] );
 VAR_32[0] = VAR_36 / FUNC_15( FUNC_3(VAR_25.fov_x) * 0.5 );
 VAR_32[1] = 0.5 * ( VAR_34[1] + VAR_35[1] );
 VAR_32[2] = -0.5 * ( VAR_34[2] + VAR_35[2] );

 VAR_25.time = VAR_15;

 FUNC_18();


 FUNC_6( VAR_23, VAR_26.axis, VAR_27.axis, VAR_28.axis );


 FUNC_7( VAR_23, &VAR_26.oldframe, &VAR_26.frame, &VAR_26.backlerp,
   &VAR_27.oldframe, &VAR_27.frame, &VAR_27.backlerp );

 VAR_33 = VAR_4 | VAR_5;




 VAR_26.hModel = VAR_23->legsModel;
 VAR_26.customSkin = VAR_23->legsSkin;

 FUNC_11( VAR_32, VAR_26.origin );

 FUNC_11( VAR_32, VAR_26.lightingOrigin );
 VAR_26.renderfx = VAR_33;
 FUNC_11 (VAR_26.origin, VAR_26.oldorigin);

 FUNC_17( &VAR_26 );

 if (!VAR_26.hModel) {
  return;
 }




 VAR_27.hModel = VAR_23->torsoModel;
 if (!VAR_27.hModel) {
  return;
 }

 VAR_27.customSkin = VAR_23->torsoSkin;

 FUNC_11( VAR_32, VAR_27.lightingOrigin );

 FUNC_10( &VAR_27, &VAR_26, VAR_23->legsModel, "tag_torso");

 VAR_27.renderfx = VAR_33;

 FUNC_17( &VAR_27 );




 VAR_28.hModel = VAR_23->headModel;
 if (!VAR_28.hModel) {
  return;
 }
 VAR_28.customSkin = VAR_23->headSkin;

 FUNC_11( VAR_32, VAR_28.lightingOrigin );

 FUNC_10( &VAR_28, &VAR_27, VAR_23->torsoModel, "tag_head");

 VAR_28.renderfx = VAR_33;

 FUNC_17( &VAR_28 );




 if ( VAR_23->currentWeapon != VAR_10 ) {
  FUNC_13( &VAR_29, 0, sizeof(VAR_29) );
  VAR_29.hModel = VAR_23->weaponModel;
  if( VAR_23->currentWeapon == VAR_12 ) {
   FUNC_2( VAR_23->c1RGBA, VAR_29.shaderRGBA );
  }
  else {
   FUNC_2( VAR_14, VAR_29.shaderRGBA );
  }
  FUNC_11( VAR_32, VAR_29.lightingOrigin );
  FUNC_9( &VAR_29, &VAR_27, VAR_23->torsoModel, "tag_weapon");
  VAR_29.renderfx = VAR_33;
  FUNC_17( &VAR_29 );
 }




 if ( VAR_23->realWeapon == VAR_9 || VAR_23->realWeapon == VAR_8 || VAR_23->realWeapon == VAR_7 ) {
  vec3_t VAR_38;

  FUNC_13( &VAR_30, 0, sizeof(VAR_30) );
  FUNC_11( VAR_32, VAR_30.lightingOrigin );
  VAR_30.renderfx = VAR_33;

  VAR_30.hModel = VAR_23->barrelModel;
  VAR_38[VAR_13] = 0;
  VAR_38[VAR_2] = 0;
  VAR_38[VAR_6] = FUNC_5( VAR_23 );
  FUNC_0( VAR_38, VAR_30.axis );

  FUNC_10( &VAR_30, &VAR_29, VAR_23->weaponModel, "tag_barrel");

  FUNC_17( &VAR_30 );
 }




 if ( VAR_15 <= VAR_23->muzzleFlashTime ) {
  if ( VAR_23->flashModel ) {
   FUNC_13( &VAR_31, 0, sizeof(VAR_31) );
   VAR_31.hModel = VAR_23->flashModel;
   if( VAR_23->currentWeapon == VAR_12 ) {
    FUNC_2( VAR_23->c1RGBA, VAR_31.shaderRGBA );
   }
   else {
    FUNC_2( VAR_14, VAR_31.shaderRGBA );
   }
   FUNC_11( VAR_32, VAR_31.lightingOrigin );
   FUNC_9( &VAR_31, &VAR_29, VAR_23->weaponModel, "tag_flash");
   VAR_31.renderfx = VAR_33;
   FUNC_17( &VAR_31 );
  }


  if ( VAR_23->flashDlightColor[0] || VAR_23->flashDlightColor[1] || VAR_23->flashDlightColor[2] ) {
   FUNC_16( VAR_31.origin, 200 + (FUNC_14()&31), VAR_23->flashDlightColor[0],
    VAR_23->flashDlightColor[1], VAR_23->flashDlightColor[2] );
  }
 }




 if ( VAR_23->chat ) {
  FUNC_8( VAR_23, VAR_32, FUNC_19( "sprites/balloon3" ) );
 }




 VAR_32[0] -= 100;
 VAR_32[1] += 100;
 VAR_32[2] += 100;
 FUNC_16( VAR_32, 500, 1.0, 1.0, 1.0 );

 VAR_32[0] -= 100;
 VAR_32[1] -= 100;
 VAR_32[2] -= 100;
 FUNC_16( VAR_32, 500, 1.0, 0.0, 0.0 );

 FUNC_20( &VAR_25 );
}
