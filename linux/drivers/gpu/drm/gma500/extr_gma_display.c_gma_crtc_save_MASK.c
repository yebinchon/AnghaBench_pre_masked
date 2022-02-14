
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct psb_offset {scalar_t__ palette; scalar_t__ base; scalar_t__ pos; scalar_t__ size; scalar_t__ stride; scalar_t__ vsync; scalar_t__ vblank; scalar_t__ vtotal; scalar_t__ hsync; scalar_t__ hblank; scalar_t__ htotal; scalar_t__ dpll; scalar_t__ fp1; scalar_t__ fp0; scalar_t__ src; scalar_t__ conf; scalar_t__ cntr; } ;
struct psb_intel_crtc_state {void** savePalette; void* saveDSPBASE; void* saveDSPPOS; void* saveDSPSIZE; void* saveDSPSTRIDE; void* saveVSYNC; void* saveVBLANK; void* saveVTOTAL; void* saveHSYNC; void* saveHBLANK; void* saveHTOTAL; void* saveDPLL; void* saveFP1; void* saveFP0; void* savePIPESRC; void* savePIPECONF; void* saveDSPCNTR; } ;
struct gma_crtc {size_t pipe; struct psb_intel_crtc_state* crtc_state; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 struct gma_crtc* FUNC_2 (struct drm_crtc*) ;

void FUNC_3(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 struct gma_crtc *VAR_3 = FUNC_2(VAR_0);
 struct psb_intel_crtc_state *VAR_4 = VAR_3->crtc_state;
 const struct psb_offset *VAR_5 = &VAR_2->regmap[VAR_3->pipe];
 uint32_t VAR_6;
 int VAR_7;

 if (!VAR_4) {
  FUNC_1(VAR_1->dev, "No CRTC state found\n");
  return;
 }

 VAR_4->saveDSPCNTR = FUNC_0(VAR_5->cntr);
 VAR_4->savePIPECONF = FUNC_0(VAR_5->conf);
 VAR_4->savePIPESRC = FUNC_0(VAR_5->src);
 VAR_4->saveFP0 = FUNC_0(VAR_5->fp0);
 VAR_4->saveFP1 = FUNC_0(VAR_5->fp1);
 VAR_4->saveDPLL = FUNC_0(VAR_5->dpll);
 VAR_4->saveHTOTAL = FUNC_0(VAR_5->htotal);
 VAR_4->saveHBLANK = FUNC_0(VAR_5->hblank);
 VAR_4->saveHSYNC = FUNC_0(VAR_5->hsync);
 VAR_4->saveVTOTAL = FUNC_0(VAR_5->vtotal);
 VAR_4->saveVBLANK = FUNC_0(VAR_5->vblank);
 VAR_4->saveVSYNC = FUNC_0(VAR_5->vsync);
 VAR_4->saveDSPSTRIDE = FUNC_0(VAR_5->stride);


 VAR_4->saveDSPSIZE = FUNC_0(VAR_5->size);
 VAR_4->saveDSPPOS = FUNC_0(VAR_5->pos);

 VAR_4->saveDSPBASE = FUNC_0(VAR_5->base);

 VAR_6 = VAR_5->palette;
 for (VAR_7 = 0; VAR_7 < 256; ++VAR_7)
  VAR_4->savePalette[VAR_7] = FUNC_0(VAR_6 + (VAR_7 << 2));
}
