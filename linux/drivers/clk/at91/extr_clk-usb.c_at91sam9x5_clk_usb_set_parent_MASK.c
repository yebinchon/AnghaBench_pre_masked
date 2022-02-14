
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct at91sam9x5_clk_usb {int usbs_mask; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct at91sam9x5_clk_usb* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2, u8 VAR_3)
{
 struct at91sam9x5_clk_usb *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 > 1)
  return -VAR_1;

 FUNC_0(VAR_4->regmap, VAR_0, VAR_4->usbs_mask, VAR_3);

 return 0;
}
