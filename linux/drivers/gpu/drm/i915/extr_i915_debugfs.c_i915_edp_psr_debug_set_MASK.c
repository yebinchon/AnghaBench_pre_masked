
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_i915_private {int runtime_pm; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_1, u64 VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1;
 intel_wakeref_t VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 FUNC_1("Setting PSR debug to %llx\n", VAR_2);

 VAR_4 = FUNC_3(&VAR_3->runtime_pm);

 VAR_5 = FUNC_2(VAR_3, VAR_2);

 FUNC_4(&VAR_3->runtime_pm, VAR_4);

 return VAR_5;
}
