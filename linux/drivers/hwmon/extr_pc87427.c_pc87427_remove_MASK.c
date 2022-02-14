
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pc87427_data {int hwmon_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct pc87427_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct pc87427_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->hwmon_dev);
 FUNC_1(&VAR_0->dev);

 return 0;
}
