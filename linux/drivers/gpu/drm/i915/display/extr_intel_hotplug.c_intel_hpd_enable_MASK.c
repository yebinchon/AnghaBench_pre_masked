
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* stats; } ;
struct drm_i915_private {int irq_lock; TYPE_2__ hotplug; } ;
typedef enum hpd_pin { ____Placeholder_hpd_pin } hpd_pin ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_i915_private *VAR_2, enum hpd_pin VAR_3)
{
 if (VAR_3 == VAR_1)
  return;

 FUNC_0(&VAR_2->irq_lock);
 VAR_2->hotplug.stats[VAR_3].state = VAR_0;
 FUNC_1(&VAR_2->irq_lock);
}
