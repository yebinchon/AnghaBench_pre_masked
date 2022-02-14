
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {int hdmi_reg; } ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int power_domain; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 struct intel_hdmi* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;
 int FUNC_3 (struct drm_i915_private*,int ,int*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct intel_encoder *VAR_0,
        enum pipe *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0->base.dev);
 struct intel_hdmi *VAR_3 = FUNC_0(&VAR_0->base);
 intel_wakeref_t VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_1(VAR_2,
           VAR_0->power_domain);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_3(VAR_2, VAR_3->hdmi_reg, VAR_1);

 FUNC_2(VAR_2, VAR_0->power_domain, VAR_4);

 return VAR_5;
}
