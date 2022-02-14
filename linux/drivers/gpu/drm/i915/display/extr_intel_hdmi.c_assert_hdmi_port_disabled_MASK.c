
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_hdmi {int hdmi_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 struct drm_device* FUNC_3 (struct intel_hdmi*) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_5(struct intel_hdmi *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4) ? VAR_0 : VAR_1;

 FUNC_2(FUNC_1(VAR_2->hdmi_reg) & VAR_5,
      "HDMI port enabled, expecting disabled\n");
}
