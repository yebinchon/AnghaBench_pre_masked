
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sch5627_data {scalar_t__ hwmon_dev; scalar_t__ watchdog; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (scalar_t__) ;
 struct sch5627_data* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct sch5627_data *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->watchdog)
  FUNC_2(VAR_2->watchdog);

 if (VAR_2->hwmon_dev)
  FUNC_0(VAR_2->hwmon_dev);

 FUNC_3(&VAR_1->dev.kobj, &VAR_0);

 return 0;
}
