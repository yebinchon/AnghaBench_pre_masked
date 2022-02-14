
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sun8i_phy_clk {TYPE_1__* phy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sun8i_phy_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_3)
{
 struct sun8i_phy_clk *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5;

 FUNC_1(VAR_4->phy->regs, VAR_2, &VAR_5);
 VAR_5 = (VAR_5 & VAR_0) >>
       VAR_1;

 return VAR_5;
}
