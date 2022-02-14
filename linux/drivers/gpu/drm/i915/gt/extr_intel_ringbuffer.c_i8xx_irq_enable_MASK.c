
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int irq_enable_mask; struct drm_i915_private* i915; } ;
struct drm_i915_private {int irq_mask; int uncore; } ;


 int FUNC_0 (struct intel_engine_cs*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct intel_engine_cs *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->i915;

 VAR_3->irq_mask &= ~VAR_2->irq_enable_mask;
 FUNC_1(&VAR_3->uncore, VAR_0, VAR_3->irq_mask);
 FUNC_0(VAR_2, VAR_1);
}
