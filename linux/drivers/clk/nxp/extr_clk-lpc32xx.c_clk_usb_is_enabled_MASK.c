
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_usb_clk {int ctrl_mask; int ctrl_enable; int enable; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpc32xx_usb_clk*) ;
 int FUNC_1 (int ,int ,int*) ;
 struct lpc32xx_usb_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct lpc32xx_usb_clk *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4, VAR_5;

 if (VAR_3->ctrl_mask) {
  FUNC_1(VAR_1, VAR_0, &VAR_4);
  if ((VAR_4 & VAR_3->ctrl_mask) != VAR_3->ctrl_enable)
   return 0;
 }

 VAR_5 = FUNC_0(VAR_3);

 return ((VAR_5 & VAR_3->enable) == VAR_3->enable);
}
