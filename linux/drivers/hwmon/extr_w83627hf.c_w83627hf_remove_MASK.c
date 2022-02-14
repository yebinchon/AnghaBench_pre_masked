
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83627hf_data {int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct w83627hf_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct w83627hf_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->hwmon_dev);

 FUNC_2(&VAR_2->dev.kobj, &VAR_0);
 FUNC_2(&VAR_2->dev.kobj, &VAR_1);

 return 0;
}
