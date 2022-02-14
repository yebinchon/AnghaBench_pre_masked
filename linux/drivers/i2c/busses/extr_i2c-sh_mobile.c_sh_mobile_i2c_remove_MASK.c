
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int adap; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct sh_mobile_i2c_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct sh_mobile_i2c_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adap);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_0->dev);
 return 0;
}
