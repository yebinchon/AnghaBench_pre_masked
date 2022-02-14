
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {int frameBuffer; } ;
struct TYPE_17__ {scalar_t__ framebufferMultisample; int framebufferBlit; scalar_t__ textureFloat; int framebufferObject; } ;
struct TYPE_16__ {int * currentFBO; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int (* Cvar_SetValue ) (char*,float) ;int (* Printf ) (int ,char*) ;} ;
struct TYPE_12__ {TYPE_7__* renderCubeFbo; TYPE_10__* renderCubeImage; TYPE_7__* screenSsaoFbo; TYPE_10__* screenSsaoImage; TYPE_7__* hdrDepthFbo; TYPE_10__* hdrDepthImage; TYPE_7__** quarterFbo; TYPE_10__** quarterImage; TYPE_7__* targetLevelsFbo; TYPE_10__* targetLevelsImage; TYPE_7__* calcLevelsFbo; TYPE_10__* calcLevelsImage; TYPE_7__** textureScratchFbo; TYPE_10__** textureScratchImage; TYPE_7__* screenShadowFbo; TYPE_10__* screenShadowImage; TYPE_7__** sunShadowFbo; TYPE_10__** sunShadowDepthImage; TYPE_7__** pshadowFbos; TYPE_10__** pshadowMaps; TYPE_7__* sunRaysFbo; TYPE_10__* renderDepthImage; TYPE_10__* sunRaysImage; TYPE_7__* screenScratchFbo; TYPE_10__* screenScratchImage; TYPE_7__* renderFbo; TYPE_10__* renderImage; TYPE_7__* msaaResolveFbo; scalar_t__ numFBOs; } ;
struct TYPE_11__ {int height; int width; } ;


 int FUNC_0 (TYPE_7__*,TYPE_10__*,int ,int ) ;
 void* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 () ;
 TYPE_6__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int*) ;
 TYPE_4__* VAR_14 ;
 TYPE_3__* VAR_15 ;
 TYPE_2__ VAR_16 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,float) ;
 TYPE_1__ VAR_17 ;
 char* FUNC_11 (char*,int) ;

