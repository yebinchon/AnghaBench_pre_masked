
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct f71805f_data {int hwmon_dev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct f71805f_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct f71805f_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_0(VAR_4->hwmon_dev);
 FUNC_2(&VAR_3->dev.kobj, &VAR_0);
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_2(&VAR_3->dev.kobj, &VAR_1[VAR_5]);
 FUNC_2(&VAR_3->dev.kobj, &VAR_2);

 return 0;
}
