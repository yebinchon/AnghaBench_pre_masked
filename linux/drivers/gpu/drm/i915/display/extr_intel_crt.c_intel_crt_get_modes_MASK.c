
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int power_domain; } ;
struct intel_crt {struct intel_encoder base; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int crt_ddc_pin; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 struct intel_crt* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,struct i2c_adapter*) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ,int ) ;
 struct i2c_adapter* FUNC_5 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2);
 struct intel_crt *VAR_4 = FUNC_1(VAR_1);
 struct intel_encoder *VAR_5 = &VAR_4->base;
 intel_wakeref_t VAR_6;
 struct i2c_adapter *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3,
       VAR_5->power_domain);

 VAR_7 = FUNC_5(VAR_3, VAR_3->vbt.crt_ddc_pin);
 VAR_8 = FUNC_2(VAR_1, VAR_7);
 if (VAR_8 || !FUNC_0(VAR_3))
  goto out;


 VAR_7 = FUNC_5(VAR_3, VAR_0);
 VAR_8 = FUNC_2(VAR_1, VAR_7);

out:
 FUNC_4(VAR_3, VAR_5->power_domain, VAR_6);

 return VAR_8;
}
