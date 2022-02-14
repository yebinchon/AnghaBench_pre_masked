
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int ddev; scalar_t__ hotplug_mode_update_property; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct qxl_device *VAR_1)
{
 if (VAR_1->hotplug_mode_update_property)
  return 0;

 VAR_1->hotplug_mode_update_property =
  FUNC_0(&VAR_1->ddev, VAR_0,
       "hotplug_mode_update", 0, 1);

 return 0;
}
