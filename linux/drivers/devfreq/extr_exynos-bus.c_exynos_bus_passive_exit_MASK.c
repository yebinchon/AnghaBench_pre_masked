
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_bus {int clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct exynos_bus* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct exynos_bus *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(VAR_1->clk);
}
