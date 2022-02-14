
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reenable_work; int poll_init_work; int hotplug_work; int dig_port_work; scalar_t__ retry_bits; scalar_t__ event_bits; scalar_t__ short_port_mask; scalar_t__ long_port_mask; } ;
struct drm_i915_private {TYPE_1__ hotplug; int irq_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_i915_private *VAR_0)
{
 FUNC_2(&VAR_0->irq_lock);

 VAR_0->hotplug.long_port_mask = 0;
 VAR_0->hotplug.short_port_mask = 0;
 VAR_0->hotplug.event_bits = 0;
 VAR_0->hotplug.retry_bits = 0;

 FUNC_3(&VAR_0->irq_lock);

 FUNC_1(&VAR_0->hotplug.dig_port_work);
 FUNC_0(&VAR_0->hotplug.hotplug_work);
 FUNC_1(&VAR_0->hotplug.poll_init_work);
 FUNC_0(&VAR_0->hotplug.reenable_work);
}
