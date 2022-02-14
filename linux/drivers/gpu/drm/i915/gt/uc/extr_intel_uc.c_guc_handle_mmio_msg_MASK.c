
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc {scalar_t__ handler; scalar_t__ mmio_msg; } ;
struct drm_i915_private {int irq_lock; } ;
struct TYPE_2__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct intel_guc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct intel_guc*,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct intel_guc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_1)->i915;


 FUNC_0(VAR_1->handler == VAR_0);

 if (!VAR_1->mmio_msg)
  return;

 FUNC_3(&VAR_2->irq_lock);
 FUNC_2(VAR_1, &VAR_1->mmio_msg, 1);
 FUNC_4(&VAR_2->irq_lock);

 VAR_1->mmio_msg = 0;
}
