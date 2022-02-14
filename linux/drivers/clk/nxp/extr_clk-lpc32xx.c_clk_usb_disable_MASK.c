
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_usb_clk {int ctrl_disable; scalar_t__ ctrl_mask; int enable; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpc32xx_usb_clk*) ;
 int FUNC_1 (struct lpc32xx_usb_clk*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 struct lpc32xx_usb_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_2)
{
 struct lpc32xx_usb_clk *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_3);

 VAR_4 &= ~VAR_3->enable;
 FUNC_1(VAR_3, VAR_4);

 if (VAR_3->ctrl_mask)
  FUNC_2(VAR_1, VAR_0,
       VAR_3->ctrl_mask, VAR_3->ctrl_disable);
}
