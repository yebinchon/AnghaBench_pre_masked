
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct TYPE_28__ {int* weaponMidpoint; int weaponModel; scalar_t__ barrelModel; } ;
typedef TYPE_4__ weaponInfo_t ;
typedef int* vec3_t ;
struct TYPE_29__ {int* origin; int radius; int* shaderRGBA; int** axis; int* oldorigin; int* lightingOrigin; void* nonNormalizedAxes; scalar_t__ hModel; int renderfx; int shadowPlane; int customShader; int reType; } ;
typedef TYPE_5__ refEntity_t ;
struct TYPE_30__ {scalar_t__ giType; scalar_t__ move_type; size_t giTag; } ;
typedef TYPE_6__ gitem_t ;
struct TYPE_31__ {size_t modelindex; int eFlags; double number; int* angles; } ;
typedef TYPE_7__ entityState_t ;
typedef int ent ;
struct TYPE_32__ {int c1RGBA; } ;
typedef TYPE_8__ clientInfo_t ;
struct TYPE_33__ {int* lerpOrigin; int* lerpAngles; int miscTime; TYPE_7__ currentState; } ;
typedef TYPE_9__ centity_t ;
typedef int barrel ;
struct TYPE_27__ {int weaponHoverSound; } ;
struct TYPE_25__ {size_t clientNum; } ;
struct TYPE_26__ {TYPE_1__ ps; } ;
struct TYPE_24__ {int time; int* autoAnglesFast; int* autoAngles; TYPE_2__* snap; int autoAxis; int autoAxisFast; } ;
struct TYPE_23__ {scalar_t__* models; int icon; } ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {TYPE_3__ media; TYPE_8__* clientinfo; } ;


 int FUNC_0 (int*,int**) ;
 int FUNC_1 (int ,int**) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int*,float,int*) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 TYPE_6__* VAR_16 ;
 size_t VAR_17 ;
 TYPE_16__ VAR_18 ;
 TYPE_15__* VAR_19 ;
 TYPE_14__ VAR_20 ;
 TYPE_4__* VAR_21 ;
 TYPE_12__ VAR_22 ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;
 void* VAR_23 ;
 void* VAR_24 ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (double,int*,int ,int ) ;
 int VAR_25 ;