void FUNC_12(void)
{
 int VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_16.Printf(VAR_11, "------- FBO_Init -------\n");

 if(!VAR_12.framebufferObject)
  return;

 VAR_17.numFBOs = 0;

 FUNC_4();

 FUNC_6();

 VAR_19 = VAR_9;
 if (VAR_15->integer && VAR_12.textureFloat)
  VAR_19 = VAR_8;

 if (VAR_12.framebufferMultisample)
  FUNC_8(VAR_7, &VAR_20);

 if (VAR_14->integer < VAR_20)
  VAR_20 = VAR_14->integer;

 if (VAR_20 < 2 || !VAR_12.framebufferBlit)
  VAR_20 = 0;

 if (VAR_20 != VAR_14->integer)
  VAR_16.Cvar_SetValue("r_ext_framebuffer_multisample", (float)VAR_20);



 if (VAR_20 && VAR_12.framebufferMultisample)
 {
  VAR_17.renderFbo = FUNC_1("_render", VAR_17.renderDepthImage->width, VAR_17.renderDepthImage->height);
  FUNC_2(VAR_17.renderFbo, VAR_19, 0, VAR_20);
  FUNC_2(VAR_17.renderFbo, VAR_4, 0, VAR_20);
  FUNC_5(VAR_17.renderFbo);

  VAR_17.msaaResolveFbo = FUNC_1("_msaaResolve", VAR_17.renderDepthImage->width, VAR_17.renderDepthImage->height);
  FUNC_0(VAR_17.msaaResolveFbo, VAR_17.renderImage, VAR_0, 0);
  FUNC_0(VAR_17.msaaResolveFbo, VAR_17.renderDepthImage, VAR_2, 0);
  FUNC_5(VAR_17.msaaResolveFbo);
 }
 else if (VAR_15->integer)
 {
  VAR_17.renderFbo = FUNC_1("_render", VAR_17.renderDepthImage->width, VAR_17.renderDepthImage->height);
  FUNC_0(VAR_17.renderFbo, VAR_17.renderImage, VAR_0, 0);
  FUNC_0(VAR_17.renderFbo, VAR_17.renderDepthImage, VAR_2, 0);
  FUNC_5(VAR_17.renderFbo);
 }



 if (VAR_17.renderFbo)
 {
  FUNC_3(VAR_6, VAR_17.renderFbo->frameBuffer);
  FUNC_7( VAR_1 | VAR_3 );
 }

 if (VAR_17.screenScratchImage)
 {
  VAR_17.screenScratchFbo = FUNC_1("screenScratch", VAR_17.screenScratchImage->width, VAR_17.screenScratchImage->height);
  FUNC_0(VAR_17.screenScratchFbo, VAR_17.screenScratchImage, VAR_0, 0);
  FUNC_0(VAR_17.screenScratchFbo, VAR_17.renderDepthImage, VAR_2, 0);
  FUNC_5(VAR_17.screenScratchFbo);
 }

 if (VAR_17.sunRaysImage)
 {
  VAR_17.sunRaysFbo = FUNC_1("_sunRays", VAR_17.renderDepthImage->width, VAR_17.renderDepthImage->height);
  FUNC_0(VAR_17.sunRaysFbo, VAR_17.sunRaysImage, VAR_0, 0);
  FUNC_0(VAR_17.sunRaysFbo, VAR_17.renderDepthImage, VAR_2, 0);
  FUNC_5(VAR_17.sunRaysFbo);
 }

 if (VAR_10 && VAR_17.pshadowMaps[0])
 {
  for( VAR_18 = 0; VAR_18 < VAR_10; VAR_18++)
  {
   VAR_17.pshadowFbos[VAR_18] = FUNC_1(FUNC_11("_shadowmap%d", VAR_18), VAR_17.pshadowMaps[VAR_18]->width, VAR_17.pshadowMaps[VAR_18]->height);

   FUNC_2(VAR_17.pshadowFbos[VAR_18], VAR_9, 0, 0);
   FUNC_0(VAR_17.pshadowFbos[VAR_18], VAR_17.pshadowMaps[VAR_18], VAR_2, 0);
   FUNC_5(VAR_17.pshadowFbos[VAR_18]);
  }
 }

 if (VAR_17.sunShadowDepthImage[0])
 {
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
  {
   VAR_17.sunShadowFbo[VAR_18] = FUNC_1("_sunshadowmap", VAR_17.sunShadowDepthImage[VAR_18]->width, VAR_17.sunShadowDepthImage[VAR_18]->height);


   FUNC_2(VAR_17.sunShadowFbo[VAR_18], VAR_9, 0, 0);
   FUNC_0(VAR_17.sunShadowFbo[VAR_18], VAR_17.sunShadowDepthImage[VAR_18], VAR_2, 0);
   FUNC_5(VAR_17.sunShadowFbo[VAR_18]);
  }
 }

 if (VAR_17.screenShadowImage)
 {
  VAR_17.screenShadowFbo = FUNC_1("_screenshadow", VAR_17.screenShadowImage->width, VAR_17.screenShadowImage->height);
  FUNC_0(VAR_17.screenShadowFbo, VAR_17.screenShadowImage, VAR_0, 0);
  FUNC_5(VAR_17.screenShadowFbo);
 }

 if (VAR_17.textureScratchImage[0])
 {
  for (VAR_18 = 0; VAR_18 < 2; VAR_18++)
  {
   VAR_17.textureScratchFbo[VAR_18] = FUNC_1(FUNC_11("_texturescratch%d", VAR_18), VAR_17.textureScratchImage[VAR_18]->width, VAR_17.textureScratchImage[VAR_18]->height);
   FUNC_0(VAR_17.textureScratchFbo[VAR_18], VAR_17.textureScratchImage[VAR_18], VAR_0, 0);
   FUNC_5(VAR_17.textureScratchFbo[VAR_18]);
  }
 }

 if (VAR_17.calcLevelsImage)
 {
  VAR_17.calcLevelsFbo = FUNC_1("_calclevels", VAR_17.calcLevelsImage->width, VAR_17.calcLevelsImage->height);
  FUNC_0(VAR_17.calcLevelsFbo, VAR_17.calcLevelsImage, VAR_0, 0);
  FUNC_5(VAR_17.calcLevelsFbo);
 }

 if (VAR_17.targetLevelsImage)
 {
  VAR_17.targetLevelsFbo = FUNC_1("_targetlevels", VAR_17.targetLevelsImage->width, VAR_17.targetLevelsImage->height);
  FUNC_0(VAR_17.targetLevelsFbo, VAR_17.targetLevelsImage, VAR_0, 0);
  FUNC_5(VAR_17.targetLevelsFbo);
 }

 if (VAR_17.quarterImage[0])
 {
  for (VAR_18 = 0; VAR_18 < 2; VAR_18++)
  {
   VAR_17.quarterFbo[VAR_18] = FUNC_1(FUNC_11("_quarter%d", VAR_18), VAR_17.quarterImage[VAR_18]->width, VAR_17.quarterImage[VAR_18]->height);
   FUNC_0(VAR_17.quarterFbo[VAR_18], VAR_17.quarterImage[VAR_18], VAR_0, 0);
   FUNC_5(VAR_17.quarterFbo[VAR_18]);
  }
 }

 if (VAR_17.hdrDepthImage)
 {
  VAR_17.hdrDepthFbo = FUNC_1("_hdrDepth", VAR_17.hdrDepthImage->width, VAR_17.hdrDepthImage->height);
  FUNC_0(VAR_17.hdrDepthFbo, VAR_17.hdrDepthImage, VAR_0, 0);
  FUNC_5(VAR_17.hdrDepthFbo);
 }

 if (VAR_17.screenSsaoImage)
 {
  VAR_17.screenSsaoFbo = FUNC_1("_screenssao", VAR_17.screenSsaoImage->width, VAR_17.screenSsaoImage->height);
  FUNC_0(VAR_17.screenSsaoFbo, VAR_17.screenSsaoImage, VAR_0, 0);
  FUNC_5(VAR_17.screenSsaoFbo);
 }

 if (VAR_17.renderCubeImage)
 {
  VAR_17.renderCubeFbo = FUNC_1("_renderCubeFbo", VAR_17.renderCubeImage->width, VAR_17.renderCubeImage->height);
  FUNC_0(VAR_17.renderCubeFbo, VAR_17.renderCubeImage, VAR_0, 0);
  FUNC_2(VAR_17.renderCubeFbo, VAR_5, 0, 0);
  FUNC_5(VAR_17.renderCubeFbo);
 }

 FUNC_4();

 FUNC_3(VAR_6, 0);
 VAR_13.currentFBO = ((void*)0);
}
