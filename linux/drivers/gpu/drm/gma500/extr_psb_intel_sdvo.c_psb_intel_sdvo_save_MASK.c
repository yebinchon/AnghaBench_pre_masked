
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo {int sdvo_reg; int saveSDVO; } ;
struct gma_encoder {int base; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 struct gma_encoder* FUNC_1 (struct drm_connector*) ;
 struct psb_intel_sdvo* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct gma_encoder *VAR_2 = FUNC_1(VAR_0);
 struct psb_intel_sdvo *VAR_3 = FUNC_2(&VAR_2->base);

 VAR_3->saveSDVO = FUNC_0(VAR_3->sdvo_reg);
}
