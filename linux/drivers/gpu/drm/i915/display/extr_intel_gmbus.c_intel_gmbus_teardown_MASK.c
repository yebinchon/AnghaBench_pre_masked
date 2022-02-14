
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int adapter; } ;
struct drm_i915_private {struct intel_gmbus* gmbus; } ;


 unsigned int FUNC_0 (struct intel_gmbus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*,unsigned int) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct intel_gmbus *VAR_1;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->gmbus); VAR_2++) {
  if (!FUNC_2(VAR_0, VAR_2))
   continue;

  VAR_1 = &VAR_0->gmbus[VAR_2];
  FUNC_1(&VAR_1->adapter);
 }
}
