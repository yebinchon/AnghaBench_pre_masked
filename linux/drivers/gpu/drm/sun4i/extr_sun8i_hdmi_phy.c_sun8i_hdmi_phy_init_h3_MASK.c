
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_hdmi_phy {unsigned int rcal; int regs; } ;


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
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct sun8i_hdmi_phy*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct sun8i_hdmi_phy *VAR_25)
{
 unsigned int VAR_26;

 FUNC_4(VAR_25);

 FUNC_3(VAR_25->regs, VAR_14, 0);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_5,
      VAR_5);
 FUNC_5(5);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_15,
      VAR_15);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_12,
      VAR_12);
 FUNC_6(10, 20);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_13,
      VAR_13);
 FUNC_5(5);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_4,
      VAR_4);
 FUNC_6(40, 100);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_11,
      VAR_11);
 FUNC_6(100, 200);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_6,
      VAR_6);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_7 |
      VAR_8 |
      VAR_9,
      VAR_7 |
      VAR_8 |
      VAR_9);


 FUNC_1(VAR_25->regs, VAR_21, VAR_26,
     (VAR_26 & VAR_19),
     100, 2000);

 FUNC_2(VAR_25->regs, VAR_14,
      VAR_10,
      VAR_10);
 FUNC_2(VAR_25->regs, VAR_14,
      VAR_0 |
      VAR_1 |
      VAR_2 |
      VAR_3,
      VAR_0 |
      VAR_1 |
      VAR_2 |
      VAR_3);


 FUNC_2(VAR_25->regs, VAR_16,
      VAR_17 |
      VAR_18,
      VAR_17 |
      VAR_18);


 FUNC_2(VAR_25->regs, VAR_24,
      VAR_23, 0);


 FUNC_3(VAR_25->regs, VAR_22, 0);


 FUNC_0(VAR_25->regs, VAR_21, &VAR_26);
 VAR_25->rcal = (VAR_26 & VAR_20) >> 2;
}
