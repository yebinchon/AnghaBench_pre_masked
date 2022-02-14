
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;
struct ast2300_dram_param {int reg_MADJ; int reg_SADJ; int dram_config; int reg_AC1; int reg_AC2; int reg_DQSIC; int reg_DQIDLY; int reg_DRV; int reg_IOZ; int madj_max; int reg_MRS; int reg_EMRS; int reg_FREQ; scalar_t__ rodt; scalar_t__ wodt; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;
 int FUNC_2 (struct ast_private*,struct ast2300_dram_param*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ast_private *VAR_0, struct ast2300_dram_param *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4 = 0;

ddr3_init_start:
 FUNC_1(VAR_0, 0x1E6E0000, 0xFC600309);
 FUNC_1(VAR_0, 0x1E6E0018, 0x00000100);
 FUNC_1(VAR_0, 0x1E6E0024, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0034, 0x00000000);
 FUNC_3(10);
 FUNC_1(VAR_0, 0x1E6E0064, VAR_1->reg_MADJ);
 FUNC_1(VAR_0, 0x1E6E0068, VAR_1->reg_SADJ);
 FUNC_3(10);
 FUNC_1(VAR_0, 0x1E6E0064, VAR_1->reg_MADJ | 0xC0000);
 FUNC_3(10);

 FUNC_1(VAR_0, 0x1E6E0004, VAR_1->dram_config);
 FUNC_1(VAR_0, 0x1E6E0008, 0x90040f);
 FUNC_1(VAR_0, 0x1E6E0010, VAR_1->reg_AC1);
 FUNC_1(VAR_0, 0x1E6E0014, VAR_1->reg_AC2);
 FUNC_1(VAR_0, 0x1E6E0020, VAR_1->reg_DQSIC);
 FUNC_1(VAR_0, 0x1E6E0080, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0084, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0088, VAR_1->reg_DQIDLY);
 FUNC_1(VAR_0, 0x1E6E0018, 0x4000A170);
 FUNC_1(VAR_0, 0x1E6E0018, 0x00002370);
 FUNC_1(VAR_0, 0x1E6E0038, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0040, 0xFF444444);
 FUNC_1(VAR_0, 0x1E6E0044, 0x22222222);
 FUNC_1(VAR_0, 0x1E6E0048, 0x22222222);
 FUNC_1(VAR_0, 0x1E6E004C, 0x00000002);
 FUNC_1(VAR_0, 0x1E6E0050, 0x80000000);
 FUNC_1(VAR_0, 0x1E6E0050, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0054, 0);
 FUNC_1(VAR_0, 0x1E6E0060, VAR_1->reg_DRV);
 FUNC_1(VAR_0, 0x1E6E006C, VAR_1->reg_IOZ);
 FUNC_1(VAR_0, 0x1E6E0070, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0074, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E0078, 0x00000000);
 FUNC_1(VAR_0, 0x1E6E007C, 0x00000000);

 do {
  VAR_2 = FUNC_0(VAR_0, 0x1E6E001C);
 } while (!(VAR_2 & 0x08000000));
 VAR_2 = FUNC_0(VAR_0, 0x1E6E001C);
 VAR_2 = (VAR_2 >> 8) & 0xff;
 while ((VAR_2 & 0x08) || ((VAR_2 & 0x7) < 2) || (VAR_2 < 4)) {
  VAR_3 = (FUNC_0(VAR_0, 0x1E6E0064) & 0xfff3ffff) + 4;
  if ((VAR_3 & 0xff) > VAR_1->madj_max) {
   break;
  }
  FUNC_1(VAR_0, 0x1E6E0064, VAR_3);
  if (VAR_3 & 0x00100000) {
   VAR_3 = ((VAR_3 & 0xff) >> 3) + 3;
  } else {
   VAR_3 = ((VAR_3 & 0xff) >> 2) + 5;
  }
  VAR_2 = FUNC_0(VAR_0, 0x1E6E0068) & 0xffff00ff;
  VAR_3 += VAR_2 & 0xff;
  VAR_2 = VAR_2 | (VAR_3 << 8);
  FUNC_1(VAR_0, 0x1E6E0068, VAR_2);
  FUNC_3(10);
  FUNC_1(VAR_0, 0x1E6E0064, FUNC_0(VAR_0, 0x1E6E0064) | 0xC0000);
  FUNC_3(10);
  VAR_2 = FUNC_0(VAR_0, 0x1E6E0018) & 0xfffff1ff;
  FUNC_1(VAR_0, 0x1E6E0018, VAR_2);
  VAR_2 = VAR_2 | 0x200;
  FUNC_1(VAR_0, 0x1E6E0018, VAR_2);
  do {
   VAR_2 = FUNC_0(VAR_0, 0x1E6E001C);
  } while (!(VAR_2 & 0x08000000));

  VAR_2 = FUNC_0(VAR_0, 0x1E6E001C);
  VAR_2 = (VAR_2 >> 8) & 0xff;
 }
 FUNC_1(VAR_0, 0x1E720058, FUNC_0(VAR_0, 0x1E6E0068) & 0xffff);
 VAR_2 = FUNC_0(VAR_0, 0x1E6E0018) | 0xC00;
 FUNC_1(VAR_0, 0x1E6E0018, VAR_2);

 FUNC_1(VAR_0, 0x1E6E0034, 0x00000001);
 FUNC_1(VAR_0, 0x1E6E000C, 0x00000040);
 FUNC_3(50);

 FUNC_1(VAR_0, 0x1E6E002C, VAR_1->reg_MRS | 0x100);
 FUNC_1(VAR_0, 0x1E6E0030, VAR_1->reg_EMRS);
 FUNC_1(VAR_0, 0x1E6E0028, 0x00000005);
 FUNC_1(VAR_0, 0x1E6E0028, 0x00000007);
 FUNC_1(VAR_0, 0x1E6E0028, 0x00000003);
 FUNC_1(VAR_0, 0x1E6E0028, 0x00000001);
 FUNC_1(VAR_0, 0x1E6E002C, VAR_1->reg_MRS);
 FUNC_1(VAR_0, 0x1E6E000C, 0x00005C08);
 FUNC_1(VAR_0, 0x1E6E0028, 0x00000001);

 FUNC_1(VAR_0, 0x1E6E000C, 0x00005C01);
 VAR_2 = 0;
 if (VAR_1->wodt) {
  VAR_2 = 0x300;
 }
 if (VAR_1->rodt) {
  VAR_2 = VAR_2 | 0x3000 | ((VAR_1->reg_AC2 & 0x60000) >> 3);
 }
 FUNC_1(VAR_0, 0x1E6E0034, VAR_2 | 0x3);


 if ((FUNC_2(VAR_0, VAR_1) == 0) && (VAR_4++ < 10))
  goto ddr3_init_start;

 FUNC_1(VAR_0, 0x1E6E0120, VAR_1->reg_FREQ);
}
