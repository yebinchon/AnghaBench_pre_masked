
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int force_bit; struct drm_i915_private* dev_priv; } ;
struct i2c_adapter {int name; } ;
struct drm_i915_private {int gmbus_mutex; } ;


 int FUNC_0 (char*,char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct intel_gmbus* FUNC_3 (struct i2c_adapter*) ;

void FUNC_4(struct i2c_adapter *VAR_0, bool VAR_1)
{
 struct intel_gmbus *VAR_2 = FUNC_3(VAR_0);
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;

 FUNC_1(&VAR_3->gmbus_mutex);

 VAR_2->force_bit += VAR_1 ? 1 : -1;
 FUNC_0("%sabling bit-banging on %s. force bit now %d\n",
        VAR_1 ? "en" : "dis", VAR_0->name,
        VAR_2->force_bit);

 FUNC_2(&VAR_3->gmbus_mutex);
}
