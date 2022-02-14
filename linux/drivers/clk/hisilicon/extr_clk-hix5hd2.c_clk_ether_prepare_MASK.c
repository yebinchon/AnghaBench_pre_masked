
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hix5hd2_clk_complex {int ctrl_clk_mask; int ctrl_rst_mask; int phy_clk_mask; int phy_rst_mask; int phy_reg; int ctrl_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct hix5hd2_clk_complex* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct hix5hd2_clk_complex *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->ctrl_reg);
 VAR_2 |= VAR_1->ctrl_clk_mask | VAR_1->ctrl_rst_mask;
 FUNC_3(VAR_2, VAR_1->ctrl_reg);
 VAR_2 &= ~(VAR_1->ctrl_rst_mask);
 FUNC_3(VAR_2, VAR_1->ctrl_reg);

 VAR_2 = FUNC_1(VAR_1->phy_reg);
 VAR_2 |= VAR_1->phy_clk_mask;
 VAR_2 &= ~(VAR_1->phy_rst_mask);
 FUNC_3(VAR_2, VAR_1->phy_reg);
 FUNC_0(10);

 VAR_2 &= ~(VAR_1->phy_clk_mask);
 VAR_2 |= VAR_1->phy_rst_mask;
 FUNC_3(VAR_2, VAR_1->phy_reg);
 FUNC_0(10);

 VAR_2 |= VAR_1->phy_clk_mask;
 VAR_2 &= ~(VAR_1->phy_rst_mask);
 FUNC_3(VAR_2, VAR_1->phy_reg);
 FUNC_0(30);
 return 0;
}
