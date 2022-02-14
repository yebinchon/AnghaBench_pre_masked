
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sis5595_data {int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct sis5595_data* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct sis5595_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->hwmon_dev);
 FUNC_2(&VAR_3->dev.kobj, &VAR_0);
 FUNC_2(&VAR_3->dev.kobj, &VAR_1);
 FUNC_2(&VAR_3->dev.kobj, &VAR_2);

 return 0;
}
