
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun8i_hdmi_phy {int regs; int rcal; } ;
struct dw_hdmi {int dummy; } ;


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
 int FUNC_0 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_29 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_11 (int) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_48 ;
 int VAR_49 ;
 int FUNC_13 (int) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_14 (int) ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ,int*) ;
 int FUNC_18 (int ,int ,int,int) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int,int) ;

__attribute__((used)) static int FUNC_21(struct dw_hdmi *VAR_55,
        struct sun8i_hdmi_phy *VAR_56,
        unsigned int VAR_57)
{
 u32 VAR_58;
 u32 VAR_59;
 u32 VAR_60;
 u32 VAR_61;
 u32 VAR_62;
 u32 VAR_63 = 0;
 u32 VAR_64;



 VAR_58 = VAR_42 |
   VAR_41 |
   FUNC_11(7) |
   FUNC_12(1) |
   VAR_43 |
   VAR_39 |
   FUNC_10(2) |
   FUNC_9(63) |
   VAR_35;

 VAR_59 = VAR_51 |
   VAR_52 |
   VAR_50;

 VAR_60 = FUNC_0(1) |
         VAR_1 |
         VAR_8 |
         VAR_0 |
         VAR_7 |
         VAR_14 |
         VAR_10 |
         VAR_19 |
         VAR_20 |
         VAR_22 |
         VAR_21 |
         VAR_5 |
         VAR_4 |
         VAR_3 |
         VAR_2 |
         VAR_13 |
         VAR_12 |
         VAR_11 |
         VAR_6 |
         VAR_16 |
         VAR_15 |
         VAR_9;

 VAR_61 = VAR_23 |
   VAR_28 |
   VAR_27 |
   FUNC_1(1) |
   FUNC_2(1);

 VAR_62 = FUNC_8(0x3e0) |
   VAR_31 |
   VAR_30;


 if (VAR_57 <= 27000000) {
  VAR_58 |= VAR_40 |
     FUNC_9(32);
  VAR_59 |= FUNC_14(4) |
     FUNC_13(4);
  VAR_60 |= VAR_18;
  VAR_61 |= FUNC_4(4) |
     FUNC_3(VAR_56->rcal);
  VAR_62 |= FUNC_6(3) |
     FUNC_5(5);
 } else if (VAR_57 <= 74250000) {
  VAR_58 |= VAR_40 |
     FUNC_9(32);
  VAR_59 |= FUNC_14(4) |
     FUNC_13(5);
  VAR_60 |= VAR_18;
  VAR_61 |= FUNC_4(4) |
     FUNC_3(VAR_56->rcal);
  VAR_62 |= FUNC_6(5) |
     FUNC_5(7);
 } else if (VAR_57 <= 148500000) {
  VAR_58 |= VAR_40 |
     FUNC_9(32);
  VAR_59 |= FUNC_14(4) |
     FUNC_13(6);
  VAR_61 |= VAR_26 |
     VAR_25 |
     FUNC_4(2);
  VAR_62 |= FUNC_6(7) |
     FUNC_5(9);
 } else {
  VAR_63 = 2;
  VAR_58 |= FUNC_9(63);
  VAR_59 |= FUNC_14(6) |
     FUNC_13(7);
  VAR_61 |= VAR_26 |
     VAR_25 |
     FUNC_4(4);
  VAR_62 |= FUNC_6(9) |
     FUNC_5(13) |
     FUNC_7(3);
 }

 FUNC_18(VAR_56->regs, VAR_17,
      VAR_22, 0);





 FUNC_18(VAR_56->regs, VAR_45,
      (u32)~VAR_38,
      VAR_58);
 FUNC_18(VAR_56->regs, VAR_49,
      (u32)~VAR_48,
      VAR_59);
 FUNC_20(10000, 15000);
 FUNC_19(VAR_56->regs, VAR_53,
       VAR_54);
 FUNC_18(VAR_56->regs, VAR_45,
      VAR_44,
      VAR_44);
 FUNC_16(100);


 FUNC_17(VAR_56->regs, VAR_34, &VAR_64);
 VAR_64 = (VAR_64 & VAR_32) >>
  VAR_33;
 VAR_64 = FUNC_15(VAR_64 + VAR_63, (u32)0x3f);

 FUNC_18(VAR_56->regs, VAR_45,
      VAR_47 |
      VAR_46,
      VAR_47 |
      VAR_46);
 FUNC_18(VAR_56->regs, VAR_45,
      VAR_36,
      VAR_64 << VAR_37);
 FUNC_16(100);
 FUNC_19(VAR_56->regs, VAR_17, VAR_60);
 FUNC_19(VAR_56->regs, VAR_24, VAR_61);
 FUNC_19(VAR_56->regs, VAR_29, VAR_62);

 return 0;
}
