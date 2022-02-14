
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int te_gpio; int irq; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct exynos_dsi *VAR_0)
{
 FUNC_0(VAR_0->irq);

 if (FUNC_1(VAR_0->te_gpio))
  FUNC_0(FUNC_2(VAR_0->te_gpio));
}
