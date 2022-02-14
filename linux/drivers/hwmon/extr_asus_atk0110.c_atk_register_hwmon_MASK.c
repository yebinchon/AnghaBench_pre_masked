
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct atk_data {int hwmon_dev; int attr_groups; TYPE_1__* acpi_dev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,struct atk_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct atk_data *VAR_0)
{
 struct device *VAR_1 = &VAR_0->acpi_dev->dev;

 FUNC_1(VAR_1, "registering hwmon device\n");
 VAR_0->hwmon_dev = FUNC_2(VAR_1, "atk0110",
           VAR_0,
           VAR_0->attr_groups);

 return FUNC_0(VAR_0->hwmon_dev);
}
