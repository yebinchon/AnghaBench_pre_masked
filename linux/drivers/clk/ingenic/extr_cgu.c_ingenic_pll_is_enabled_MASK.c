
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ingenic_clk {struct ingenic_cgu* cgu; } ;
struct ingenic_cgu_pll_info {int enable_bit; scalar_t__ reg; } ;
struct ingenic_cgu_clk_info {struct ingenic_cgu_pll_info pll; } ;
struct ingenic_cgu {int lock; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ingenic_cgu_clk_info* FUNC_4 (struct ingenic_clk*) ;
 struct ingenic_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0)
{
 struct ingenic_clk *VAR_1 = FUNC_5(VAR_0);
 struct ingenic_cgu *VAR_2 = VAR_1->cgu;
 const struct ingenic_cgu_clk_info *VAR_3 = FUNC_4(VAR_1);
 const struct ingenic_cgu_pll_info *VAR_4 = &VAR_3->pll;
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_6 = FUNC_1(VAR_2->base + VAR_4->reg);
 FUNC_3(&VAR_2->lock, VAR_5);

 return !!(VAR_6 & FUNC_0(VAR_4->enable_bit));
}