__attribute__((used)) static void FUNC_12( centity_t *VAR_26 ) {
 refEntity_t VAR_27;
 entityState_t *VAR_28;
 gitem_t *VAR_29;
 int VAR_30;
 float VAR_31;
 float VAR_32;
 weaponInfo_t *VAR_33;

 VAR_28 = &VAR_26->currentState;
 if ( VAR_28->modelindex >= VAR_17 ) {
  FUNC_3( "Bad item index %i on entity", VAR_28->modelindex );
 }


 if ( !VAR_28->modelindex || ( VAR_28->eFlags & VAR_0 ) ) {
  return;
 }

 VAR_29 = &VAR_16[ VAR_28->modelindex ];
 if ( VAR_20.integer && VAR_29->giType != VAR_7 ) {
  FUNC_9( &VAR_27, 0, sizeof( VAR_27 ) );
  VAR_27.reType = VAR_13;
  FUNC_6( VAR_26->lerpOrigin, VAR_27.origin );
  VAR_27.radius = 14;
  VAR_27.customShader = VAR_19[VAR_28->modelindex].icon;
  VAR_27.shaderRGBA[0] = 255;
  VAR_27.shaderRGBA[1] = 255;
  VAR_27.shaderRGBA[2] = 255;
  VAR_27.shaderRGBA[3] = 255;
  FUNC_10(&VAR_27);
  return;
 }

 FUNC_9( &VAR_27, 0, sizeof( VAR_27 ) );

 if ( VAR_29->move_type == VAR_9 ) {

  VAR_32 = 0.005 + VAR_26->currentState.number * 0.00001;
  VAR_26->lerpOrigin[2] += 4 + FUNC_8( ( VAR_18.time + 1000 ) * VAR_32 ) * 4;

  if ( VAR_29->giType == VAR_4 ) {
   FUNC_6( VAR_18.autoAnglesFast, VAR_26->lerpAngles );
   FUNC_1( VAR_18.autoAxisFast, VAR_27.axis );
  } else {
   FUNC_6( VAR_18.autoAngles, VAR_26->lerpAngles );
   FUNC_1( VAR_18.autoAxis, VAR_27.axis );
  }
 } else {
  VAR_26->lerpOrigin[2] += 4;
  FUNC_0( VAR_28->angles, VAR_27.axis );
 }

 VAR_33 = ((void*)0);



 if ( VAR_29->giType == VAR_8 ) {
  VAR_33 = &VAR_21[VAR_29->giTag];
  VAR_26->lerpOrigin[0] -=
   VAR_33->weaponMidpoint[0] * VAR_27.axis[0][0] +
   VAR_33->weaponMidpoint[1] * VAR_27.axis[1][0] +
   VAR_33->weaponMidpoint[2] * VAR_27.axis[2][0];
  VAR_26->lerpOrigin[1] -=
   VAR_33->weaponMidpoint[0] * VAR_27.axis[0][1] +
   VAR_33->weaponMidpoint[1] * VAR_27.axis[1][1] +
   VAR_33->weaponMidpoint[2] * VAR_27.axis[2][1];
  VAR_26->lerpOrigin[2] -=
   VAR_33->weaponMidpoint[0] * VAR_27.axis[0][2] +
   VAR_33->weaponMidpoint[1] * VAR_27.axis[1][2] +
   VAR_33->weaponMidpoint[2] * VAR_27.axis[2][2];

  VAR_26->lerpOrigin[2] += 8;
 }

 if( VAR_29->giType == VAR_8 && VAR_29->giTag == VAR_14 ) {
  clientInfo_t *VAR_34 = &VAR_22.clientinfo[VAR_18.snap->ps.clientNum];
  FUNC_2( VAR_34->c1RGBA, VAR_27.shaderRGBA );
 }

 VAR_27.hModel = VAR_19[VAR_28->modelindex].models[0];

 FUNC_6( VAR_26->lerpOrigin, VAR_27.origin);
 FUNC_6( VAR_26->lerpOrigin, VAR_27.oldorigin);

 VAR_27.nonNormalizedAxes = VAR_23;


 VAR_30 = VAR_18.time - VAR_26->miscTime;
 if ( VAR_30 >= 0 && VAR_30 < VAR_2 ) {
  VAR_31 = (float)VAR_30 / VAR_2;
  FUNC_7( VAR_27.axis[0], VAR_31, VAR_27.axis[0] );
  FUNC_7( VAR_27.axis[1], VAR_31, VAR_27.axis[1] );
  FUNC_7( VAR_27.axis[2], VAR_31, VAR_27.axis[2] );
  VAR_27.nonNormalizedAxes = VAR_24;
 } else {
  VAR_31 = 1.0;
 }



 if ( ( VAR_29->giType == VAR_8 ) ||
   ( VAR_29->giType == VAR_3 ) ) {
  VAR_27.renderfx |= VAR_11;
 }


 if ( VAR_29->giType == VAR_8 ) {
  FUNC_7( VAR_27.axis[0], 1.5, VAR_27.axis[0] );
  FUNC_7( VAR_27.axis[1], 1.5, VAR_27.axis[1] );
  FUNC_7( VAR_27.axis[2], 1.5, VAR_27.axis[2] );
  VAR_27.nonNormalizedAxes = VAR_24;



 }
 FUNC_10(&VAR_27);

 if ( VAR_29->giType == VAR_8 && VAR_33 && VAR_33->barrelModel ) {
  refEntity_t VAR_35;
  vec3_t VAR_36;

  FUNC_9( &VAR_35, 0, sizeof( VAR_35 ) );

  VAR_35.hModel = VAR_33->barrelModel;

  FUNC_6( VAR_27.lightingOrigin, VAR_35.lightingOrigin );
  VAR_35.shadowPlane = VAR_27.shadowPlane;
  VAR_35.renderfx = VAR_27.renderfx;

  VAR_36[VAR_15] = 0;
  VAR_36[VAR_10] = 0;
  VAR_36[VAR_12] = 0;
  FUNC_0( VAR_36, VAR_35.axis );

  FUNC_4( &VAR_35, &VAR_27, VAR_33->weaponModel, "tag_barrel" );

  VAR_35.nonNormalizedAxes = VAR_27.nonNormalizedAxes;

  FUNC_10( &VAR_35 );
 }


 if ( !VAR_20.integer )
 {
  vec3_t VAR_37;

  FUNC_5( VAR_37 );

  if ( VAR_29->giType == VAR_4 || VAR_29->giType == VAR_6 )
  {
   if ( ( VAR_27.hModel = VAR_19[VAR_28->modelindex].models[1] ) != 0 )
   {
    if ( VAR_29->giType == VAR_6 )
    {
     VAR_27.origin[2] += 12;
     VAR_37[1] = ( VAR_18.time & 1023 ) * 360 / -1024.0f;
    }
    FUNC_0( VAR_37, VAR_27.axis );


    if ( VAR_31 != 1.0 ) {
     FUNC_7( VAR_27.axis[0], VAR_31, VAR_27.axis[0] );
     FUNC_7( VAR_27.axis[1], VAR_31, VAR_27.axis[1] );
     FUNC_7( VAR_27.axis[2], VAR_31, VAR_27.axis[2] );
     VAR_27.nonNormalizedAxes = VAR_24;
    }
    FUNC_10( &VAR_27 );
   }
  }
 }
}
