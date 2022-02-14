
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {int regs; int dev; } ;
typedef enum mcde_extsrc { ____Placeholder_mcde_extsrc } mcde_extsrc ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mcde *VAR_36, enum mcde_extsrc VAR_37,
     u32 VAR_38)
{
 u32 VAR_39;
 u32 VAR_40;
 u32 VAR_41;

 switch (VAR_37) {
 case 137:
  VAR_40 = VAR_1;
  VAR_41 = VAR_2;
  break;
 case 136:
  VAR_40 = VAR_3;
  VAR_41 = VAR_4;
  break;
 case 135:
  VAR_40 = VAR_5;
  VAR_41 = VAR_6;
  break;
 case 134:
  VAR_40 = VAR_7;
  VAR_41 = VAR_8;
  break;
 case 133:
  VAR_40 = VAR_9;
  VAR_41 = VAR_10;
  break;
 case 132:
  VAR_40 = VAR_11;
  VAR_41 = VAR_12;
  break;
 case 131:
  VAR_40 = VAR_13;
  VAR_41 = VAR_14;
  break;
 case 130:
  VAR_40 = VAR_15;
  VAR_41 = VAR_16;
  break;
 case 129:
  VAR_40 = VAR_17;
  VAR_41 = VAR_18;
  break;
 case 128:
  VAR_40 = VAR_19;
  VAR_41 = VAR_20;
  break;
 }






 VAR_39 = 0 << VAR_31;
 VAR_39 |= 1 << VAR_32;
 VAR_39 |= 0 << VAR_33;




 switch (VAR_38) {
 case 149:
  VAR_39 |= VAR_23 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 151:
  VAR_39 |= VAR_23 <<
   VAR_28;
  break;
 case 139:
  VAR_39 |= VAR_29 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 142:
  VAR_39 |= VAR_29 <<
   VAR_28;
  break;
 case 145:
  VAR_39 |= VAR_27 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 147:
  VAR_39 |= VAR_27 <<
   VAR_28;
  break;
 case 150:
  VAR_39 |= VAR_22 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 152:
  VAR_39 |= VAR_22 <<
   VAR_28;
  break;
 case 140:
  VAR_39 |= VAR_25 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 143:
  VAR_39 |= VAR_25 <<
   VAR_28;
  break;
 case 141:
  VAR_39 |= VAR_24 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 144:
  VAR_39 |= VAR_24 <<
   VAR_28;
  break;
 case 146:
  VAR_39 |= VAR_26 <<
   VAR_28;
  VAR_39 |= VAR_21;
  break;
 case 148:
  VAR_39 |= VAR_26 <<
   VAR_28;
  break;
 case 138:
  VAR_39 |= VAR_30 <<
   VAR_28;
  break;
 default:
  FUNC_0(VAR_36->dev, "Unknown pixel format 0x%08x\n",
   VAR_38);
  return -VAR_0;
 }
 FUNC_1(VAR_39, VAR_36->regs + VAR_40);


 VAR_39 = VAR_35;
 VAR_39 |= VAR_34;
 FUNC_1(VAR_39, VAR_36->regs + VAR_41);

 return 0;
}
