
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int runtime_pm; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0)
{
 intel_wakeref_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->runtime_pm);
 FUNC_2(VAR_0);

 FUNC_1(&VAR_0->runtime_pm, VAR_1);
}
