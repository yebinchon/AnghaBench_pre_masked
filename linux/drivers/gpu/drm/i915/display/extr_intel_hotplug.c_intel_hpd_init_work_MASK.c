
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reenable_work; int poll_init_work; int dig_port_work; int hotplug_work; } ;
struct drm_i915_private {TYPE_1__ hotplug; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct drm_i915_private *VAR_4)
{
 FUNC_0(&VAR_4->hotplug.hotplug_work,
     VAR_1);
 FUNC_1(&VAR_4->hotplug.dig_port_work, VAR_0);
 FUNC_1(&VAR_4->hotplug.poll_init_work, VAR_2);
 FUNC_0(&VAR_4->hotplug.reenable_work,
     VAR_3);
}
