
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef double* vec3_t ;
typedef int torso ;
struct TYPE_21__ {float x; float y; float width; float height; int fov_x; int fov_y; int time; double* origin; double* lightingOrigin; int renderfx; double* oldorigin; scalar_t__ hModel; int axis; int customSkin; int backlerp; int frame; int oldframe; int viewaxis; int rdflags; int member_0; } ;
typedef TYPE_3__ refdef_t ;
typedef int refdef ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_22__ {scalar_t__ pendingWeapon; int weaponTimer; scalar_t__ weapon; scalar_t__ lastWeapon; scalar_t__ currentWeapon; scalar_t__ realWeapon; int muzzleFlashTime; double* flashDlightColor; scalar_t__ chat; scalar_t__ weaponModel; scalar_t__ flashModel; scalar_t__ barrelModel; scalar_t__ torsoModel; int headSkin; scalar_t__ headModel; scalar_t__ legsModel; int torsoSkin; int legsSkin; TYPE_2__* animations; } ;
typedef TYPE_5__ playerInfo_t ;
typedef int legs ;
typedef int head ;
typedef int gun ;
typedef int flash ;
typedef int barrel ;
struct TYPE_19__ {float xscale; int yscale; } ;
struct TYPE_23__ {TYPE_1__ uiDC; } ;
struct TYPE_20__ {int numFrames; } ;


 int FUNC_0 (double*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 double FUNC_2 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (float*,float*,float*,float*) ;
 double FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_5__*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_7 (TYPE_5__*,double*,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,scalar_t__,char*) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,scalar_t__,char*) ;
 int FUNC_10 (double*,double*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int FUNC_11 (int,float) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int FUNC_13 () ;
 float FUNC_14 (double) ;
 int FUNC_15 (double*,int,double,double,double) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int ,int ) ;
 TYPE_6__ VAR_15 ;
 int VAR_16 ;

