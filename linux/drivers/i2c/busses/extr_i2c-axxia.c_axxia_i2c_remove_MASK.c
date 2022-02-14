
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct axxia_i2c_dev {int adapter; int i2c_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct axxia_i2c_dev* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct axxia_i2c_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->i2c_clk);
 FUNC_1(&VAR_1->adapter);

 return 0;
}
