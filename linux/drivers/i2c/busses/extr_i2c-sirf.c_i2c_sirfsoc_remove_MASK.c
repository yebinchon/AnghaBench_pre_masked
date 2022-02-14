
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_i2c {int clk; scalar_t__ base; } ;
struct platform_device {int dummy; } ;
struct i2c_adapter {struct sirfsoc_i2c* algo_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct i2c_adapter *VAR_3 = FUNC_3(VAR_2);
 struct sirfsoc_i2c *VAR_4 = VAR_3->algo_data;

 FUNC_4(VAR_1, VAR_4->base + VAR_0);
 FUNC_2(VAR_3);
 FUNC_1(VAR_4->clk);
 FUNC_0(VAR_4->clk);
 return 0;
}
