
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sun8i_phy_clk {TYPE_1__* phy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sun8i_phy_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct sun8i_phy_clk *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 > 1)
  return -VAR_0;

 FUNC_1(VAR_6->phy->regs, VAR_3,
      VAR_1,
      VAR_5 << VAR_2);

 return 0;
}
