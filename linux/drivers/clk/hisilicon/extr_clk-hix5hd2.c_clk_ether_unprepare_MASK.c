
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hix5hd2_clk_complex {int ctrl_reg; int ctrl_clk_mask; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hix5hd2_clk_complex* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct hix5hd2_clk_complex *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->ctrl_reg);
 VAR_2 &= ~(VAR_1->ctrl_clk_mask);
 FUNC_2(VAR_2, VAR_1->ctrl_reg);
}
