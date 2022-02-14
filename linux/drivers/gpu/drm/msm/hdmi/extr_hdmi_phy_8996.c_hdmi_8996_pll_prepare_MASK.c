
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_pll_8996 {int dummy; } ;
struct hdmi_phy {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hdmi_phy*) ;
 int FUNC_1 (struct hdmi_pll_8996*) ;
 int FUNC_2 (struct hdmi_phy*,int ,int) ;
 int FUNC_3 (struct hdmi_pll_8996*,int ,int) ;
 int FUNC_4 (struct hdmi_pll_8996*,int,int ,int) ;
 struct hdmi_pll_8996* FUNC_5 (struct clk_hw*) ;
 struct hdmi_phy* FUNC_6 (struct hdmi_pll_8996*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_8)
{
 struct hdmi_pll_8996 *VAR_9 = FUNC_5(VAR_8);
 struct hdmi_phy *VAR_10 = FUNC_6(VAR_9);
 int VAR_11, VAR_12 = 0;

 FUNC_2(VAR_10, VAR_1, 0x1);
 FUNC_7(100);

 FUNC_2(VAR_10, VAR_1, 0x19);
 FUNC_7(100);

 VAR_12 = FUNC_1(VAR_9);
 if (!VAR_12)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  FUNC_4(VAR_9, VAR_11,
   VAR_7,
   0x6F);


 FUNC_3(VAR_9, VAR_3, 0x0);
 FUNC_3(VAR_9, VAR_4, 0x0);
 FUNC_3(VAR_9, VAR_5, 0x0);
 FUNC_3(VAR_9, VAR_6, 0x0);
 FUNC_3(VAR_9, VAR_2, 0x2);

 VAR_12 = FUNC_0(VAR_10);
 if (!VAR_12)
  return VAR_12;


 FUNC_2(VAR_10, VAR_1, 0x18);
 FUNC_7(1);
 FUNC_2(VAR_10, VAR_1, 0x19);

 return 0;
}
