
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* stats; } ;
struct drm_i915_private {int irq_lock; TYPE_2__ hotplug; } ;
typedef enum hpd_pin { ____Placeholder_hpd_pin } hpd_pin ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct drm_i915_private *VAR_3, enum hpd_pin VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_4 == VAR_2)
  return 0;

 FUNC_0(&VAR_3->irq_lock);
 if (VAR_3->hotplug.stats[VAR_4].state == VAR_1) {
  VAR_3->hotplug.stats[VAR_4].state = VAR_0;
  VAR_5 = 1;
 }
 FUNC_1(&VAR_3->irq_lock);

 return VAR_5;
}