void FUNC_21( float VAR_17, float VAR_18, float VAR_19, float VAR_20, playerInfo_t *VAR_21, int VAR_22 ) {
 refdef_t VAR_23;
 refEntity_t VAR_24 = {0};
 refEntity_t VAR_25 = {0};
 refEntity_t VAR_26 = {0};
 refEntity_t VAR_27 = {0};
 refEntity_t VAR_28 = {0};
 refEntity_t VAR_29 = {0};
 vec3_t VAR_30;
 int VAR_31;
 vec3_t VAR_32 = {-16, -16, -24};
 vec3_t VAR_33 = {16, 16, 32};
 float VAR_34;
 float VAR_35;

 if ( !VAR_21->legsModel || !VAR_21->torsoModel || !VAR_21->headModel || !VAR_21->animations[0].numFrames ) {
  return;
 }


 if (VAR_19 == 0 || VAR_20 == 0) {
  return;
 }

 VAR_13 = VAR_22;

 if ( VAR_21->pendingWeapon != VAR_11 && VAR_13 > VAR_21->weaponTimer ) {
  VAR_21->weapon = VAR_21->pendingWeapon;
  VAR_21->lastWeapon = VAR_21->pendingWeapon;
  VAR_21->pendingWeapon = VAR_11;
  VAR_21->weaponTimer = 0;
  if( VAR_21->currentWeapon != VAR_21->weapon ) {
   FUNC_20( VAR_16, VAR_0 );
  }
 }

 FUNC_3( &VAR_17, &VAR_18, &VAR_19, &VAR_20 );

 VAR_18 -= VAR_14;

 FUNC_12( &VAR_23, 0, sizeof( VAR_23 ) );
 FUNC_12( &VAR_24, 0, sizeof(VAR_24) );
 FUNC_12( &VAR_25, 0, sizeof(VAR_25) );
 FUNC_12( &VAR_26, 0, sizeof(VAR_26) );

 VAR_23.rdflags = VAR_3;

 FUNC_1( VAR_23.viewaxis );

 VAR_23.x = VAR_17;
 VAR_23.y = VAR_18;
 VAR_23.width = VAR_19;
 VAR_23.height = VAR_20;

 VAR_23.fov_x = (int)((float)VAR_23.width / VAR_15.uiDC.xscale / 640.0f * 90.0f);
 VAR_35 = VAR_23.width / VAR_15.uiDC.xscale / FUNC_14( VAR_23.fov_x / 360 * VAR_1 );
 VAR_23.fov_y = FUNC_11( VAR_23.height / VAR_15.uiDC.yscale, VAR_35 );
 VAR_23.fov_y *= ( 360 / (float)VAR_1 );


 VAR_34 = 0.7 * ( VAR_33[2] - VAR_32[2] );
 VAR_30[0] = VAR_34 / FUNC_14( FUNC_2(VAR_23.fov_x) * 0.5 );
 VAR_30[1] = 0.5 * ( VAR_32[1] + VAR_33[1] );
 VAR_30[2] = -0.5 * ( VAR_32[2] + VAR_33[2] );

 VAR_23.time = VAR_13;

 FUNC_17();


 FUNC_5( VAR_21, VAR_24.axis, VAR_25.axis, VAR_26.axis );


 FUNC_6( VAR_21, &VAR_24.oldframe, &VAR_24.frame, &VAR_24.backlerp,
   &VAR_25.oldframe, &VAR_25.frame, &VAR_25.backlerp );

 VAR_31 = VAR_4 | VAR_5;




 VAR_24.hModel = VAR_21->legsModel;
 VAR_24.customSkin = VAR_21->legsSkin;

 FUNC_10( VAR_30, VAR_24.origin );

 FUNC_10( VAR_30, VAR_24.lightingOrigin );
 VAR_24.renderfx = VAR_31;
 FUNC_10 (VAR_24.origin, VAR_24.oldorigin);

 FUNC_16( &VAR_24 );

 if (!VAR_24.hModel) {
  return;
 }




 VAR_25.hModel = VAR_21->torsoModel;
 if (!VAR_25.hModel) {
  return;
 }

 VAR_25.customSkin = VAR_21->torsoSkin;

 FUNC_10( VAR_30, VAR_25.lightingOrigin );

 FUNC_9( &VAR_25, &VAR_24, VAR_21->legsModel, "tag_torso");

 VAR_25.renderfx = VAR_31;

 FUNC_16( &VAR_25 );




 VAR_26.hModel = VAR_21->headModel;
 if (!VAR_26.hModel) {
  return;
 }
 VAR_26.customSkin = VAR_21->headSkin;

 FUNC_10( VAR_30, VAR_26.lightingOrigin );

 FUNC_9( &VAR_26, &VAR_25, VAR_21->torsoModel, "tag_head");

 VAR_26.renderfx = VAR_31;

 FUNC_16( &VAR_26 );




 if ( VAR_21->currentWeapon != VAR_10 ) {
  FUNC_12( &VAR_27, 0, sizeof(VAR_27) );
  VAR_27.hModel = VAR_21->weaponModel;
  FUNC_10( VAR_30, VAR_27.lightingOrigin );
  FUNC_8( &VAR_27, &VAR_25, VAR_21->torsoModel, "tag_weapon");
  VAR_27.renderfx = VAR_31;
  FUNC_16( &VAR_27 );
 }




 if ( VAR_21->realWeapon == VAR_9 || VAR_21->realWeapon == VAR_8 || VAR_21->realWeapon == VAR_7 ) {
  vec3_t VAR_36;

  FUNC_12( &VAR_28, 0, sizeof(VAR_28) );
  FUNC_10( VAR_30, VAR_28.lightingOrigin );
  VAR_28.renderfx = VAR_31;

  VAR_28.hModel = VAR_21->barrelModel;
  VAR_36[VAR_12] = 0;
  VAR_36[VAR_2] = 0;
  VAR_36[VAR_6] = FUNC_4( VAR_21 );
  FUNC_0( VAR_36, VAR_28.axis );

  FUNC_9( &VAR_28, &VAR_27, VAR_21->weaponModel, "tag_barrel");

  FUNC_16( &VAR_28 );
 }




 if ( VAR_13 <= VAR_21->muzzleFlashTime ) {
  if ( VAR_21->flashModel ) {
   FUNC_12( &VAR_29, 0, sizeof(VAR_29) );
   VAR_29.hModel = VAR_21->flashModel;
   FUNC_10( VAR_30, VAR_29.lightingOrigin );
   FUNC_8( &VAR_29, &VAR_27, VAR_21->weaponModel, "tag_flash");
   VAR_29.renderfx = VAR_31;
   FUNC_16( &VAR_29 );
  }


  if ( VAR_21->flashDlightColor[0] || VAR_21->flashDlightColor[1] || VAR_21->flashDlightColor[2] ) {
   FUNC_15( VAR_29.origin, 200 + (FUNC_13()&31), VAR_21->flashDlightColor[0],
    VAR_21->flashDlightColor[1], VAR_21->flashDlightColor[2] );
  }
 }




 if ( VAR_21->chat ) {
  FUNC_7( VAR_21, VAR_30, FUNC_18( "sprites/balloon3" ) );
 }




 VAR_30[0] -= 100;
 VAR_30[1] += 100;
 VAR_30[2] += 100;
 FUNC_15( VAR_30, 500, 1.0, 1.0, 1.0 );

 VAR_30[0] -= 100;
 VAR_30[1] -= 100;
 VAR_30[2] -= 100;
 FUNC_15( VAR_30, 500, 1.0, 0.0, 0.0 );

 FUNC_19( &VAR_23 );
}
