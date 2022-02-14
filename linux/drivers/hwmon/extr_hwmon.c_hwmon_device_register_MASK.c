
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 struct device* FUNC_0 (struct device*,int *,int *,int *,int *) ;
 int FUNC_1 (struct device*,char*) ;

struct device *FUNC_2(struct device *VAR_0)
{
 FUNC_1(VAR_0,
   "hwmon_device_register() is deprecated. Please convert the driver to use hwmon_device_register_with_info().\n");

 return FUNC_0(VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
