
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int clk; } ;
struct exynos_ppmu {TYPE_1__ ppmu; } ;


 int FUNC_0 (int ) ;
 struct exynos_ppmu* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct exynos_ppmu *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->ppmu.clk);

 return 0;
}
