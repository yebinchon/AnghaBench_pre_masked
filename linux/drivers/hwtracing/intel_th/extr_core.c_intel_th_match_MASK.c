
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_th_driver {int disable; int enable; } ;
struct intel_th_device {scalar_t__ type; int name; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct intel_th_device* FUNC_1 (struct device*) ;
 struct intel_th_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct intel_th_driver *VAR_3 = FUNC_2(VAR_2);
 struct intel_th_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->type == VAR_0 &&
     (!VAR_3->enable || !VAR_3->disable))
  return 0;

 return !FUNC_0(VAR_4->name, VAR_2->name);
}
