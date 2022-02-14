
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_8,
          u32 VAR_9, u32 VAR_10)
{
 u32 VAR_11 = (VAR_9 & VAR_3) >> VAR_4;
 u32 VAR_12 = (VAR_9 & VAR_1) >> VAR_2;
 u32 VAR_13 = (VAR_9 & VAR_6) >> VAR_7;
 char *VAR_14;

 if (VAR_8->family == VAR_0) {
  switch (VAR_11) {
  case 160:
  case 144:
  case 96:
  case 80:
  case 224:
  case 208:
  case 32:
  case 16:
   VAR_14 = "CB";
   break;
  case 161:
  case 145:
  case 97:
  case 81:
  case 225:
  case 209:
  case 33:
  case 17:
   VAR_14 = "CB_FMASK";
   break;
  case 162:
  case 146:
  case 98:
  case 82:
  case 226:
  case 210:
  case 34:
  case 18:
   VAR_14 = "CB_CMASK";
   break;
  case 163:
  case 147:
  case 99:
  case 83:
  case 227:
  case 211:
  case 35:
  case 19:
   VAR_14 = "CB_IMMED";
   break;
  case 164:
  case 148:
  case 100:
  case 84:
  case 228:
  case 212:
  case 36:
  case 20:
   VAR_14 = "DB";
   break;
  case 165:
  case 149:
  case 101:
  case 85:
  case 229:
  case 213:
  case 37:
  case 21:
   VAR_14 = "DB_HTILE";
   break;
  case 167:
  case 151:
  case 103:
  case 87:
  case 231:
  case 215:
  case 39:
  case 23:
   VAR_14 = "DB_STEN";
   break;
  case 72:
  case 68:
  case 64:
  case 8:
  case 4:
  case 0:
  case 136:
  case 132:
  case 128:
  case 200:
  case 196:
  case 192:
   VAR_14 = "TC";
   break;
  case 112:
  case 48:
   VAR_14 = "CP";
   break;
  case 49:
  case 177:
  case 50:
  case 178:
   VAR_14 = "SH";
   break;
  case 53:
  case 190:
   VAR_14 = "VGT";
   break;
  case 117:
   VAR_14 = "IH";
   break;
  case 51:
  case 115:
   VAR_14 = "RLC";
   break;
  case 119:
  case 183:
   VAR_14 = "DMA0";
   break;
  case 61:
   VAR_14 = "DMA1";
   break;
  case 248:
  case 120:
   VAR_14 = "HDP";
   break;
  default:
   VAR_14 = "unknown";
   break;
  }
 } else {
  switch (VAR_11) {
  case 32:
  case 16:
  case 96:
  case 80:
  case 160:
  case 144:
  case 224:
  case 208:
   VAR_14 = "CB";
   break;
  case 33:
  case 17:
  case 97:
  case 81:
  case 161:
  case 145:
  case 225:
  case 209:
   VAR_14 = "CB_FMASK";
   break;
  case 34:
  case 18:
  case 98:
  case 82:
  case 162:
  case 146:
  case 226:
  case 210:
   VAR_14 = "CB_CMASK";
   break;
  case 35:
  case 19:
  case 99:
  case 83:
  case 163:
  case 147:
  case 227:
  case 211:
   VAR_14 = "CB_IMMED";
   break;
  case 36:
  case 20:
  case 100:
  case 84:
  case 164:
  case 148:
  case 228:
  case 212:
   VAR_14 = "DB";
   break;
  case 37:
  case 21:
  case 101:
  case 85:
  case 165:
  case 149:
  case 229:
  case 213:
   VAR_14 = "DB_HTILE";
   break;
  case 39:
  case 23:
  case 103:
  case 87:
  case 167:
  case 151:
  case 231:
  case 215:
   VAR_14 = "DB_STEN";
   break;
  case 72:
  case 68:
  case 8:
  case 4:
  case 136:
  case 132:
  case 200:
  case 196:
   VAR_14 = "TC";
   break;
  case 112:
  case 48:
   VAR_14 = "CP";
   break;
  case 49:
  case 177:
  case 50:
  case 178:
   VAR_14 = "SH";
   break;
  case 53:
   VAR_14 = "VGT";
   break;
  case 117:
   VAR_14 = "IH";
   break;
  case 51:
  case 115:
   VAR_14 = "RLC";
   break;
  case 119:
  case 183:
   VAR_14 = "DMA0";
   break;
  case 61:
   VAR_14 = "DMA1";
   break;
  case 248:
  case 120:
   VAR_14 = "HDP";
   break;
  default:
   VAR_14 = "unknown";
   break;
  }
 }

 FUNC_0("VM fault (0x%02x, vmid %d) at page %u, %s from %s (%d)\n",
        VAR_13, VAR_12, VAR_10,
        (VAR_9 & VAR_5) ? "write" : "read",
        VAR_14, VAR_11);
}
