
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {struct drm_i915_private* dev_priv; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int gmbus_mutex; } ;


 int FUNC_0 (int *) ;
 struct intel_gmbus* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_0,
        unsigned int VAR_1)
{
 struct intel_gmbus *VAR_2 = FUNC_1(VAR_0);
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;

 FUNC_0(&VAR_3->gmbus_mutex);
}
