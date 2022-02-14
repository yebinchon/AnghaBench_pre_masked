
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct ap_cpu_clk {unsigned int cluster; TYPE_1__* pll_regs; int pll_cr_base; } ;
struct TYPE_2__ {unsigned int divider_reg; unsigned int cluster_offset; int divider_mask; int divider_offset; } ;


 int FUNC_0 (int ,unsigned int,int*) ;
 struct ap_cpu_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct ap_cpu_clk *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->pll_regs->divider_reg +
  (VAR_2->cluster * VAR_2->pll_regs->cluster_offset);
 FUNC_0(VAR_2->pll_cr_base, VAR_3, &VAR_4);
 VAR_4 &= VAR_2->pll_regs->divider_mask;
 VAR_4 >>= VAR_2->pll_regs->divider_offset;

 return VAR_1 / VAR_4;
}
