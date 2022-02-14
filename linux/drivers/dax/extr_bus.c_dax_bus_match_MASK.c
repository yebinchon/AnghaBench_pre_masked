
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct dax_device_driver {scalar_t__ match_always; } ;


 int FUNC_0 (struct dax_device_driver*,struct device*) ;
 struct dax_device_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct dax_device_driver *VAR_2 = FUNC_1(VAR_1);





 if (VAR_2->match_always)
  return 1;

 return FUNC_0(VAR_2, VAR_0);
}
