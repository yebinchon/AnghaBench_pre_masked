
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int irq_enable_mask; struct drm_i915_private* i915; } ;
struct drm_i915_private {int irq_mask; int uncore; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct intel_engine_cs *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->i915;

 VAR_2->irq_mask |= VAR_1->irq_enable_mask;
 FUNC_0(&VAR_2->uncore, VAR_0, VAR_2->irq_mask);
}
