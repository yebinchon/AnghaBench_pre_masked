
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ahci_port {int sense_key; int asc; int bctx; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahci_port*,int,int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_9(struct ahci_port *VAR_6, int VAR_7, uint8_t *VAR_8)
{
 uint8_t *VAR_9;
 uint8_t VAR_10;
 int VAR_11;

 VAR_9 = VAR_8 + 0x40;

 VAR_11 = FUNC_1(VAR_9 + 7);
 VAR_10 = VAR_9[9] >> 6;
 switch (VAR_10) {
 case 0:
 {
  int VAR_12, VAR_13;
  uint64_t VAR_14;
  uint8_t VAR_15, VAR_16[20], *VAR_17;

  VAR_12 = (VAR_9[1] >> 1) & 1;
  VAR_15 = VAR_9[6];
  if (VAR_15 > 1 && VAR_15 != 0xaa) {
   uint32_t VAR_18;
   VAR_6->sense_key = VAR_2;
   VAR_6->asc = 0x24;
   VAR_18 = (VAR_6->sense_key << 12) | VAR_5 | VAR_4;
   VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_18);
   return;
  }
  VAR_17 = VAR_16 + 2;
  *VAR_17++ = 1;
  *VAR_17++ = 1;
  if (VAR_15 <= 1) {
   *VAR_17++ = 0;
   *VAR_17++ = 0x14;
   *VAR_17++ = 1;
   *VAR_17++ = 0;
   if (VAR_12) {
    *VAR_17++ = 0;
    FUNC_6(VAR_17, 0);
    VAR_17 += 3;
   } else {
    *VAR_17++ = 0;
    *VAR_17++ = 0;
    *VAR_17++ = 0;
    *VAR_17++ = 0;
   }
  }
  *VAR_17++ = 0;
  *VAR_17++ = 0x14;
  *VAR_17++ = 0xaa;
  *VAR_17++ = 0;
  VAR_14 = FUNC_5(VAR_6->bctx) / FUNC_4(VAR_6->bctx);
  VAR_14 >>= 2;
  if (VAR_12) {
   *VAR_17++ = 0;
   FUNC_6(VAR_17, VAR_14);
   VAR_17 += 3;
  } else {
   FUNC_3(VAR_17, VAR_14);
   VAR_17 += 4;
  }
  VAR_13 = VAR_17 - VAR_16;
  FUNC_2(VAR_16, VAR_13 - 2);
  if (VAR_11 > VAR_13)
   VAR_11 = VAR_13;
  FUNC_8(VAR_6, VAR_7, VAR_8, VAR_16, VAR_11);
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_3);
  break;
 }
 case 1:
 {
  uint8_t VAR_19[12];

  FUNC_7(VAR_19, 0, sizeof(VAR_19));
  VAR_19[1] = 0xa;
  VAR_19[2] = 0x1;
  VAR_19[3] = 0x1;
  if (VAR_11 > sizeof(VAR_19))
   VAR_11 = sizeof(VAR_19);
  FUNC_8(VAR_6, VAR_7, VAR_8, VAR_19, VAR_11);
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_3);
  break;
 }
 case 2:
 {
  int VAR_20, VAR_21;
  uint64_t VAR_22;
  uint8_t *VAR_23, VAR_24[50];

  VAR_20 = (VAR_9[1] >> 1) & 1;
  VAR_23 = VAR_24 + 2;
  *VAR_23++ = 1;
  *VAR_23++ = 1;

  *VAR_23++ = 1;
  *VAR_23++ = 0x14;
  *VAR_23++ = 0;
  *VAR_23++ = 0xa0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 1;
  *VAR_23++ = 0;
  *VAR_23++ = 0;

  *VAR_23++ = 1;
  *VAR_23++ = 0x14;
  *VAR_23++ = 0;
  *VAR_23++ = 0xa1;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 1;
  *VAR_23++ = 0;
  *VAR_23++ = 0;

  *VAR_23++ = 1;
  *VAR_23++ = 0x14;
  *VAR_23++ = 0;
  *VAR_23++ = 0xa2;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  VAR_22 = FUNC_5(VAR_6->bctx) / FUNC_4(VAR_6->bctx);
  VAR_22 >>= 2;
  if (VAR_20) {
   *VAR_23++ = 0;
   FUNC_6(VAR_23, VAR_22);
   VAR_23 += 3;
  } else {
   FUNC_3(VAR_23, VAR_22);
   VAR_23 += 4;
  }

  *VAR_23++ = 1;
  *VAR_23++ = 0x14;
  *VAR_23++ = 0;
  *VAR_23++ = 1;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  *VAR_23++ = 0;
  if (VAR_20) {
   *VAR_23++ = 0;
   FUNC_6(VAR_23, 0);
   VAR_23 += 3;
  } else {
   *VAR_23++ = 0;
   *VAR_23++ = 0;
   *VAR_23++ = 0;
   *VAR_23++ = 0;
  }

  VAR_21 = VAR_23 - VAR_24;
  FUNC_2(VAR_24, VAR_21 - 2);
  if (VAR_11 > VAR_21)
   VAR_11 = VAR_21;
  FUNC_8(VAR_6, VAR_7, VAR_8, VAR_24, VAR_11);
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_3);
  break;
 }
 default:
 {
  uint32_t VAR_25;

  VAR_6->sense_key = VAR_2;
  VAR_6->asc = 0x24;
  VAR_25 = (VAR_6->sense_key << 12) | VAR_5 | VAR_4;
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_25);
  break;
 }
 }
}
