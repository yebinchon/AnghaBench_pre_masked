
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_pll_8996 {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hdmi_pll_8996*,int ) ;
 struct hdmi_pll_8996* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct hdmi_pll_8996 *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_4 = VAR_3 & FUNC_0(0);

 return VAR_4;
}
