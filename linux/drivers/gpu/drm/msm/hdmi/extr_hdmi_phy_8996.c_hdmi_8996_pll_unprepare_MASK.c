
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_pll_8996 {int dummy; } ;
struct hdmi_phy {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdmi_phy*,int ,int) ;
 struct hdmi_pll_8996* FUNC_1 (struct clk_hw*) ;
 struct hdmi_phy* FUNC_2 (struct hdmi_pll_8996*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_1)
{
 struct hdmi_pll_8996 *VAR_2 = FUNC_1(VAR_1);
 struct hdmi_phy *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3, VAR_0, 0x6);
 FUNC_3(100, 150);
}
