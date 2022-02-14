
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hix5hd2_clk_complex {int phy_reg; int phy_rst_mask; int phy_clk_mask; int ctrl_reg; int ctrl_rst_mask; int ctrl_clk_mask; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hix5hd2_clk_complex* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct hix5hd2_clk_complex *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->ctrl_reg);
 VAR_2 |= VAR_1->ctrl_clk_mask;
 VAR_2 &= ~(VAR_1->ctrl_rst_mask);
 FUNC_2(VAR_2, VAR_1->ctrl_reg);

 VAR_2 = FUNC_0(VAR_1->phy_reg);
 VAR_2 |= VAR_1->phy_clk_mask;
 VAR_2 &= ~(VAR_1->phy_rst_mask);
 FUNC_2(VAR_2, VAR_1->phy_reg);

 return 0;
}
