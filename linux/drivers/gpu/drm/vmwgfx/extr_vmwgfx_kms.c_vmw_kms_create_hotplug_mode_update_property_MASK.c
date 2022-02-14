
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ hotplug_mode_update_property; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct vmw_private *VAR_1)
{
 if (VAR_1->hotplug_mode_update_property)
  return;

 VAR_1->hotplug_mode_update_property =
  FUNC_0(VAR_1->dev,
       VAR_0,
       "hotplug_mode_update", 0, 1);

 if (!VAR_1->hotplug_mode_update_property)
  return;

}
