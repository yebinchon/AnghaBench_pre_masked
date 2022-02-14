
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_driver {scalar_t__ id_table; } ;
struct platform_device {scalar_t__ name; scalar_t__ driver_override; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 scalar_t__ FUNC_1 (struct device*,struct device_driver*) ;
 int * FUNC_2 (scalar_t__,struct platform_device*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 struct platform_device* FUNC_4 (struct device*) ;
 struct platform_driver* FUNC_5 (struct device_driver*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_4(VAR_0);
 struct platform_driver *VAR_3 = FUNC_5(VAR_1);


 if (VAR_2->driver_override)
  return !FUNC_3(VAR_2->driver_override, VAR_1->name);


 if (FUNC_1(VAR_0, VAR_1))
  return 1;


 if (FUNC_0(VAR_0, VAR_1))
  return 1;


 if (VAR_3->id_table)
  return FUNC_2(VAR_3->id_table, VAR_2) != ((void*)0);


 return (FUNC_3(VAR_2->name, VAR_1->name) == 0);
}
