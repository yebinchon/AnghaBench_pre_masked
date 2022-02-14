
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_cs_packet {size_t idx; int opcode; int count; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (size_t*,size_t) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_3,
       u32 *VAR_4, struct radeon_cs_packet *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = VAR_5->idx + 1;
 u32 VAR_8 = VAR_4[VAR_7];
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 switch (VAR_5->opcode) {
 case 146:
 case 141:
 case 175:
 case 151:
 case 168:
 case 167:
 case 178:
 case 128:
 case 176:
 case 177:
 case 144:
 case 137:
 case 174:
 case 142:
 case 158:
 case 163:
 case 152:
 case 166:
 case 172:
 case 150:
 case 157:
 case 165:
 case 164:
 case 145:
 case 161:
 case 134:
 case 159:
 case 160:
 case 162:
 case 147:
 case 130:
 case 149:
 case 143:
 case 133:
 case 156:
 case 155:
 case 154:
 case 139:
 case 138:
 case 136:
 case 135:
 case 153:
 case 131:
 case 132:
 case 148:
  break;
 case 171:
  if ((VAR_8 & 0xf00) == 0) {
   VAR_11 = VAR_4[VAR_7 + 3] * 4;
   if (!FUNC_2(VAR_11))
    return -VAR_0;
  }
  break;
 case 129:
  if ((VAR_8 & 0xf00) == 0) {
   VAR_9 = VAR_4[VAR_7 + 1] * 4;
   if (VAR_8 & 0x10000) {
    if (!FUNC_2(VAR_9))
     return -VAR_0;
   } else {
    for (VAR_12 = 0; VAR_12 < (VAR_5->count - 2); VAR_12++) {
     VAR_11 = VAR_9 + (4 * VAR_12);
     if (!FUNC_2(VAR_11))
      return -VAR_0;
    }
   }
  }
  break;
 case 173:
  if (VAR_8 & 0x100) {
   VAR_11 = VAR_4[VAR_7 + 5] * 4;
   if (!FUNC_2(VAR_11))
    return -VAR_0;
  }
  break;
 case 170:
  if (VAR_8 & 0x2) {
   VAR_11 = VAR_4[VAR_7 + 3] * 4;
   if (!FUNC_2(VAR_11))
    return -VAR_0;
  }
  break;
 case 140:
  VAR_9 = (VAR_8 << 2) + VAR_2;
  VAR_10 = 4 * VAR_5->count + VAR_9 - 4;
  if ((VAR_9 < VAR_2) ||
      (VAR_9 >= VAR_1) ||
      (VAR_10 >= VAR_1)) {
   FUNC_0("bad PACKET3_SET_CONFIG_REG\n");
   return -VAR_0;
  }
  for (VAR_12 = 0; VAR_12 < VAR_5->count; VAR_12++) {
   VAR_11 = VAR_9 + (4 * VAR_12);
   if (!FUNC_2(VAR_11))
    return -VAR_0;
  }
  break;
 case 169:
  VAR_6 = FUNC_1(VAR_4, VAR_7);
  if (VAR_6)
   return VAR_6;
  break;
 default:
  FUNC_0("Invalid GFX packet3: 0x%x\n", VAR_5->opcode);
  return -VAR_0;
 }
 return 0;
}
