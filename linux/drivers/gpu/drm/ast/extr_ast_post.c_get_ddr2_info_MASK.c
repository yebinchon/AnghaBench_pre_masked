
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;
struct ast2300_dram_param {int reg_MADJ; int reg_SADJ; int reg_DRV; int reg_PERIOD; int dram_freq; int rodt; int wodt; int reg_AC1; int reg_AC2; int reg_DQSIC; int reg_MRS; int reg_EMRS; int reg_IOZ; int reg_DQIDLY; int reg_FREQ; int madj_max; int dll2_finetune_step; int dram_chipid; int dram_config; int vram_size; } ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ast_private *VAR_0, struct ast2300_dram_param *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 FUNC_1(VAR_0, 0x1E6E2000, 0x1688A8A8);


 VAR_2 = (FUNC_0(VAR_0, 0x1E6E2070) >> 25) & 0x3;
 VAR_3 = (VAR_2 << 20) | (VAR_2 << 16);
 VAR_3 += 0x00110000;
 VAR_4 = 0x00000040 | (VAR_2 << 4);


 VAR_1->reg_MADJ = 0x00034C4C;
 VAR_1->reg_SADJ = 0x00001800;
 VAR_1->reg_DRV = 0x000000F0;
 VAR_1->reg_PERIOD = VAR_1->dram_freq;
 VAR_1->rodt = 0;

 switch (VAR_1->dram_freq) {
 case 264:
  FUNC_1(VAR_0, 0x1E6E2020, 0x0130);
  VAR_1->wodt = 0;
  VAR_1->reg_AC1 = 0x11101513;
  VAR_1->reg_AC2 = 0x78117011;
  VAR_1->reg_DQSIC = 0x00000092;
  VAR_1->reg_MRS = 0x00000842;
  VAR_1->reg_EMRS = 0x00000000;
  VAR_1->reg_DRV = 0x000000F0;
  VAR_1->reg_IOZ = 0x00000034;
  VAR_1->reg_DQIDLY = 0x0000005A;
  VAR_1->reg_FREQ = 0x00004AC0;
  VAR_1->madj_max = 138;
  VAR_1->dll2_finetune_step = 3;
  break;
 case 336:
  FUNC_1(VAR_0, 0x1E6E2020, 0x0190);
  VAR_1->wodt = 1;
  VAR_1->reg_AC1 = 0x22202613;
  VAR_1->reg_AC2 = 0xAA009016 | VAR_3;
  VAR_1->reg_DQSIC = 0x000000BA;
  VAR_1->reg_MRS = 0x00000A02 | VAR_4;
  VAR_1->reg_EMRS = 0x00000040;
  VAR_1->reg_DRV = 0x000000FA;
  VAR_1->reg_IOZ = 0x00000034;
  VAR_1->reg_DQIDLY = 0x00000074;
  VAR_1->reg_FREQ = 0x00004DC0;
  VAR_1->madj_max = 96;
  VAR_1->dll2_finetune_step = 3;
  switch (VAR_1->dram_chipid) {
  default:
  case 132:
   VAR_1->reg_AC2 = 0xAA009012 | VAR_3;
   break;
  case 135:
   VAR_1->reg_AC2 = 0xAA009016 | VAR_3;
   break;
  case 134:
   VAR_1->reg_AC2 = 0xAA009023 | VAR_3;
   break;
  case 133:
   VAR_1->reg_AC2 = 0xAA00903B | VAR_3;
   break;
  }
  break;
 default:
 case 396:
  FUNC_1(VAR_0, 0x1E6E2020, 0x03F1);
  VAR_1->wodt = 1;
  VAR_1->rodt = 0;
  VAR_1->reg_AC1 = 0x33302714;
  VAR_1->reg_AC2 = 0xCC00B01B | VAR_3;
  VAR_1->reg_DQSIC = 0x000000E2;
  VAR_1->reg_MRS = 0x00000C02 | VAR_4;
  VAR_1->reg_EMRS = 0x00000040;
  VAR_1->reg_DRV = 0x000000FA;
  VAR_1->reg_IOZ = 0x00000034;
  VAR_1->reg_DQIDLY = 0x00000089;
  VAR_1->reg_FREQ = 0x00005040;
  VAR_1->madj_max = 96;
  VAR_1->dll2_finetune_step = 4;

  switch (VAR_1->dram_chipid) {
  case 132:
   VAR_1->reg_AC2 = 0xCC00B016 | VAR_3;
   break;
  default:
  case 135:
   VAR_1->reg_AC2 = 0xCC00B01B | VAR_3;
   break;
  case 134:
   VAR_1->reg_AC2 = 0xCC00B02B | VAR_3;
   break;
  case 133:
   VAR_1->reg_AC2 = 0xCC00B03F | VAR_3;
   break;
  }

  break;

 case 408:
  FUNC_1(VAR_0, 0x1E6E2020, 0x01F0);
  VAR_1->wodt = 1;
  VAR_1->rodt = 0;
  VAR_1->reg_AC1 = 0x33302714;
  VAR_1->reg_AC2 = 0xCC00B01B | VAR_3;
  VAR_1->reg_DQSIC = 0x000000E2;
  VAR_1->reg_MRS = 0x00000C02 | VAR_4;
  VAR_1->reg_EMRS = 0x00000040;
  VAR_1->reg_DRV = 0x000000FA;
  VAR_1->reg_IOZ = 0x00000034;
  VAR_1->reg_DQIDLY = 0x00000089;
  VAR_1->reg_FREQ = 0x000050C0;
  VAR_1->madj_max = 96;
  VAR_1->dll2_finetune_step = 4;

  switch (VAR_1->dram_chipid) {
  case 132:
   VAR_1->reg_AC2 = 0xCC00B016 | VAR_3;
   break;
  default:
  case 135:
   VAR_1->reg_AC2 = 0xCC00B01B | VAR_3;
   break;
  case 134:
   VAR_1->reg_AC2 = 0xCC00B02B | VAR_3;
   break;
  case 133:
   VAR_1->reg_AC2 = 0xCC00B03F | VAR_3;
   break;
  }

  break;
 case 456:
  FUNC_1(VAR_0, 0x1E6E2020, 0x0230);
  VAR_1->wodt = 0;
  VAR_1->reg_AC1 = 0x33302815;
  VAR_1->reg_AC2 = 0xCD44B01E;
  VAR_1->reg_DQSIC = 0x000000FC;
  VAR_1->reg_MRS = 0x00000E72;
  VAR_1->reg_EMRS = 0x00000000;
  VAR_1->reg_DRV = 0x00000000;
  VAR_1->reg_IOZ = 0x00000034;
  VAR_1->reg_DQIDLY = 0x00000097;
  VAR_1->reg_FREQ = 0x000052C0;
  VAR_1->madj_max = 88;
  VAR_1->dll2_finetune_step = 3;
  break;
 case 504:
  FUNC_1(VAR_0, 0x1E6E2020, 0x0261);
  VAR_1->wodt = 1;
  VAR_1->rodt = 1;
  VAR_1->reg_AC1 = 0x33302815;
  VAR_1->reg_AC2 = 0xDE44C022;
  VAR_1->reg_DQSIC = 0x00000117;
  VAR_1->reg_MRS = 0x00000E72;
  VAR_1->reg_EMRS = 0x00000040;
  VAR_1->reg_DRV = 0x0000000A;
  VAR_1->reg_IOZ = 0x00000045;
  VAR_1->reg_DQIDLY = 0x000000A0;
  VAR_1->reg_FREQ = 0x000054C0;
  VAR_1->madj_max = 79;
  VAR_1->dll2_finetune_step = 3;
  break;
 case 528:
  FUNC_1(VAR_0, 0x1E6E2020, 0x0120);
  VAR_1->wodt = 1;
  VAR_1->rodt = 1;
  VAR_1->reg_AC1 = 0x33302815;
  VAR_1->reg_AC2 = 0xEF44D024;
  VAR_1->reg_DQSIC = 0x00000125;
  VAR_1->reg_MRS = 0x00000E72;
  VAR_1->reg_EMRS = 0x00000004;
  VAR_1->reg_DRV = 0x000000F9;
  VAR_1->reg_IOZ = 0x00000045;
  VAR_1->reg_DQIDLY = 0x000000A7;
  VAR_1->reg_FREQ = 0x000055C0;
  VAR_1->madj_max = 76;
  VAR_1->dll2_finetune_step = 3;
  break;
 case 552:
  FUNC_1(VAR_0, 0x1E6E2020, 0x02A1);
  VAR_1->wodt = 1;
  VAR_1->rodt = 1;
  VAR_1->reg_AC1 = 0x43402915;
  VAR_1->reg_AC2 = 0xFF44E025;
  VAR_1->reg_DQSIC = 0x00000132;
  VAR_1->reg_MRS = 0x00000E72;
  VAR_1->reg_EMRS = 0x00000040;
  VAR_1->reg_DRV = 0x0000000A;
  VAR_1->reg_IOZ = 0x00000045;
  VAR_1->reg_DQIDLY = 0x000000AD;
  VAR_1->reg_FREQ = 0x000056C0;
  VAR_1->madj_max = 76;
  VAR_1->dll2_finetune_step = 3;
  break;
 case 576:
  FUNC_1(VAR_0, 0x1E6E2020, 0x0140);
  VAR_1->wodt = 1;
  VAR_1->rodt = 1;
  VAR_1->reg_AC1 = 0x43402915;
  VAR_1->reg_AC2 = 0xFF44E027;
  VAR_1->reg_DQSIC = 0x0000013F;
  VAR_1->reg_MRS = 0x00000E72;
  VAR_1->reg_EMRS = 0x00000004;
  VAR_1->reg_DRV = 0x000000F5;
  VAR_1->reg_IOZ = 0x00000045;
  VAR_1->reg_DQIDLY = 0x000000B3;
  VAR_1->reg_FREQ = 0x000057C0;
  VAR_1->madj_max = 76;
  VAR_1->dll2_finetune_step = 3;
  break;
 }

 switch (VAR_1->dram_chipid) {
 case 132:
  VAR_1->dram_config = 0x100;
  break;
 default:
 case 135:
  VAR_1->dram_config = 0x121;
  break;
 case 134:
  VAR_1->dram_config = 0x122;
  break;
 case 133:
  VAR_1->dram_config = 0x123;
  break;
 }

 switch (VAR_1->vram_size) {
 default:
 case 128:
  VAR_1->dram_config |= 0x00;
  break;
 case 131:
  VAR_1->dram_config |= 0x04;
  break;
 case 130:
  VAR_1->dram_config |= 0x08;
  break;
 case 129:
  VAR_1->dram_config |= 0x0c;
  break;
 }
}
