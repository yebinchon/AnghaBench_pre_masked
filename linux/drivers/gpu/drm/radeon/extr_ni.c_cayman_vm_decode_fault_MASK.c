
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,int,char*,char*,int) ;

void FUNC_1(struct radeon_device *VAR_7,
       u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = (VAR_8 & VAR_2) >> VAR_3;
 u32 VAR_11 = (VAR_8 & VAR_0) >> VAR_1;
 u32 VAR_12 = (VAR_8 & VAR_5) >> VAR_6;
 char *VAR_13;

 switch (VAR_10) {
 case 32:
 case 16:
 case 96:
 case 80:
 case 160:
 case 144:
 case 224:
 case 208:
  VAR_13 = "CB";
  break;
 case 33:
 case 17:
 case 97:
 case 81:
 case 161:
 case 145:
 case 225:
 case 209:
  VAR_13 = "CB_FMASK";
  break;
 case 34:
 case 18:
 case 98:
 case 82:
 case 162:
 case 146:
 case 226:
 case 210:
  VAR_13 = "CB_CMASK";
  break;
 case 35:
 case 19:
 case 99:
 case 83:
 case 163:
 case 147:
 case 227:
 case 211:
  VAR_13 = "CB_IMMED";
  break;
 case 36:
 case 20:
 case 100:
 case 84:
 case 164:
 case 148:
 case 228:
 case 212:
  VAR_13 = "DB";
  break;
 case 37:
 case 21:
 case 101:
 case 85:
 case 165:
 case 149:
 case 229:
 case 213:
  VAR_13 = "DB_HTILE";
  break;
 case 38:
 case 22:
 case 102:
 case 86:
 case 166:
 case 150:
 case 230:
 case 214:
  VAR_13 = "SX";
  break;
 case 39:
 case 23:
 case 103:
 case 87:
 case 167:
 case 151:
 case 231:
 case 215:
  VAR_13 = "DB_STEN";
  break;
 case 40:
 case 24:
 case 104:
 case 88:
 case 232:
 case 216:
 case 168:
 case 152:
  VAR_13 = "TC_TFETCH";
  break;
 case 41:
 case 25:
 case 105:
 case 89:
 case 233:
 case 217:
 case 169:
 case 153:
  VAR_13 = "TC_VFETCH";
  break;
 case 42:
 case 26:
 case 106:
 case 90:
 case 234:
 case 218:
 case 170:
 case 154:
  VAR_13 = "VC";
  break;
 case 112:
  VAR_13 = "CP";
  break;
 case 113:
 case 114:
  VAR_13 = "SH";
  break;
 case 115:
  VAR_13 = "VGT";
  break;
 case 178:
  VAR_13 = "IH";
  break;
 case 51:
  VAR_13 = "RLC";
  break;
 case 55:
  VAR_13 = "DMA";
  break;
 case 56:
  VAR_13 = "HDP";
  break;
 default:
  VAR_13 = "unknown";
  break;
 }

 FUNC_0("VM fault (0x%02x, vmid %d) at page %u, %s from %s (%d)\n",
        VAR_12, VAR_11, VAR_9,
        (VAR_8 & VAR_4) ? "write" : "read",
        VAR_13, VAR_10);
}
