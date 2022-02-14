
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


typedef double* vec3_t ;
typedef scalar_t__ sfxHandle_t ;
typedef scalar_t__ qhandle_t ;
typedef int qboolean ;
struct TYPE_8__ {int* shaderRGBA; } ;
struct TYPE_11__ {float light; int* lightColor; int* color; TYPE_1__ refEntity; } ;
typedef TYPE_4__ localEntity_t ;
typedef int impactSound_t ;
struct TYPE_13__ {int integer; } ;
struct TYPE_10__ {scalar_t__ holeMarkShader; scalar_t__ dishFlashModel; scalar_t__ grenadeExplosionShader; scalar_t__ burnMarkShader; scalar_t__ rocketExplosionShader; scalar_t__ ringFlashModel; scalar_t__ railExplosionShader; scalar_t__ energyMarkShader; scalar_t__ plasmaExplosionShader; scalar_t__ bfgExplosionShader; scalar_t__ bulletFlashModel; scalar_t__ bulletExplosionShader; scalar_t__ bulletMarkShader; scalar_t__ sfx_ric3; scalar_t__ sfx_ric2; scalar_t__ sfx_ric1; scalar_t__ sfx_chghit; scalar_t__ sfx_chghitmetal; scalar_t__ sfx_chghitflesh; scalar_t__ sfx_rockexp; scalar_t__ sfx_plasmaexp; scalar_t__ sfx_proxexp; scalar_t__ sfx_lghit3; scalar_t__ sfx_lghit1; scalar_t__ sfx_lghit2; scalar_t__ sfx_nghit; scalar_t__ sfx_nghitmetal; scalar_t__ sfx_nghitflesh; } ;
struct TYPE_12__ {TYPE_2__* clientinfo; TYPE_3__ media; } ;
struct TYPE_9__ {double* color1; } ;


 int FUNC_0 (scalar_t__,double*,double*,int,int,int,int,int,int,float,int) ;
 TYPE_4__* FUNC_1 (double*,double*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_2 (char*,double*,double*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (double*,int*) ;
 int FUNC_4 (double*,int,double*,double*) ;
 int FUNC_5 (double*,int,double*) ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (double*,int ,int ,scalar_t__) ;

void FUNC_9( int VAR_8, int VAR_9, vec3_t VAR_10, vec3_t VAR_11, impactSound_t VAR_12 ) {
 qhandle_t VAR_13;
 qhandle_t VAR_14;
 qhandle_t VAR_15;
 sfxHandle_t VAR_16;
 float VAR_17;
 float VAR_18;
 vec3_t VAR_19;
 localEntity_t *VAR_20;
 int VAR_21;
 qboolean VAR_22;
 qboolean VAR_23;
 int VAR_24;
 vec3_t VAR_25;
 vec3_t VAR_26;

 VAR_13 = 0;
 VAR_15 = 0;
 VAR_18 = 0;
 VAR_19[0] = 1;
 VAR_19[1] = 1;
 VAR_19[2] = 0;


 VAR_23 = VAR_6;
 VAR_24 = 600;

 switch ( VAR_8 ) {
 default:
 case 135:

  VAR_21 = FUNC_6() & 3;
  if ( VAR_21 < 2 ) {
   VAR_16 = VAR_5.media.sfx_lghit2;
  } else if ( VAR_21 == 2 ) {
   VAR_16 = VAR_5.media.sfx_lghit1;
  } else {
   VAR_16 = VAR_5.media.sfx_lghit3;
  }
  VAR_14 = VAR_5.media.holeMarkShader;
  VAR_17 = 12;
  break;
 case 136:
  VAR_13 = VAR_5.media.dishFlashModel;
  VAR_15 = VAR_5.media.grenadeExplosionShader;
  VAR_16 = VAR_5.media.sfx_rockexp;
  VAR_14 = VAR_5.media.burnMarkShader;
  VAR_17 = 64;
  VAR_18 = 300;
  VAR_23 = VAR_7;
  break;
 case 129:
  VAR_13 = VAR_5.media.dishFlashModel;
  VAR_15 = VAR_5.media.rocketExplosionShader;
  VAR_16 = VAR_5.media.sfx_rockexp;
  VAR_14 = VAR_5.media.burnMarkShader;
  VAR_17 = 64;
  VAR_18 = 300;
  VAR_23 = VAR_7;
  VAR_24 = 1000;
  VAR_19[0] = 1;
  VAR_19[1] = 0.75;
  VAR_19[2] = 0.0;
  if (VAR_4.integer == 0) {

   FUNC_4( VAR_10, 24, VAR_11, VAR_25 );
   FUNC_5( VAR_11, 64, VAR_26 );

   FUNC_2( "explode1", VAR_25, VAR_26, 1400, 20, 30 );
  }
  break;
 case 130:
  VAR_13 = VAR_5.media.ringFlashModel;
  VAR_15 = VAR_5.media.railExplosionShader;

  VAR_16 = VAR_5.media.sfx_plasmaexp;
  VAR_14 = VAR_5.media.energyMarkShader;
  VAR_17 = 24;
  break;
 case 132:
  VAR_13 = VAR_5.media.ringFlashModel;
  VAR_15 = VAR_5.media.plasmaExplosionShader;
  VAR_16 = VAR_5.media.sfx_plasmaexp;
  VAR_14 = VAR_5.media.energyMarkShader;
  VAR_17 = 16;
  break;
 case 138:
  VAR_13 = VAR_5.media.dishFlashModel;
  VAR_15 = VAR_5.media.bfgExplosionShader;
  VAR_16 = VAR_5.media.sfx_rockexp;
  VAR_14 = VAR_5.media.burnMarkShader;
  VAR_17 = 32;
  VAR_23 = VAR_7;
  break;
 case 128:
  VAR_13 = VAR_5.media.bulletFlashModel;
  VAR_15 = VAR_5.media.bulletExplosionShader;
  VAR_14 = VAR_5.media.bulletMarkShader;
  VAR_16 = 0;
  VAR_17 = 4;
  break;
 case 134:
  VAR_13 = VAR_5.media.bulletFlashModel;
  VAR_15 = VAR_5.media.bulletExplosionShader;
  VAR_14 = VAR_5.media.bulletMarkShader;

  VAR_21 = FUNC_6() & 3;
  if ( VAR_21 == 0 ) {
   VAR_16 = VAR_5.media.sfx_ric1;
  } else if ( VAR_21 == 1 ) {
   VAR_16 = VAR_5.media.sfx_ric2;
  } else {
   VAR_16 = VAR_5.media.sfx_ric3;
  }

  VAR_17 = 8;
  break;
 }

 if ( VAR_16 ) {
  FUNC_8( VAR_10, VAR_1, VAR_0, VAR_16 );
 }




 if ( VAR_13 ) {
  VAR_20 = FUNC_1( VAR_10, VAR_11,
          VAR_13, VAR_15,
          VAR_24, VAR_23 );
  VAR_20->light = VAR_18;
  FUNC_3( VAR_19, VAR_20->lightColor );
  if ( VAR_8 == 130 ) {

   FUNC_3( VAR_5.clientinfo[VAR_9].color1, VAR_20->color );
   VAR_20->refEntity.shaderRGBA[0] = VAR_20->color[0] * 0xff;
   VAR_20->refEntity.shaderRGBA[1] = VAR_20->color[1] * 0xff;
   VAR_20->refEntity.shaderRGBA[2] = VAR_20->color[2] * 0xff;
   VAR_20->refEntity.shaderRGBA[3] = 0xff;
  }
 }




 VAR_22 = (VAR_14 == VAR_5.media.energyMarkShader);
 if ( VAR_8 == 130 ) {
  float *VAR_27;


  VAR_27 = VAR_5.clientinfo[VAR_9].color1;
  FUNC_0( VAR_14, VAR_10, VAR_11, FUNC_7()*360, VAR_27[0],VAR_27[1], VAR_27[2],1, VAR_22, VAR_17, VAR_6 );
 } else {
  FUNC_0( VAR_14, VAR_10, VAR_11, FUNC_7()*360, 1,1,1,1, VAR_22, VAR_17, VAR_6 );
 }
}
