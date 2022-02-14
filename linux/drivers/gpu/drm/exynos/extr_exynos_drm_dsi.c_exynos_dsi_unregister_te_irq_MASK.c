
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int te_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct exynos_dsi*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct exynos_dsi *VAR_1)
{
 if (FUNC_2(VAR_1->te_gpio)) {
  FUNC_0(FUNC_3(VAR_1->te_gpio), VAR_1);
  FUNC_1(VAR_1->te_gpio);
  VAR_1->te_gpio = -VAR_0;
 }
}
