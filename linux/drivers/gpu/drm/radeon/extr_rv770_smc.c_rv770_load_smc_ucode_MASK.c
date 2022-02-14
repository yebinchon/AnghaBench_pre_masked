
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct radeon_device {int family; TYPE_1__* smc_fw; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
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
 int FUNC_1 (char*) ;
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
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_2 (struct radeon_device*,int ) ;
 int FUNC_3 (struct radeon_device*,int ,int const*,int ,int ) ;
 int FUNC_4 (struct radeon_device*,int ,int const*,int ) ;
 int VAR_59 ;
 int VAR_60 ;

int FUNC_5(struct radeon_device *VAR_61,
    u16 VAR_62)
{
 int VAR_63;
 const u8 *VAR_64;
 u16 VAR_65;
 u16 VAR_66;
 const u8 *VAR_67;
 u16 VAR_68;
 u16 VAR_69;

 if (!VAR_61->smc_fw)
  return -VAR_20;

 FUNC_2(VAR_61, VAR_62);

 switch (VAR_61->family) {
 case 129:
  VAR_68 = VAR_44;
  VAR_69 = VAR_43;
  VAR_64 = (const u8 *)&VAR_59;
  VAR_65 = VAR_42;
  VAR_66 = VAR_41;
  break;
 case 131:
  VAR_68 = VAR_36;
  VAR_69 = VAR_35;
  VAR_64 = (const u8 *)&VAR_57;
  VAR_65 = VAR_34;
  VAR_66 = VAR_33;
  break;
 case 132:
  VAR_68 = VAR_32;
  VAR_69 = VAR_31;
  VAR_64 = (const u8 *)&VAR_56;
  VAR_65 = VAR_30;
  VAR_66 = VAR_29;
  break;
 case 130:
  VAR_68 = VAR_40;
  VAR_69 = VAR_39;
  VAR_64 = (const u8 *)&VAR_58;
  VAR_65 = VAR_38;
  VAR_66 = VAR_37;
  break;
 case 137:
  VAR_68 = VAR_15;
  VAR_69 = VAR_14;
  VAR_64 = (const u8 *)&VAR_52;
  VAR_65 = VAR_13;
  VAR_66 = VAR_12;
  break;
 case 133:
  VAR_68 = VAR_28;
  VAR_69 = VAR_27;
  VAR_64 = (const u8 *)&VAR_55;
  VAR_65 = VAR_26;
  VAR_66 = VAR_25;
  break;
 case 134:
  VAR_68 = VAR_24;
  VAR_69 = VAR_23;
  VAR_64 = (const u8 *)&VAR_54;
  VAR_65 = VAR_22;
  VAR_66 = VAR_21;
  break;
 case 136:
 case 135:
  VAR_68 = VAR_19;
  VAR_69 = VAR_18;
  VAR_64 = (const u8 *)&VAR_53;
  VAR_65 = VAR_17;
  VAR_66 = VAR_16;
  break;
 case 140:
  VAR_68 = VAR_3;
  VAR_69 = VAR_2;
  VAR_64 = (const u8 *)&VAR_49;
  VAR_65 = VAR_1;
  VAR_66 = VAR_0;
  break;
 case 128:
  VAR_68 = VAR_48;
  VAR_69 = VAR_47;
  VAR_64 = (const u8 *)&VAR_60;
  VAR_65 = VAR_46;
  VAR_66 = VAR_45;
  break;
 case 139:
  VAR_68 = VAR_7;
  VAR_69 = VAR_6;
  VAR_64 = (const u8 *)&VAR_50;
  VAR_65 = VAR_5;
  VAR_66 = VAR_4;
  break;
 case 138:
  VAR_68 = VAR_11;
  VAR_69 = VAR_10;
  VAR_64 = (const u8 *)&VAR_51;
  VAR_65 = VAR_9;
  VAR_66 = VAR_8;
  break;
 default:
  FUNC_1("unknown asic in smc ucode loader\n");
  FUNC_0();
 }


 VAR_67 = (const u8 *)VAR_61->smc_fw->data;
 VAR_63 = FUNC_3(VAR_61, VAR_68,
          VAR_67, VAR_69, VAR_62);
 if (VAR_63)
  return VAR_63;


 VAR_63 = FUNC_4(VAR_61, VAR_65,
           VAR_64, VAR_66);
 if (VAR_63)
  return VAR_63;

 return 0;
}
