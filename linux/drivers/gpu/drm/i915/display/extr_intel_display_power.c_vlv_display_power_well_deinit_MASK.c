
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dev; } ;
struct drm_i915_private {TYPE_3__ drm; int irq_lock; } ;
struct TYPE_4__ {int is_suspended; } ;
struct TYPE_5__ {TYPE_1__ power; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_0)
{
 FUNC_3(&VAR_0->irq_lock);
 FUNC_5(VAR_0);
 FUNC_4(&VAR_0->irq_lock);


 FUNC_2(VAR_0);

 FUNC_1(VAR_0);


 if (!VAR_0->drm.dev->power.is_suspended)
  FUNC_0(VAR_0);
}
