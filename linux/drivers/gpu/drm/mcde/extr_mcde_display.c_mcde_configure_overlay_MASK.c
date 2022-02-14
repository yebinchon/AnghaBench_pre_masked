
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {int regs; int stride; int dev; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
typedef enum mcde_overlay { ____Placeholder_mcde_overlay } mcde_overlay ;
typedef enum mcde_extsrc { ____Placeholder_mcde_extsrc } mcde_extsrc ;
typedef enum mcde_channel { ____Placeholder_mcde_channel } mcde_channel ;
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
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct mcde *VAR_52, enum mcde_overlay VAR_53,
       enum mcde_extsrc VAR_54,
       enum mcde_channel VAR_55,
       const struct drm_display_mode *VAR_56,
       u32 VAR_57)
{
 u32 VAR_58;
 u32 VAR_59;
 u32 VAR_60;
 u32 VAR_61;
 u32 VAR_62;
 u32 VAR_63;
 u32 VAR_64;

 switch (VAR_53) {
 case 133:
  VAR_59 = VAR_1;
  VAR_60 = VAR_2;
  VAR_61 = VAR_4;
  VAR_62 = VAR_5;
  VAR_63 = VAR_3;
  VAR_64 = VAR_0;
  break;
 case 132:
  VAR_59 = VAR_7;
  VAR_60 = VAR_8;
  VAR_61 = VAR_10;
  VAR_62 = VAR_11;
  VAR_63 = VAR_9;
  VAR_64 = VAR_6;
  break;
 case 131:
  VAR_59 = VAR_13;
  VAR_60 = VAR_14;
  VAR_61 = VAR_16;
  VAR_62 = VAR_17;
  VAR_63 = VAR_15;
  VAR_64 = VAR_12;
  break;
 case 130:
  VAR_59 = VAR_19;
  VAR_60 = VAR_20;
  VAR_61 = VAR_22;
  VAR_62 = VAR_23;
  VAR_63 = VAR_21;
  VAR_64 = VAR_18;
  break;
 case 129:
  VAR_59 = VAR_25;
  VAR_60 = VAR_26;
  VAR_61 = VAR_28;
  VAR_62 = VAR_29;
  VAR_63 = VAR_27;
  VAR_64 = VAR_24;
  break;
 case 128:
  VAR_59 = VAR_31;
  VAR_60 = VAR_32;
  VAR_61 = VAR_34;
  VAR_62 = VAR_35;
  VAR_63 = VAR_33;
  VAR_64 = VAR_30;
  break;
 }

 VAR_58 = VAR_56->hdisplay << VAR_43;
 VAR_58 |= VAR_56->vdisplay << VAR_42;

 VAR_58 |= VAR_54 << VAR_41;
 FUNC_1(VAR_58, VAR_52->regs + VAR_59);

 VAR_58 = VAR_38;
 VAR_58 |= 0xff << VAR_37;

 switch (VAR_57) {
 case 143:
 case 145:
 case 144:
 case 146:
 case 136:
 case 138:

  break;
 case 135:
 case 137:
 case 139:
 case 141:
 case 140:
 case 142:
 case 134:
  VAR_58 |= VAR_39;
  break;
 default:
  FUNC_0(VAR_52->dev, "Unknown pixel format 0x%08x\n",
   VAR_57);
  break;
 }

 VAR_58 |= 48 << VAR_40;
 FUNC_1(VAR_58, VAR_52->regs + VAR_60);


 FUNC_1(VAR_52->stride, VAR_52->regs + VAR_62);

 FUNC_1(0, VAR_52->regs + VAR_61);


 VAR_58 = VAR_49;
 VAR_58 |= VAR_46;
 VAR_58 |= VAR_44 <<
  VAR_45;
 VAR_58 |= VAR_47 <<
  VAR_48;

 VAR_58 |= VAR_50 <<
  VAR_51;
 FUNC_1(VAR_58, VAR_52->regs + VAR_63);





 VAR_58 = VAR_55 << VAR_36;
 FUNC_1(VAR_58, VAR_52->regs + VAR_64);
}
