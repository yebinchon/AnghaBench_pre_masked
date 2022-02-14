
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hdmi_phy {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct mtk_hdmi_phy*,int ,int ) ;
 int FUNC_1 (struct mtk_hdmi_phy*,int ,int,int ) ;
 int FUNC_2 (struct mtk_hdmi_phy*,int ,int ) ;
 struct mtk_hdmi_phy* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_36, unsigned long VAR_37,
     unsigned long VAR_38)
{
 struct mtk_hdmi_phy *VAR_39 = FUNC_3(VAR_36);
 u32 VAR_40;

 if (VAR_37 <= 64000000)
  VAR_40 = 3;
 else if (VAR_37 <= 128000000)
  VAR_40 = 2;
 else
  VAR_40 = 1;

 FUNC_2(VAR_39, VAR_4, VAR_35);
 FUNC_2(VAR_39, VAR_4, VAR_34);
 FUNC_2(VAR_39, VAR_2, VAR_11);
 FUNC_1(VAR_39, VAR_4, (0x1 << VAR_30),
     VAR_31);
 FUNC_1(VAR_39, VAR_4, (0x1 << VAR_32),
     VAR_33);
 FUNC_1(VAR_39, VAR_2, (VAR_40 << VAR_16),
     VAR_17);
 FUNC_1(VAR_39, VAR_4, (1 << VAR_28),
     VAR_29);
 FUNC_1(VAR_39, VAR_4, (19 << VAR_26),
     VAR_27);
 FUNC_1(VAR_39, VAR_5, (0x2 << VAR_24),
     VAR_25);
 FUNC_1(VAR_39, VAR_4, (0xc << VAR_20),
     VAR_21);
 FUNC_1(VAR_39, VAR_4, (0x2 << VAR_18),
     VAR_19);
 FUNC_1(VAR_39, VAR_4, (0x1 << VAR_22),
     VAR_23);

 FUNC_0(VAR_39, VAR_1, VAR_14);
 FUNC_1(VAR_39, VAR_1, (0x3 << VAR_12),
     VAR_13);
 FUNC_0(VAR_39, VAR_0, VAR_10);
 FUNC_1(VAR_39, VAR_1, (0x28 << VAR_8),
     VAR_9);
 FUNC_1(VAR_39, VAR_3, 0x28, VAR_15);
 FUNC_1(VAR_39, VAR_0, (0xa << VAR_6),
     VAR_7);
 return 0;
}
