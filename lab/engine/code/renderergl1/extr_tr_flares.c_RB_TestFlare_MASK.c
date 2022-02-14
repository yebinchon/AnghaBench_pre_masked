
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_12__ {float eyeZ; float fadeTime; float drawIntensity; void* visible; int windowY; int windowX; } ;
typedef TYPE_4__ flare_t ;
struct TYPE_11__ {float time; } ;
struct TYPE_10__ {int* projectionMatrix; } ;
struct TYPE_9__ {int c_flareTests; } ;
struct TYPE_15__ {TYPE_3__ refdef; TYPE_2__ viewParms; TYPE_1__ pc; } ;
struct TYPE_14__ {void* finishCalled; } ;
struct TYPE_13__ {float value; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int ,int,int,int ,int ,float*) ;
 void* VAR_5 ;
 TYPE_5__* VAR_6 ;

void FUNC_1( flare_t *VAR_7 ) {
 float VAR_8;
 qboolean VAR_9;
 float VAR_10;
 float VAR_11;

 VAR_2.pc.c_flareTests++;



 VAR_3.finishCalled = VAR_4;


 FUNC_0( VAR_7->windowX, VAR_7->windowY, 1, 1, VAR_0, VAR_1, &VAR_8 );

 VAR_11 = VAR_2.viewParms.projectionMatrix[14] /
  ( ( 2*VAR_8 - 1 ) * VAR_2.viewParms.projectionMatrix[11] - VAR_2.viewParms.projectionMatrix[10] );

 VAR_9 = ( -VAR_7->eyeZ - -VAR_11 ) < 24;

 if ( VAR_9 ) {
  if ( !VAR_7->visible ) {
   VAR_7->visible = VAR_5;
   VAR_7->fadeTime = VAR_2.refdef.time - 1;
  }
  VAR_10 = ( ( VAR_2.refdef.time - VAR_7->fadeTime ) /1000.0f ) * VAR_6->value;
 } else {
  if ( VAR_7->visible ) {
   VAR_7->visible = VAR_4;
   VAR_7->fadeTime = VAR_2.refdef.time - 1;
  }
  VAR_10 = 1.0f - ( ( VAR_2.refdef.time - VAR_7->fadeTime ) / 1000.0f ) * VAR_6->value;
 }

 if ( VAR_10 < 0 ) {
  VAR_10 = 0;
 }
 if ( VAR_10 > 1 ) {
  VAR_10 = 1;
 }

 VAR_7->drawIntensity = VAR_10;
}
