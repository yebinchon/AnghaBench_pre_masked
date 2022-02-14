
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_firmware_info {int ucode_id; } ;
typedef enum psp_gfx_fw_type { ____Placeholder_psp_gfx_fw_type } psp_gfx_fw_type ;
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

__attribute__((used)) static int FUNC_0(struct amdgpu_firmware_info *VAR_28,
      enum psp_gfx_fw_type *VAR_29)
{
 switch (VAR_28->ucode_id) {
 case 142:
  *VAR_29 = VAR_13;
  break;
 case 141:
  *VAR_29 = VAR_14;
  break;
 case 140:
  *VAR_29 = VAR_15;
  break;
 case 139:
  *VAR_29 = VAR_16;
  break;
 case 138:
  *VAR_29 = VAR_17;
  break;
 case 137:
  *VAR_29 = VAR_18;
  break;
 case 136:
  *VAR_29 = VAR_19;
  break;
 case 135:
  *VAR_29 = VAR_20;
  break;
 case 156:
  *VAR_29 = VAR_1;
  break;
 case 150:
  *VAR_29 = VAR_6;
  break;
 case 155:
  *VAR_29 = VAR_2;
  break;
 case 154:
  *VAR_29 = VAR_3;
  break;
 case 153:
  *VAR_29 = VAR_4;
  break;
 case 152:
  *VAR_29 = VAR_3;
  break;
 case 151:
  *VAR_29 = VAR_5;
  break;
 case 146:
  *VAR_29 = VAR_9;
  break;
 case 145:
  *VAR_29 = VAR_11;
  break;
 case 144:
  *VAR_29 = VAR_10;
  break;
 case 143:
  *VAR_29 = VAR_12;
  break;
 case 134:
  *VAR_29 = VAR_21;
  break;
 case 133:
  *VAR_29 = VAR_22;
  break;
 case 132:
  *VAR_29 = VAR_23;
  break;
 case 131:
  *VAR_29 = VAR_24;
  break;
 case 130:
  *VAR_29 = VAR_25;
  break;
 case 149:
  *VAR_29 = VAR_7;
  break;
 case 148:
  *VAR_29 = VAR_8;
  break;
 case 129:
  *VAR_29 = VAR_26;
  break;
 case 128:
  *VAR_29 = VAR_27;
  break;
 case 147:
 default:
  return -VAR_0;
 }

 return 0;
}
