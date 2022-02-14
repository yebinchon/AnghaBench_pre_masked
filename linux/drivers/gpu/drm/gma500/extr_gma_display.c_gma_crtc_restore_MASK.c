
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct psb_offset {scalar_t__ palette; scalar_t__ base; scalar_t__ cntr; scalar_t__ conf; scalar_t__ src; scalar_t__ pos; scalar_t__ size; scalar_t__ stride; scalar_t__ vsync; scalar_t__ vblank; scalar_t__ vtotal; scalar_t__ hsync; scalar_t__ hblank; scalar_t__ htotal; scalar_t__ dpll; scalar_t__ fp1; scalar_t__ fp0; } ;
struct psb_intel_crtc_state {int saveDPLL; int saveFP0; int saveFP1; int saveHTOTAL; int saveHBLANK; int saveHSYNC; int saveVTOTAL; int saveVBLANK; int saveVSYNC; int saveDSPSTRIDE; int saveDSPSIZE; int saveDSPPOS; int savePIPESRC; int saveDSPBASE; int savePIPECONF; int saveDSPCNTR; int* savePalette; } ;
struct gma_crtc {size_t pipe; struct psb_intel_crtc_state* crtc_state; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_device*) ;
 struct gma_crtc* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int) ;

void FUNC_6(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct gma_crtc *VAR_4 = FUNC_4(VAR_1);
 struct psb_intel_crtc_state *VAR_5 = VAR_4->crtc_state;
 const struct psb_offset *VAR_6 = &VAR_3->regmap[VAR_4->pipe];
 uint32_t VAR_7;
 int VAR_8;

 if (!VAR_5) {
  FUNC_2(VAR_2->dev, "No crtc state\n");
  return;
 }

 if (VAR_5->saveDPLL & VAR_0) {
  FUNC_1(VAR_6->dpll,
   VAR_5->saveDPLL & ~VAR_0);
  FUNC_0(VAR_6->dpll);
  FUNC_5(150);
 }

 FUNC_1(VAR_6->fp0, VAR_5->saveFP0);
 FUNC_0(VAR_6->fp0);

 FUNC_1(VAR_6->fp1, VAR_5->saveFP1);
 FUNC_0(VAR_6->fp1);

 FUNC_1(VAR_6->dpll, VAR_5->saveDPLL);
 FUNC_0(VAR_6->dpll);
 FUNC_5(150);

 FUNC_1(VAR_6->htotal, VAR_5->saveHTOTAL);
 FUNC_1(VAR_6->hblank, VAR_5->saveHBLANK);
 FUNC_1(VAR_6->hsync, VAR_5->saveHSYNC);
 FUNC_1(VAR_6->vtotal, VAR_5->saveVTOTAL);
 FUNC_1(VAR_6->vblank, VAR_5->saveVBLANK);
 FUNC_1(VAR_6->vsync, VAR_5->saveVSYNC);
 FUNC_1(VAR_6->stride, VAR_5->saveDSPSTRIDE);

 FUNC_1(VAR_6->size, VAR_5->saveDSPSIZE);
 FUNC_1(VAR_6->pos, VAR_5->saveDSPPOS);

 FUNC_1(VAR_6->src, VAR_5->savePIPESRC);
 FUNC_1(VAR_6->base, VAR_5->saveDSPBASE);
 FUNC_1(VAR_6->conf, VAR_5->savePIPECONF);

 FUNC_3(VAR_2);

 FUNC_1(VAR_6->cntr, VAR_5->saveDSPCNTR);
 FUNC_1(VAR_6->base, VAR_5->saveDSPBASE);

 FUNC_3(VAR_2);

 VAR_7 = VAR_6->palette;
 for (VAR_8 = 0; VAR_8 < 256; ++VAR_8)
  FUNC_1(VAR_7 + (VAR_8 << 2), VAR_5->savePalette[VAR_8]);
}
