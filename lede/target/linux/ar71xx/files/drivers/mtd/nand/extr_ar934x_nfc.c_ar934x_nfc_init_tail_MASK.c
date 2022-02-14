
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int chipsize; } ;
struct mtd_info {int oobsize; int erasesize; int writesize; } ;
struct ar934x_nfc {int small_page; int addr_count0; int addr_count1; int ctrl_reg; int parent; struct nand_chip nand_chip; } ;


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
 int FUNC_0 (struct ar934x_nfc*,int) ;
 int FUNC_1 (struct ar934x_nfc*) ;
 int FUNC_2 (struct ar934x_nfc*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct ar934x_nfc* FUNC_4 (struct mtd_info*) ;

__attribute__((used)) static int
FUNC_5(struct mtd_info *VAR_20)
{
 struct ar934x_nfc *VAR_21 = FUNC_4(VAR_20);
 struct nand_chip *VAR_22 = &VAR_21->nand_chip;
 u32 VAR_23;
 u32 VAR_24;
 int VAR_25;

 switch (VAR_20->oobsize) {
 case 16:
 case 64:
 case 128:
  FUNC_2(VAR_21, VAR_18, VAR_20->oobsize);
  break;

 default:
  FUNC_3(VAR_21->parent, "unsupported OOB size: %d bytes\n",
   VAR_20->oobsize);
  return -VAR_19;
 }

 VAR_23 = VAR_7;

 switch (VAR_20->erasesize / VAR_20->writesize) {
 case 32:
  VAR_24 = VAR_4;
  break;

 case 64:
  VAR_24 = VAR_5;
  break;

 case 128:
  VAR_24 = VAR_2;
  break;

 case 256:
  VAR_24 = VAR_3;
  break;

 default:
  FUNC_3(VAR_21->parent, "unsupported block size: %u\n",
   VAR_20->erasesize / VAR_20->writesize);
  return -VAR_19;
 }

 VAR_23 |= VAR_24 << VAR_6;

 switch (VAR_20->writesize) {
 case 256:
  VAR_21->small_page = 1;
  VAR_24 = VAR_11;
  break;

 case 512:
  VAR_21->small_page = 1;
  VAR_24 = VAR_13;
  break;

 case 1024:
  VAR_24 = VAR_8;
  break;

 case 2048:
  VAR_24 = VAR_10;
  break;

 case 4096:
  VAR_24 = VAR_12;
  break;

 case 8192:
  VAR_24 = VAR_14;
  break;

 case 16384:
  VAR_24 = VAR_9;
  break;

 default:
  FUNC_3(VAR_21->parent, "unsupported write size: %d bytes\n",
   VAR_20->writesize);
  return -VAR_19;
 }

 VAR_23 |= VAR_24 << VAR_15;

 if (VAR_21->small_page) {
  VAR_23 |= VAR_16;

  if (VAR_22->chipsize > (32 << 20)) {
   VAR_21->addr_count0 = 4;
   VAR_21->addr_count1 = 3;
  } else if (VAR_22->chipsize > (2 << 16)) {
   VAR_21->addr_count0 = 3;
   VAR_21->addr_count1 = 2;
  } else {
   VAR_21->addr_count0 = 2;
   VAR_21->addr_count1 = 1;
  }
 } else {
  if (VAR_22->chipsize > (128 << 20)) {
   VAR_21->addr_count0 = 5;
   VAR_21->addr_count1 = 3;
  } else if (VAR_22->chipsize > (8 << 16)) {
   VAR_21->addr_count0 = 4;
   VAR_21->addr_count1 = 2;
  } else {
   VAR_21->addr_count0 = 3;
   VAR_21->addr_count1 = 1;
  }
 }

 VAR_23 |= VAR_21->addr_count0 << VAR_0;
 VAR_23 |= VAR_21->addr_count1 << VAR_1;

 VAR_21->ctrl_reg = VAR_23;
 FUNC_2(VAR_21, VAR_17, VAR_21->ctrl_reg);

 FUNC_1(VAR_21);
 VAR_25 = FUNC_0(VAR_21, VAR_20->writesize + VAR_20->oobsize);

 return VAR_25;
}
