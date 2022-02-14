
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;
struct ast2300_dram_param {int dram_freq; scalar_t__ dram_type; int vram_size; int dram_chipid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*,int) ;
 int FUNC_2 (struct ast_private*,int,int) ;
 int FUNC_3 (struct ast_private*,int) ;
 int FUNC_4 (struct ast_private*,int,int) ;
 int FUNC_5 (struct ast_private*,struct ast2300_dram_param*) ;
 int FUNC_6 (struct ast_private*,struct ast2300_dram_param*) ;
 int FUNC_7 (struct ast_private*,struct ast2300_dram_param*) ;
 int FUNC_8 (struct ast_private*,struct ast2300_dram_param*) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_11)
{
 struct ast_private *VAR_12 = VAR_11->dev_private;
 struct ast2300_dram_param VAR_13;
 u32 VAR_14;
 u8 VAR_15;

 VAR_15 = FUNC_0(VAR_12, VAR_6, 0xd0, 0xff);
 if ((VAR_15 & 0x80) == 0) {
  FUNC_4(VAR_12, 0xf004, 0x1e6e0000);
  FUNC_4(VAR_12, 0xf000, 0x1);
  FUNC_4(VAR_12, 0x12000, 0x1688a8a8);
  do {
   ;
  } while (FUNC_3(VAR_12, 0x12000) != 0x1);

  FUNC_4(VAR_12, 0x10000, 0xfc600309);
  do {
   ;
  } while (FUNC_3(VAR_12, 0x10000) != 0x1);


  VAR_14 = FUNC_3(VAR_12, 0x12008);
  VAR_14 |= 0x73;
  FUNC_4(VAR_12, 0x12008, VAR_14);

  VAR_13.dram_freq = 396;
  VAR_13.dram_type = VAR_1;
  VAR_14 = FUNC_1(VAR_12, 0x1e6e2070);
  if (VAR_14 & 0x01000000)
   VAR_13.dram_type = VAR_0;
                switch (VAR_14 & 0x18000000) {
  case 0:
   VAR_13.dram_chipid = VAR_5;
   break;
  default:
  case 0x08000000:
   VAR_13.dram_chipid = VAR_2;
   break;
  case 0x10000000:
   VAR_13.dram_chipid = VAR_3;
   break;
  case 0x18000000:
   VAR_13.dram_chipid = VAR_4;
   break;
  }
                switch (VAR_14 & 0x0c) {
                default:
  case 0x00:
   VAR_13.vram_size = VAR_10;
   break;

  case 0x04:
   VAR_13.vram_size = VAR_7;
   break;

  case 0x08:
   VAR_13.vram_size = VAR_8;
   break;

  case 0x0c:
   VAR_13.vram_size = VAR_9;
   break;
  }

  if (VAR_13.dram_type == VAR_1) {
   FUNC_8(VAR_12, &VAR_13);
   FUNC_6(VAR_12, &VAR_13);
  } else {
   FUNC_7(VAR_12, &VAR_13);
   FUNC_5(VAR_12, &VAR_13);
  }

  VAR_14 = FUNC_1(VAR_12, 0x1e6e2040);
  FUNC_2(VAR_12, 0x1e6e2040, VAR_14 | 0x40);
 }


 do {
  VAR_15 = FUNC_0(VAR_12, VAR_6, 0xd0, 0xff);
 } while ((VAR_15 & 0x40) == 0);
}
