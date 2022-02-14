
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport_driver {int ignore; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct gameport_driver* FUNC_0 (struct device_driver*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct gameport_driver *VAR_2 = FUNC_0(VAR_1);

 return !VAR_2->ignore;
}
