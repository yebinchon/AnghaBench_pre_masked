
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int vec3_t ;
struct TYPE_24__ {float fraction; int endpos; } ;
typedef TYPE_6__ trace_t ;
typedef int rendererinfos ;
struct TYPE_25__ {int renderfx; float radius; int customShader; int origin; int reType; } ;
typedef TYPE_7__ refEntity_t ;
typedef int qhandle_t ;
typedef int ent ;
struct TYPE_23__ {float fov_x; int vieworg; int * viewaxis; } ;
struct TYPE_22__ {float vidWidth; } ;
struct TYPE_21__ {int * crosshairShader; } ;
struct TYPE_19__ {scalar_t__* persistant; } ;
struct TYPE_20__ {TYPE_1__ ps; } ;
struct TYPE_18__ {float time; float itemPickupBlendTime; TYPE_5__ refdef; scalar_t__ renderingThirdPerson; TYPE_2__* snap; } ;
struct TYPE_17__ {float value; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {TYPE_4__ glconfig; TYPE_3__ media; } ;


 int FUNC_0 (TYPE_6__*,int ,int *,int *,int ,int ,int ) ;
 float VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,float,int ,int ) ;
 float FUNC_3 (char*) ;
 TYPE_13__ VAR_9 ;
 TYPE_12__ VAR_10 ;
 TYPE_11__ VAR_11 ;
 TYPE_10__ VAR_12 ;
 int FUNC_4 (TYPE_7__*,int ,int) ;
 float FUNC_5 (float) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_8(void)
{
 float VAR_13;
 qhandle_t VAR_14;
 float VAR_15;
 int VAR_16;

 trace_t VAR_17;
 vec3_t VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22;
 char VAR_23[128];
 refEntity_t VAR_24;

 if ( !VAR_11.integer ) {
  return;
 }

 if ( VAR_9.snap->ps.persistant[VAR_4] == VAR_8) {
  return;
 }

 if ( VAR_9.renderingThirdPerson ) {
  return;
 }

 VAR_13 = VAR_10.value;


 VAR_15 = VAR_9.time - VAR_9.itemPickupBlendTime;
 if ( VAR_15 > 0 && VAR_15 < VAR_0 ) {
  VAR_15 /= VAR_0;
  VAR_13 *= ( 1 + VAR_15 );
 }

 VAR_16 = VAR_11.integer;
 if (VAR_16 < 0) {
  VAR_16 = 0;
 }
 VAR_14 = VAR_12.media.crosshairShader[ VAR_16 % VAR_3 ];






 FUNC_6("r_zProj", VAR_23, sizeof(VAR_23));
 VAR_20 = FUNC_3(VAR_23);
 FUNC_6("r_stereoSeparation", VAR_23, sizeof(VAR_23));
 VAR_19 = VAR_20 / FUNC_3(VAR_23);

 VAR_22 = VAR_20 * FUNC_5(VAR_9.refdef.fov_x * VAR_2 / 360.0f);


 VAR_21 = VAR_12.glconfig.vidWidth * VAR_19 * VAR_20 / (2 * VAR_22);
 FUNC_2(VAR_9.refdef.vieworg, VAR_21, VAR_9.refdef.viewaxis[0], VAR_18);
 FUNC_0(&VAR_17, VAR_9.refdef.vieworg, ((void*)0), ((void*)0), VAR_18, 0, VAR_1);

 FUNC_4(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.reType = VAR_7;
 VAR_24.renderfx = VAR_6 | VAR_5;

 FUNC_1(VAR_17.endpos, VAR_24.origin);


 VAR_24.radius = VAR_13 / 640 * VAR_22 * VAR_17.fraction * VAR_21 / VAR_20;
 VAR_24.customShader = VAR_14;

 FUNC_7(&VAR_24);
}
