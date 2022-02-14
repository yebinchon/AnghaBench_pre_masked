
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gmbus {int gpio_reg; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct intel_uncore*,int ) ;

__attribute__((used)) static u32 FUNC_3(struct intel_gmbus *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;
 struct intel_uncore *VAR_4 = &VAR_3->uncore;
 u32 VAR_5 = 0;


 if (!FUNC_0(VAR_3) && !FUNC_1(VAR_3))
  VAR_5 = FUNC_2(VAR_4, VAR_2->gpio_reg) &
      (VAR_1 |
       VAR_0);

 return VAR_5;
}
