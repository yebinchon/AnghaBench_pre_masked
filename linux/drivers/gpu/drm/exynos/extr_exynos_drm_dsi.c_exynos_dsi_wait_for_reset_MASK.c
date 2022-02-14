
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int dev; int completed; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct exynos_dsi *VAR_0)
{
 if (FUNC_2(&VAR_0->completed, FUNC_1(300)))
  return;

 FUNC_0(VAR_0->dev, "timeout waiting for reset\n");
}
