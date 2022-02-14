
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahci_port {int tfd; int xfermode; int mult_sectors; int atapi; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ahci_port*,int,int*,int ) ;
 int FUNC_2 (struct ahci_port*,int,int*) ;
 int FUNC_3 (struct ahci_port*,int,int*) ;
 int FUNC_4 (struct ahci_port*,int,int*,int ) ;
 int FUNC_5 (struct ahci_port*,int,int*,int) ;
 int FUNC_6 (struct ahci_port*,int,int*) ;
 int FUNC_7 (struct ahci_port*,int,int*) ;
 int FUNC_8 (struct ahci_port*,int,int*) ;

__attribute__((used)) static void
FUNC_9(struct ahci_port *VAR_8, int VAR_9, uint8_t *VAR_10)
{

 VAR_8->tfd |= VAR_4;
 switch (VAR_10[2]) {
 case 173:
  FUNC_7(VAR_8, VAR_9, VAR_10);
  break;
 case 148:
 {
  switch (VAR_10[3]) {
  case 143:
   switch (VAR_10[12]) {
   case 151:
    VAR_8->tfd = VAR_5 | VAR_7;
    break;
   default:
    VAR_8->tfd = VAR_6 | VAR_7;
    VAR_8->tfd |= (VAR_1 << 8);
    break;
   }
   break;
  case 142:
  case 145:
  case 144:
  case 146:
   VAR_8->tfd = VAR_5 | VAR_7;
   break;
  case 141:
  {
   switch (VAR_10[12] & 0xf8) {
   case 164:
   case 163:
    break;
   case 135:
   case 136:
    VAR_8->xfermode = (VAR_10[12] & 0x7);
    break;
   }
   VAR_8->tfd = VAR_5 | VAR_7;
   break;
  }
  default:
   VAR_8->tfd = VAR_6 | VAR_7;
   VAR_8->tfd |= (VAR_1 << 8);
   break;
  }
  FUNC_5(VAR_8, VAR_9, VAR_10, VAR_8->tfd);
  break;
 }
 case 147:
  if (VAR_10[12] != 0 &&
   (VAR_10[12] > 128 || (VAR_10[12] & (VAR_10[12] - 1)))) {
   VAR_8->tfd = VAR_6 | VAR_7;
   VAR_8->tfd |= (VAR_1 << 8);
  } else {
   VAR_8->mult_sectors = VAR_10[12];
   VAR_8->tfd = VAR_5 | VAR_7;
  }
  FUNC_5(VAR_8, VAR_9, VAR_10, VAR_8->tfd);
  break;
 case 162:
 case 134:
 case 161:
 case 133:
 case 155:
 case 129:
 case 154:
 case 128:
 case 160:
 case 132:
 case 159:
 case 131:
 case 158:
 case 130:
  FUNC_4(VAR_8, VAR_9, VAR_10, 0);
  break;
 case 170:
 case 169:
  FUNC_2(VAR_8, VAR_9, VAR_10);
  break;
 case 171:
  if (VAR_10[11] == 0 && VAR_10[3] == VAR_0 &&
      VAR_10[13] == 0 && VAR_10[12] == 1) {
   FUNC_1(VAR_8, VAR_9, VAR_10, 0);
   break;
  }
  FUNC_5(VAR_8, VAR_9, VAR_10,
      (VAR_2 << 8) | VAR_7 | VAR_6);
  break;
 case 149:
  if ((VAR_10[13] & 0x1f) == VAR_3 &&
      VAR_10[17] == 0 && VAR_10[16] == VAR_0 &&
      VAR_10[11] == 0 && VAR_10[3] == 1) {
   FUNC_1(VAR_8, VAR_9, VAR_10, 0);
   break;
  }
  FUNC_5(VAR_8, VAR_9, VAR_10,
      (VAR_2 << 8) | VAR_7 | VAR_6);
  break;
 case 156:
 case 157:
  FUNC_3(VAR_8, VAR_9, VAR_10);
  break;
 case 150:
 case 139:
 case 166:
  FUNC_5(VAR_8, VAR_9, VAR_10,
      (VAR_2 << 8) | VAR_7 | VAR_6);
  break;
 case 172:
  VAR_10[12] = 0xff;
  FUNC_5(VAR_8, VAR_9, VAR_10, VAR_7 | VAR_5);
  break;
 case 138:
 case 137:
 case 168:
 case 167:
 case 140:
 case 153:
 case 152:
  FUNC_5(VAR_8, VAR_9, VAR_10, VAR_7 | VAR_5);
  break;
 case 174:
  FUNC_6(VAR_8, VAR_9, VAR_10);
  break;
 case 165:
  if (!VAR_8->atapi) {
   FUNC_5(VAR_8, VAR_9, VAR_10,
       (VAR_2 << 8) | VAR_7 | VAR_6);
  } else
   FUNC_8(VAR_8, VAR_9, VAR_10);
  break;
 default:
  FUNC_0("Unsupported cmd:%02x\n", VAR_10[2]);
  FUNC_5(VAR_8, VAR_9, VAR_10,
      (VAR_2 << 8) | VAR_7 | VAR_6);
  break;
 }
}
