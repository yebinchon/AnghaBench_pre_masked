
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int irq_lock; scalar_t__ display_irqs_enabled; int gt; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_1)
{
 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0);

 FUNC_2(&VAR_1->gt);

 FUNC_3(&VAR_1->irq_lock);
 if (VAR_1->display_irqs_enabled)
  FUNC_5(VAR_1);
 FUNC_4(&VAR_1->irq_lock);
}
