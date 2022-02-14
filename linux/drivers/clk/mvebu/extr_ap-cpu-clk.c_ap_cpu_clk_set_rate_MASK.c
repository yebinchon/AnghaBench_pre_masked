
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct ap_cpu_clk {unsigned int cluster; TYPE_1__* pll_regs; int pll_cr_base; } ;
struct TYPE_2__ {unsigned int divider_reg; unsigned int cluster_offset; unsigned int force_reg; unsigned int ratio_reg; int divider_mask; int divider_offset; int divider_ratio; unsigned int force_mask; int ratio_state_cluster_offset; scalar_t__ ratio_offset; int ratio_state_reg; scalar_t__ ratio_state_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned int,int*) ;
 int FUNC_2 (int ,int ,int,int,int ,int ) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int ,unsigned int,int) ;
 struct ap_cpu_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_4, unsigned long VAR_5,
          unsigned long VAR_6)
{
 struct ap_cpu_clk *VAR_7 = FUNC_5(VAR_4);
 int VAR_8, VAR_9, VAR_10 = VAR_6 / VAR_5;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = VAR_7->pll_regs->divider_reg +
  (VAR_7->cluster * VAR_7->pll_regs->cluster_offset);
 VAR_12 = VAR_7->pll_regs->force_reg +
  (VAR_7->cluster * VAR_7->pll_regs->cluster_offset);
 VAR_13 = VAR_7->pll_regs->ratio_reg +
  (VAR_7->cluster * VAR_7->pll_regs->cluster_offset);

 FUNC_1(VAR_7->pll_cr_base, VAR_11, &VAR_9);
 VAR_9 &= ~(VAR_7->pll_regs->divider_mask);
 VAR_9 |= (VAR_10 << VAR_7->pll_regs->divider_offset);





 if (VAR_7->pll_regs->divider_ratio) {
  VAR_9 &= ~(VAR_0);
  VAR_9 |= ((VAR_10 * VAR_7->pll_regs->divider_ratio) <<
    VAR_1);
 }
 FUNC_4(VAR_7->pll_cr_base, VAR_11, VAR_9);


 FUNC_3(VAR_7->pll_cr_base, VAR_12,
      VAR_7->pll_regs->force_mask,
      VAR_7->pll_regs->force_mask);

 FUNC_3(VAR_7->pll_cr_base, VAR_13,
      FUNC_0(VAR_7->pll_regs->ratio_offset),
      FUNC_0(VAR_7->pll_regs->ratio_offset));

 VAR_14 = FUNC_0(VAR_7->pll_regs->ratio_state_offset +
    VAR_7->cluster *
    VAR_7->pll_regs->ratio_state_cluster_offset),
 VAR_8 = FUNC_2(VAR_7->pll_cr_base,
           VAR_7->pll_regs->ratio_state_reg, VAR_9,
           VAR_9 & VAR_14, VAR_2,
           VAR_3);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_7->pll_cr_base, VAR_13,
      FUNC_0(VAR_7->pll_regs->ratio_offset), 0);

 return 0;
}
