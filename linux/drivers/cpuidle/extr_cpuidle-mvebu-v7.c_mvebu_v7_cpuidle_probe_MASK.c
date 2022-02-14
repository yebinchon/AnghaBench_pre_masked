
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int platform_data; } ;
struct platform_device {TYPE_1__ dev; struct platform_device_id* id_entry; } ;
struct cpuidle_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpuidle_driver*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 const struct platform_device_id *VAR_3 = VAR_2->id_entry;

 if (!VAR_3)
  return -VAR_0;

 VAR_1 = VAR_2->dev.platform_data;

 return FUNC_0((struct cpuidle_driver *)VAR_3->driver_data, ((void*)0));
}
