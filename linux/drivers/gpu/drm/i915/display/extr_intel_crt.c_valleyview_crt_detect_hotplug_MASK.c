
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hpd_pin; } ;
struct intel_crt {TYPE_1__ base; int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct intel_crt* FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int,int) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_8(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct intel_crt *VAR_4 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_3);
 bool VAR_6;
 u32 VAR_7;
 bool VAR_8;
 u32 VAR_9;
 VAR_6 = FUNC_5(VAR_5, VAR_4->base.hpd_pin);

 VAR_9 = VAR_7 = FUNC_1(VAR_4->adpa_reg);
 FUNC_0("trigger hotplug detect cycle: adpa=0x%x\n", VAR_7);

 VAR_7 |= VAR_0;

 FUNC_2(VAR_4->adpa_reg, VAR_7);

 if (FUNC_4(VAR_5, VAR_4->adpa_reg,
        VAR_0, 1000)) {
  FUNC_0("timed out waiting for FORCE_TRIGGER");
  FUNC_2(VAR_4->adpa_reg, VAR_9);
 }


 VAR_7 = FUNC_1(VAR_4->adpa_reg);
 if ((VAR_7 & VAR_1) != 0)
  VAR_8 = 1;
 else
  VAR_8 = 0;

 FUNC_0("valleyview hotplug adpa=0x%x, result %d\n", VAR_7, VAR_8);

 if (VAR_6)
  FUNC_6(VAR_5, VAR_4->base.hpd_pin);

 return VAR_8;
}
