
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crt {int force_hotplug_required; int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 struct intel_crt* FUNC_5 (int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_encoder*) ;

void FUNC_8(struct drm_encoder *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2->dev);
 struct intel_crt *VAR_4 = FUNC_5(FUNC_7(VAR_2));

 if (FUNC_3(VAR_3) >= 5) {
  u32 VAR_5;

  VAR_5 = FUNC_1(VAR_4->adpa_reg);
  VAR_5 &= ~VAR_0;
  VAR_5 |= VAR_1;
  FUNC_2(VAR_4->adpa_reg, VAR_5);
  FUNC_4(VAR_4->adpa_reg);

  FUNC_0("crt adpa set to 0x%x\n", VAR_5);
  VAR_4->force_hotplug_required = 1;
 }

}
