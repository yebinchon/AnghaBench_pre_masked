
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct exynos5_i2c* algo_data; } ;
struct exynos5_i2c {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct exynos5_i2c*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
   struct i2c_msg *VAR_1, int VAR_2)
{
 struct exynos5_i2c *VAR_3 = VAR_0->algo_data;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_3->clk);
 if (VAR_5)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  VAR_5 = FUNC_2(VAR_3, VAR_1 + VAR_4, VAR_4 + 1 == VAR_2);
  if (VAR_5)
   break;
 }

 FUNC_0(VAR_3->clk);

 return VAR_5 ?: VAR_2;
}
