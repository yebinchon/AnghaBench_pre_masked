
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int uncore; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct intel_gvt *VAR_0, u32 VAR_1, void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_0->dev_priv;

 *(u32 *)(VAR_2 + VAR_1) = FUNC_1(&VAR_3->uncore,
           FUNC_0(VAR_1));
 return 0;
}
