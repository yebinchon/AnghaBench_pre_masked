
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_usb_clk {int enable; int busy; scalar_t__ ctrl_mask; int ctrl_enable; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_hw*) ;
 int VAR_3 ;
 int FUNC_1 (struct lpc32xx_usb_clk*) ;
 int FUNC_2 (struct lpc32xx_usb_clk*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,int) ;
 struct lpc32xx_usb_clk* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_4)
{
 struct lpc32xx_usb_clk *VAR_5 = FUNC_7(VAR_4);
 u32 VAR_6, VAR_7, VAR_8;

 FUNC_3("%s: 0x%x\n", FUNC_0(VAR_4), VAR_5->enable);

 if (VAR_5->ctrl_mask) {
  FUNC_4(VAR_3, VAR_2, &VAR_7);
  FUNC_5(VAR_3, VAR_2,
       VAR_5->ctrl_mask, VAR_5->ctrl_enable);
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_5->busy && (VAR_6 & VAR_5->busy) == VAR_5->busy) {
  if (VAR_5->ctrl_mask)
   FUNC_6(VAR_3, VAR_2,
         VAR_7);
  return -VAR_0;
 }

 VAR_6 |= VAR_5->enable;
 FUNC_2(VAR_5, VAR_6);

 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  VAR_6 = FUNC_1(VAR_5);
  if ((VAR_6 & VAR_5->enable) == VAR_5->enable)
   break;
 }

 if ((VAR_6 & VAR_5->enable) == VAR_5->enable)
  return 0;

 if (VAR_5->ctrl_mask)
  FUNC_6(VAR_3, VAR_2, VAR_7);

 return -VAR_1;
}
