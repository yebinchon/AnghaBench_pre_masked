
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct abx500_temp {int hwmon_dev; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct abx500_temp* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct abx500_temp *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->work);
 FUNC_1(VAR_2->hwmon_dev);
 FUNC_3(&VAR_1->dev.kobj, &VAR_0);

 return 0;
}
