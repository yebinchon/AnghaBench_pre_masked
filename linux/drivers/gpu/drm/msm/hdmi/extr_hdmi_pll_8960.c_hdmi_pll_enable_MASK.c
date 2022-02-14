
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
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (struct hdmi_phy*,int ) ;
 int FUNC_2 (struct hdmi_phy*,int ,int) ;
 struct hdmi_pll_8960* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 () ;
 struct hdmi_phy* FUNC_5 (struct hdmi_pll_8960*) ;
 unsigned int FUNC_6 (struct hdmi_pll_8960*,int ) ;
 int FUNC_7 (struct hdmi_pll_8960*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_12)
{
 struct hdmi_pll_8960 *VAR_13 = FUNC_3(VAR_12);
 struct hdmi_phy *VAR_14 = FUNC_5(VAR_13);
 int VAR_15, VAR_16 = 10;
 unsigned int VAR_17;

 FUNC_0("");


 FUNC_7(VAR_13, VAR_7, 0x8d);
 FUNC_7(VAR_13, VAR_5, 0x10);
 FUNC_7(VAR_13, VAR_6, 0x1a);






 FUNC_8(10);


 FUNC_7(VAR_13, VAR_7, 0x0d);

 VAR_17 = FUNC_1(VAR_14, VAR_10);
 VAR_17 |= VAR_4;

 FUNC_2(VAR_14, VAR_10, VAR_17);
 VAR_17 &= ~VAR_4;





 FUNC_8(10);

 FUNC_2(VAR_14, VAR_10, VAR_17);
 FUNC_2(VAR_14, VAR_11, 0x3f);

 VAR_17 = FUNC_1(VAR_14, VAR_10);
 VAR_17 |= VAR_3;
 FUNC_2(VAR_14, VAR_10, VAR_17);

 FUNC_4();
 FUNC_8(10);

 VAR_17 = FUNC_6(VAR_13, VAR_8);
 VAR_17 |= VAR_1;
 VAR_17 &= ~VAR_0;
 FUNC_7(VAR_13, VAR_8, VAR_17);
 FUNC_2(VAR_14, VAR_11, 0x80);

 VAR_15 = 1000;
 while (--VAR_16 > 0) {

  VAR_17 = FUNC_6(VAR_13, VAR_9);
  if (VAR_17 & VAR_2)
   break;

  FUNC_8(1);

  if (--VAR_15 > 0)
   continue;






  FUNC_7(VAR_13, VAR_7, 0x8d);
  FUNC_8(10);
  FUNC_7(VAR_13, VAR_7, 0x0d);





  FUNC_8(350);

  VAR_15 = 1000;
 }

 return 0;
}
