
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct komeda_component {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct komeda_component *VAR_3, struct seq_file *VAR_4)
{
 u32 VAR_5[15], VAR_6;
 bool VAR_7, VAR_8;
 char *VAR_9;

 FUNC_1(VAR_3->reg, VAR_0, 1, &VAR_5[14]);
 if (VAR_5[14] & 0x1) {
  VAR_7 = 1;
  VAR_9 = "LR_";
 } else {
  VAR_7 = 0;
  VAR_9 = "LS_";
 }

 VAR_8 = !!(VAR_5[14] & VAR_2);

 FUNC_0(VAR_4, VAR_3->reg);

 FUNC_2(VAR_4, "%sLAYER_INFO:\t\t0x%X\n", VAR_9, VAR_5[14]);

 FUNC_1(VAR_3->reg, 0xD0, 1, VAR_5);
 FUNC_2(VAR_4, "%sCONTROL:\t\t0x%X\n", VAR_9, VAR_5[0]);
 if (VAR_7) {
  FUNC_1(VAR_3->reg, 0xD4, 1, VAR_5);
  FUNC_2(VAR_4, "LR_RICH_CONTROL:\t0x%X\n", VAR_5[0]);
 }
 FUNC_1(VAR_3->reg, 0xD8, 4, VAR_5);
 FUNC_2(VAR_4, "%sFORMAT:\t\t0x%X\n", VAR_9, VAR_5[0]);
 FUNC_2(VAR_4, "%sIT_COEFFTAB:\t\t0x%X\n", VAR_9, VAR_5[1]);
 FUNC_2(VAR_4, "%sIN_SIZE:\t\t0x%X\n", VAR_9, VAR_5[2]);
 FUNC_2(VAR_4, "%sPALPHA:\t\t0x%X\n", VAR_9, VAR_5[3]);

 FUNC_1(VAR_3->reg, 0x100, 3, VAR_5);
 FUNC_2(VAR_4, "%sP0_PTR_LOW:\t\t0x%X\n", VAR_9, VAR_5[0]);
 FUNC_2(VAR_4, "%sP0_PTR_HIGH:\t\t0x%X\n", VAR_9, VAR_5[1]);
 FUNC_2(VAR_4, "%sP0_STRIDE:\t\t0x%X\n", VAR_9, VAR_5[2]);

 FUNC_1(VAR_3->reg, 0x110, 2, VAR_5);
 FUNC_2(VAR_4, "%sP1_PTR_LOW:\t\t0x%X\n", VAR_9, VAR_5[0]);
 FUNC_2(VAR_4, "%sP1_PTR_HIGH:\t\t0x%X\n", VAR_9, VAR_5[1]);
 if (VAR_7) {
  FUNC_1(VAR_3->reg, 0x118, 1, VAR_5);
  FUNC_2(VAR_4, "LR_P1_STRIDE:\t\t0x%X\n", VAR_5[0]);

  FUNC_1(VAR_3->reg, 0x120, 2, VAR_5);
  FUNC_2(VAR_4, "LR_P2_PTR_LOW:\t\t0x%X\n", VAR_5[0]);
  FUNC_2(VAR_4, "LR_P2_PTR_HIGH:\t\t0x%X\n", VAR_5[1]);

  FUNC_1(VAR_3->reg, 0x130, 12, VAR_5);
  for (VAR_6 = 0; VAR_6 < 12; VAR_6++)
   FUNC_2(VAR_4, "LR_YUV_RGB_COEFF%u:\t0x%X\n", VAR_6, VAR_5[VAR_6]);
 }

 if (VAR_8) {
  FUNC_1(VAR_3->reg, VAR_1, 12, VAR_5);
  for (VAR_6 = 0; VAR_6 < 12; VAR_6++)
   FUNC_2(VAR_4, "LS_RGB_RGB_COEFF%u:\t0x%X\n", VAR_6, VAR_5[VAR_6]);
 }

 FUNC_1(VAR_3->reg, 0x160, 3, VAR_5);
 FUNC_2(VAR_4, "%sAD_CONTROL:\t\t0x%X\n", VAR_9, VAR_5[0]);
 FUNC_2(VAR_4, "%sAD_H_CROP:\t\t0x%X\n", VAR_9, VAR_5[1]);
 FUNC_2(VAR_4, "%sAD_V_CROP:\t\t0x%X\n", VAR_9, VAR_5[2]);
}
