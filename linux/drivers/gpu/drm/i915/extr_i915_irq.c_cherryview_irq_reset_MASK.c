
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {int irq_lock; scalar_t__ display_irqs_enabled; int gt; struct intel_uncore uncore; } ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_2)
{
 struct intel_uncore *VAR_3 = &VAR_2->uncore;

 FUNC_1(VAR_0, 0);
 FUNC_2(VAR_0);

 FUNC_3(&VAR_2->gt);

 FUNC_0(VAR_3, VAR_1);

 FUNC_4(&VAR_2->irq_lock);
 if (VAR_2->display_irqs_enabled)
  FUNC_6(VAR_2);
 FUNC_5(&VAR_2->irq_lock);
}
