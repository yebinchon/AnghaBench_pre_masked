
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct radeon_device {int bios_header_start; int bios; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef enum radeon_combios_table_offset { ____Placeholder_radeon_combios_table_offset } radeon_combios_table_offset ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint16_t FUNC_2(struct drm_device *VAR_0,
      enum radeon_combios_table_offset VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev_private;
 int VAR_3, VAR_4;
 uint16_t VAR_5 = 0, VAR_6;

 if (!VAR_2->bios)
  return 0;

 switch (VAR_1) {

 case 172:
  VAR_6 = 0xc;
  break;
 case 167:
  VAR_6 = 0x14;
  break;
 case 162:
  VAR_6 = 0x2a;
  break;
 case 147:
  VAR_6 = 0x2c;
  break;
 case 164:
  VAR_6 = 0x2e;
  break;
 case 139:
  VAR_6 = 0x30;
  break;
 case 129:
  VAR_6 = 0x32;
  break;
 case 160:
  VAR_6 = 0x34;
  break;
 case 152:
  VAR_6 = 0x36;
  break;
 case 142:
  VAR_6 = 0x38;
  break;
 case 128:
  VAR_6 = 0x3e;
  break;
 case 148:
  VAR_6 = 0x40;
  break;
 case 143:
  VAR_6 = 0x42;
  break;
 case 138:
  VAR_6 = 0x46;
  break;
 case 145:
  VAR_6 = 0x48;
  break;
 case 133:
  VAR_6 = 0x4a;
  break;
 case 153:
  VAR_6 = 0x4c;
  break;
 case 171:
  VAR_6 = 0x4e;
  break;
 case 165:
  VAR_6 = 0x50;
  break;
 case 159:
  VAR_6 = 0x52;
  break;
 case 134:
  VAR_6 = 0x54;
  break;
 case 156:
  VAR_6 = 0x58;
  break;
 case 146:
  VAR_6 = 0x5a;
  break;
 case 157:
  VAR_6 = 0x5c;
  break;
 case 144:
  VAR_6 = 0x5e;
  break;
 case 163:
  VAR_6 = 0x60;
  break;
 case 150:
  VAR_6 = 0x62;
  break;
 case 166:
  VAR_6 = 0x64;
  break;
 case 155:
  VAR_6 = 0x66;
  break;
 case 140:
  VAR_6 = 0x68;
  break;
 case 141:
  VAR_6 = 0x6a;
  break;
 case 158:
  VAR_6 = 0x6c;
  break;
 case 136:
  VAR_6 = 0x6e;
  break;
 case 151:
  VAR_6 = 0x70;
  break;

 case 170:
  VAR_6 =
      FUNC_2(VAR_0, 144);
  if (VAR_6) {
   VAR_3 = FUNC_1(VAR_6);
   if (VAR_3 > 0) {
    VAR_6 = FUNC_0(VAR_6 + 0x3);
    if (VAR_6)
     VAR_5 = VAR_6;
   }
  }
  break;
 case 169:
  VAR_6 =
      FUNC_2(VAR_0, 144);
  if (VAR_6) {
   VAR_3 = FUNC_1(VAR_6);
   if (VAR_3 > 0) {
    VAR_6 = FUNC_0(VAR_6 + 0x5);
    if (VAR_6)
     VAR_5 = VAR_6;
   }
  }
  break;
 case 161:
  VAR_6 =
      FUNC_2(VAR_0, 144);
  if (VAR_6) {
   VAR_3 = FUNC_1(VAR_6);
   if (VAR_3 > 0) {
    VAR_6 = FUNC_0(VAR_6 + 0x7);
    if (VAR_6)
     VAR_5 = VAR_6;
   }
  }
  break;
 case 168:
  VAR_6 =
      FUNC_2(VAR_0, 144);
  if (VAR_6) {
   VAR_3 = FUNC_1(VAR_6);
   if (VAR_3 == 2) {
    VAR_6 = FUNC_0(VAR_6 + 0x9);
    if (VAR_6)
     VAR_5 = VAR_6;
   }
  }
  break;
 case 135:
  VAR_6 =
      FUNC_2(VAR_0, 145);
  if (VAR_6) {
   while (FUNC_1(VAR_6++));
   VAR_6 += 2;
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 case 137:
  VAR_6 =
      FUNC_2(VAR_0, 143);
  if (VAR_6) {
   VAR_6 = FUNC_0(VAR_6 + 0x11);
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 case 154:
  VAR_6 =
      FUNC_2(VAR_0, 143);
  if (VAR_6) {
   VAR_6 = FUNC_0(VAR_6 + 0x13);
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 case 149:
  VAR_6 =
      FUNC_2(VAR_0, 143);
  if (VAR_6) {
   VAR_6 = FUNC_0(VAR_6 + 0x15);
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 case 130:
  VAR_6 =
      FUNC_2(VAR_0, 143);
  if (VAR_6) {
   VAR_6 = FUNC_0(VAR_6 + 0x17);
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 case 131:
  VAR_6 =
      FUNC_2(VAR_0, 130);
  if (VAR_6) {
   VAR_6 = FUNC_0(VAR_6 + 0x2);
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 case 132:
  VAR_6 =
      FUNC_2(VAR_0, 130);
  if (VAR_6) {
   VAR_6 = FUNC_0(VAR_6 + 0x4);
   if (VAR_6)
    VAR_5 = VAR_6;
  }
  break;
 default:
  VAR_6 = 0;
  break;
 }

 VAR_4 = FUNC_1(VAR_2->bios_header_start + 0x6);

 if (VAR_1 < 170 && VAR_6 && VAR_6 < VAR_4)
  VAR_5 = FUNC_0(VAR_2->bios_header_start + VAR_6);

 return VAR_5;
}
