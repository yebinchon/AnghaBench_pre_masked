
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hdmi_phy {scalar_t__ regs; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 struct mtk_hdmi_phy* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_9,
           unsigned long VAR_10)
{
 struct mtk_hdmi_phy *VAR_11 = FUNC_1(VAR_9);
 unsigned long VAR_12, VAR_13;

 VAR_13 = (FUNC_0(VAR_11->regs + VAR_1)
        & VAR_8) >> VAR_7;
 switch (VAR_13) {
 case 0x00:
  VAR_12 = VAR_10;
  break;
 case 0x01:
  VAR_12 = VAR_10 / 2;
  break;
 default:
  VAR_12 = VAR_10 / 4;
  break;
 }

 VAR_13 = (FUNC_0(VAR_11->regs + VAR_1)
        & VAR_6) >> VAR_5;
 VAR_12 *= (VAR_13 + 1) * 2;
 VAR_13 = (FUNC_0(VAR_11->regs + VAR_0)
        & VAR_4);
 VAR_12 >>= (VAR_13 >> VAR_3);

 if (FUNC_0(VAR_11->regs + VAR_0) & VAR_2)
  VAR_12 /= 5;

 return VAR_12;
}
