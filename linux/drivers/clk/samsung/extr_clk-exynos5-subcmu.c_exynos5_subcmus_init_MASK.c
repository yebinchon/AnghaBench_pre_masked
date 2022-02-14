
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_clk_provider {int reg_base; } ;
struct exynos5_subcmu_info {int nr_suspend_regs; int suspend_regs; int nr_gate_clks; int gate_clks; } ;


 struct exynos5_subcmu_info const** VAR_0 ;
 struct samsung_clk_provider* VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct samsung_clk_provider*,int ,int ) ;
 int VAR_2 ;

void FUNC_2(struct samsung_clk_provider *VAR_3, int VAR_4,
     const struct exynos5_subcmu_info **VAR_5)
{
 VAR_1 = VAR_3;
 VAR_0 = VAR_5;
 VAR_2 = VAR_4;

 for (; VAR_4--; VAR_5++) {
  FUNC_1(VAR_1, (*VAR_5)->gate_clks,
       (*VAR_5)->nr_gate_clks);
  FUNC_0(VAR_1->reg_base, (*VAR_5)->suspend_regs,
     (*VAR_5)->nr_suspend_regs);
 }
}
