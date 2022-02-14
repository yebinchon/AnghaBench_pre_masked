
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int addr; int hwmon_dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct w83627ehf_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct w83627ehf_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->hwmon_dev);
 FUNC_3(&VAR_1->dev);
 FUNC_2(VAR_2->addr, VAR_0);

 return 0;
}
