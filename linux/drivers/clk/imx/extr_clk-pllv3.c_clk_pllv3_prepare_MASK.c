
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv3 {int base; int power_bit; scalar_t__ powerup_set; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_pllv3*) ;
 int FUNC_1 (int ) ;
 struct clk_pllv3* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_pllv3 *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->base);
 if (VAR_1->powerup_set)
  VAR_2 |= VAR_1->power_bit;
 else
  VAR_2 &= ~VAR_1->power_bit;
 FUNC_3(VAR_2, VAR_1->base);

 return FUNC_0(VAR_1);
}
