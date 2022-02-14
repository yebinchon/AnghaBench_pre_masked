
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_13__ {float eyeZ; float fadeTime; float drawIntensity; void* visible; int windowY; int windowX; } ;
typedef TYPE_4__ flare_t ;
struct TYPE_12__ {float time; } ;
struct TYPE_11__ {int* projectionMatrix; } ;
struct TYPE_10__ {int c_flareTests; } ;
struct TYPE_17__ {TYPE_3__ refdef; TYPE_2__ viewParms; TYPE_1__ pc; } ;
struct TYPE_16__ {int * currentFBO; void* finishCalled; } ;
struct TYPE_15__ {float value; } ;
struct TYPE_14__ {int * msaaResolveFbo; } ;
typedef int FBO_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ,int ,int,int,int ,int ,float*) ;
 void* VAR_5 ;
 TYPE_6__* VAR_6 ;
 TYPE_5__ VAR_7 ;

void FUNC_2( flare_t *VAR_8 ) {
 float VAR_9;
 qboolean VAR_10;
 float VAR_11;
 float VAR_12;
 FBO_t *VAR_13;

 VAR_2.pc.c_flareTests++;



 VAR_3.finishCalled = VAR_4;


 VAR_13 = VAR_3.currentFBO;
 if (VAR_7.msaaResolveFbo)
 {
  FUNC_0(VAR_7.msaaResolveFbo);
 }


 FUNC_1( VAR_8->windowX, VAR_8->windowY, 1, 1, VAR_0, VAR_1, &VAR_9 );


 if (VAR_7.msaaResolveFbo)
 {
  FUNC_0(VAR_13);
 }

 VAR_12 = VAR_2.viewParms.projectionMatrix[14] /
  ( ( 2*VAR_9 - 1 ) * VAR_2.viewParms.projectionMatrix[11] - VAR_2.viewParms.projectionMatrix[10] );

 VAR_10 = ( -VAR_8->eyeZ - -VAR_12 ) < 24;

 if ( VAR_10 ) {
  if ( !VAR_8->visible ) {
   VAR_8->visible = VAR_5;
   VAR_8->fadeTime = VAR_2.refdef.time - 1;
  }
  VAR_11 = ( ( VAR_2.refdef.time - VAR_8->fadeTime ) /1000.0f ) * VAR_6->value;
 } else {
  if ( VAR_8->visible ) {
   VAR_8->visible = VAR_4;
   VAR_8->fadeTime = VAR_2.refdef.time - 1;
  }
  VAR_11 = 1.0f - ( ( VAR_2.refdef.time - VAR_8->fadeTime ) / 1000.0f ) * VAR_6->value;
 }

 if ( VAR_11 < 0 ) {
  VAR_11 = 0;
 }
 if ( VAR_11 > 1 ) {
  VAR_11 = 1;
 }

 VAR_8->drawIntensity = VAR_11;
}
