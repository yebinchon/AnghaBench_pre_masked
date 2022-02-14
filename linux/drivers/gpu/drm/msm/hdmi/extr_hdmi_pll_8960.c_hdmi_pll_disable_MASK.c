
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_pll_8960 {int dummy; } ;
struct hdmi_phy {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct hdmi_phy*,int ) ;
 int FUNC_2 (struct hdmi_phy*,int ,unsigned int) ;
 struct hdmi_pll_8960* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 () ;
 struct hdmi_phy* FUNC_5 (struct hdmi_pll_8960*) ;
 unsigned int FUNC_6 (struct hdmi_pll_8960*,int ) ;
 int FUNC_7 (struct hdmi_pll_8960*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct clk_hw *VAR_4)
{
 struct hdmi_pll_8960 *VAR_5 = FUNC_3(VAR_4);
 struct hdmi_phy *VAR_6 = FUNC_5(VAR_5);
 unsigned int VAR_7;

 FUNC_0("");

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_7 &= ~VAR_0;
 FUNC_2(VAR_6, VAR_3, VAR_7);

 VAR_7 = FUNC_6(VAR_5, VAR_2);
 VAR_7 |= VAR_1;
 VAR_7 &= ~VAR_0;
 FUNC_7(VAR_5, VAR_2, VAR_7);

 FUNC_4();
}
