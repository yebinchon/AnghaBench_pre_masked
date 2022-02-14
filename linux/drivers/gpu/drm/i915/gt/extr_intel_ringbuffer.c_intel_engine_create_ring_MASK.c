
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring {int size; int effective_size; struct i915_vma* vma; int ref; } ;
struct intel_engine_cs {TYPE_1__* gt; struct drm_i915_private* i915; } ;
struct i915_vma {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int ggtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_ring* FUNC_0 (struct i915_vma*) ;
 struct intel_ring* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 struct i915_vma* FUNC_7 (int ,int) ;
 int FUNC_8 (struct intel_ring*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct intel_ring*) ;
 int FUNC_11 (int *) ;
 struct intel_ring* FUNC_12 (int,int ) ;

struct intel_ring *
FUNC_13(struct intel_engine_cs *VAR_4, int VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->i915;
 struct intel_ring *VAR_7;
 struct i915_vma *VAR_8;

 FUNC_2(!FUNC_9(VAR_5));
 FUNC_2(FUNC_6(VAR_5) & ~VAR_3);

 VAR_7 = FUNC_12(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_1(-VAR_1);

 FUNC_11(&VAR_7->ref);

 VAR_7->size = VAR_5;




 VAR_7->effective_size = VAR_5;
 if (FUNC_4(VAR_6) || FUNC_5(VAR_6))
  VAR_7->effective_size -= 2 * VAR_0;

 FUNC_8(VAR_7);

 VAR_8 = FUNC_7(VAR_4->gt->ggtt, VAR_5);
 if (FUNC_3(VAR_8)) {
  FUNC_10(VAR_7);
  return FUNC_0(VAR_8);
 }
 VAR_7->vma = VAR_8;

 return VAR_7;
}
