
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {struct device_driver* driver; } ;


 int FUNC_0 (struct device*,struct device*) ;
 int FUNC_1 (struct device*,struct device*) ;
 int FUNC_2 (struct device*,struct device*) ;

void FUNC_3(struct device *VAR_0,
        struct device_driver *VAR_1,
        struct device *VAR_2)
{
 FUNC_0(VAR_0, VAR_2);

 if (!VAR_1 || VAR_1 == VAR_0->driver)
  FUNC_2(VAR_0, VAR_2);

 FUNC_1(VAR_0, VAR_2);
}
