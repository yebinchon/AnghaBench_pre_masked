
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {char const* no_fbc_reason; scalar_t__ active; int lock; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0,
     const char *VAR_1)
{
 struct intel_fbc *VAR_2 = &VAR_0->fbc;

 FUNC_0(!FUNC_2(&VAR_2->lock));

 if (VAR_2->active)
  FUNC_1(VAR_0);

 VAR_2->no_fbc_reason = VAR_1;
}
