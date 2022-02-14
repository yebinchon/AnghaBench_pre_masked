
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos5_i2c {scalar_t__ op_clock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct exynos5_i2c*,int) ;

__attribute__((used)) static int FUNC_1(struct exynos5_i2c *VAR_1)
{

 int VAR_2 = FUNC_0(VAR_1, 0);

 if (VAR_2 < 0 || VAR_1->op_clock < VAR_0)
  return VAR_2;

 return FUNC_0(VAR_1, 1);
}
