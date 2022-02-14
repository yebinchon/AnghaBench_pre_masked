
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_36__ {float blurFactor; int sunAmbCol; int sunCol; int sunDir; } ;
typedef TYPE_2__ refdefex_t ;
struct TYPE_37__ {double time; int rdflags; scalar_t__ areamask; int * viewaxis; int vieworg; int fov_y; int fov_x; int height; int width; int y; int x; int text; } ;
typedef TYPE_3__ refdef_t ;
struct TYPE_43__ {int value; } ;
struct TYPE_42__ {int value; } ;
struct TYPE_41__ {int integer; } ;
struct TYPE_40__ {int integer; } ;
struct TYPE_39__ {int integer; } ;
struct TYPE_33__ {float* vieworg; float** viewaxis; double time; int rdflags; float* sunDir; float* sunCol; float* sunAmbCol; float blurFactor; double floatTime; scalar_t__ num_dlights; int * pshadows; scalar_t__ num_pshadows; int * polys; scalar_t__ numPolys; int * dlights; int * entities; scalar_t__ num_entities; int drawSurfs; int numDrawSurfs; void** toneMinAvgMaxLinear; int * autoExposureMinMax; int areamaskModified; scalar_t__ areamask; int fov_y; int fov_x; int height; int width; int y; int x; int text; } ;
struct TYPE_38__ {float sunShadowScale; int sceneCount; int frameSceneNum; TYPE_1__ refdef; int * toneMinAvgMaxLevel; int * autoExposureMinMax; int sunLight; int sunDirection; } ;
struct TYPE_35__ {int * pshadows; int * polys; int * dlights; int * entities; int drawSurfs; } ;
struct TYPE_34__ {scalar_t__ hardwareType; } ;
struct TYPE_32__ {int value; } ;
struct TYPE_31__ {scalar_t__ integer; } ;
struct TYPE_30__ {scalar_t__ integer; } ;
struct TYPE_29__ {int value; } ;
struct TYPE_28__ {int value; } ;
struct TYPE_27__ {scalar_t__ integer; } ;
struct TYPE_26__ {float value; } ;
struct TYPE_25__ {float value; } ;
struct TYPE_24__ {scalar_t__ integer; } ;
struct TYPE_23__ {int value; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (int ,float,float*) ;
 int FUNC_3 (float*,int ,int ,int ) ;
 TYPE_21__* VAR_5 ;
 TYPE_20__ VAR_6 ;
 void* FUNC_4 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_19__* VAR_9 ;
 TYPE_18__* VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 TYPE_17__* VAR_15 ;
 TYPE_16__* VAR_16 ;
 TYPE_15__* VAR_17 ;
 TYPE_14__* VAR_18 ;
 TYPE_13__* VAR_19 ;
 TYPE_12__* VAR_20 ;
 TYPE_11__* VAR_21 ;
 TYPE_10__* VAR_22 ;
 TYPE_9__* VAR_23 ;
 TYPE_8__* VAR_24 ;
 TYPE_7__* VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 TYPE_6__* VAR_29 ;
 TYPE_5__* VAR_30 ;
 TYPE_4__ VAR_31 ;

void FUNC_5(const refdef_t *VAR_32)
{
 FUNC_0( VAR_31.refdef.text, VAR_32->text, sizeof( VAR_31.refdef.text ) );

 VAR_31.refdef.x = VAR_32->x;
 VAR_31.refdef.y = VAR_32->y;
 VAR_31.refdef.width = VAR_32->width;
 VAR_31.refdef.height = VAR_32->height;
 VAR_31.refdef.fov_x = VAR_32->fov_x;
 VAR_31.refdef.fov_y = VAR_32->fov_y;

 FUNC_1( VAR_32->vieworg, VAR_31.refdef.vieworg );
 FUNC_1( VAR_32->viewaxis[0], VAR_31.refdef.viewaxis[0] );
 FUNC_1( VAR_32->viewaxis[1], VAR_31.refdef.viewaxis[1] );
 FUNC_1( VAR_32->viewaxis[2], VAR_31.refdef.viewaxis[2] );

 VAR_31.refdef.time = VAR_32->time;
 VAR_31.refdef.rdflags = VAR_32->rdflags;



 VAR_31.refdef.areamaskModified = VAR_7;
 if ( ! (VAR_31.refdef.rdflags & VAR_3) ) {
  int VAR_33;
  int VAR_34;


  VAR_33 = 0;
  for (VAR_34 = 0 ; VAR_34 < VAR_1/4 ; VAR_34++) {
   VAR_33 |= ((int *)VAR_31.refdef.areamask)[VAR_34] ^ ((int *)VAR_32->areamask)[VAR_34];
   ((int *)VAR_31.refdef.areamask)[VAR_34] = ((int *)VAR_32->areamask)[VAR_34];
  }

  if ( VAR_33 ) {

   VAR_31.refdef.areamaskModified = VAR_8;
  }
 }

 VAR_31.refdef.sunDir[3] = 0.0f;
 VAR_31.refdef.sunCol[3] = 1.0f;
 VAR_31.refdef.sunAmbCol[3] = 1.0f;

 FUNC_1(VAR_31.sunDirection, VAR_31.refdef.sunDir);
 if ( (VAR_31.refdef.rdflags & VAR_3) || !(VAR_9->value) ){
  FUNC_3(VAR_31.refdef.sunCol, 0, 0, 0);
  FUNC_3(VAR_31.refdef.sunAmbCol, 0, 0, 0);
 }
 else
 {
  float VAR_35 = (1 << VAR_25->integer) / 255.0f;

  if (VAR_18->integer)
   FUNC_2(VAR_31.sunLight, VAR_35 * VAR_20->value, VAR_31.refdef.sunCol);
  else
   FUNC_2(VAR_31.sunLight, VAR_35, VAR_31.refdef.sunCol);

  if (VAR_29->integer == 1)
  {
   VAR_31.refdef.sunAmbCol[0] =
   VAR_31.refdef.sunAmbCol[1] =
   VAR_31.refdef.sunAmbCol[2] = VAR_18->integer ? VAR_19->value : VAR_31.sunShadowScale;
  }
  else
  {
   if (VAR_18->integer)
    FUNC_2(VAR_31.sunLight, VAR_35 * VAR_19->value, VAR_31.refdef.sunAmbCol);
   else
    FUNC_2(VAR_31.sunLight, VAR_35 * VAR_31.sunShadowScale, VAR_31.refdef.sunAmbCol);
  }
 }

 if (VAR_15->integer)
 {
  VAR_31.refdef.autoExposureMinMax[0] = VAR_17->value;
  VAR_31.refdef.autoExposureMinMax[1] = VAR_16->value;
 }
 else
 {
  VAR_31.refdef.autoExposureMinMax[0] = VAR_31.autoExposureMinMax[0];
  VAR_31.refdef.autoExposureMinMax[1] = VAR_31.autoExposureMinMax[1];
 }

 if (VAR_21->integer)
 {
  VAR_31.refdef.toneMinAvgMaxLinear[0] = FUNC_4(2, VAR_24->value);
  VAR_31.refdef.toneMinAvgMaxLinear[1] = FUNC_4(2, VAR_22->value);
  VAR_31.refdef.toneMinAvgMaxLinear[2] = FUNC_4(2, VAR_23->value);
 }
 else
 {
  VAR_31.refdef.toneMinAvgMaxLinear[0] = FUNC_4(2, VAR_31.toneMinAvgMaxLevel[0]);
  VAR_31.refdef.toneMinAvgMaxLinear[1] = FUNC_4(2, VAR_31.toneMinAvgMaxLevel[1]);
  VAR_31.refdef.toneMinAvgMaxLinear[2] = FUNC_4(2, VAR_31.toneMinAvgMaxLevel[2]);
 }


 if (VAR_32->rdflags & VAR_2) {
  const refdefex_t* VAR_36 = (const refdefex_t*) (VAR_32+1);

  VAR_31.refdef.blurFactor = VAR_36->blurFactor;

  if (VAR_32->rdflags & VAR_4)
  {
   FUNC_1(VAR_36->sunDir, VAR_31.refdef.sunDir);
   FUNC_1(VAR_36->sunCol, VAR_31.refdef.sunCol);
   FUNC_1(VAR_36->sunAmbCol, VAR_31.refdef.sunAmbCol);
  }
 }
 else
 {
  VAR_31.refdef.blurFactor = 0.0f;
 }



 VAR_31.refdef.floatTime = VAR_31.refdef.time * 0.001;

 VAR_31.refdef.numDrawSurfs = VAR_12;
 VAR_31.refdef.drawSurfs = VAR_5->drawSurfs;

 VAR_31.refdef.num_entities = VAR_27 - VAR_13;
 VAR_31.refdef.entities = &VAR_5->entities[VAR_13];

 VAR_31.refdef.num_dlights = VAR_26 - VAR_11;
 VAR_31.refdef.dlights = &VAR_5->dlights[VAR_11];

 VAR_31.refdef.numPolys = VAR_28 - VAR_14;
 VAR_31.refdef.polys = &VAR_5->polys[VAR_14];

 VAR_31.refdef.num_pshadows = 0;
 VAR_31.refdef.pshadows = &VAR_5->pshadows[0];



 if ( VAR_10->integer == 0 ||
   VAR_30->integer == 1 ||
   VAR_6.hardwareType == VAR_0 ) {
  VAR_31.refdef.num_dlights = 0;
 }






 VAR_31.frameSceneNum++;
 VAR_31.sceneCount++;
}
