
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {int ddc_bus; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {int dev; } ;


 struct intel_hdmi* FUNC_0 (struct drm_connector*) ;
 struct i2c_adapter* FUNC_1 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static struct i2c_adapter *
FUNC_3(struct drm_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->dev);
 struct intel_hdmi *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2->ddc_bus);
}
