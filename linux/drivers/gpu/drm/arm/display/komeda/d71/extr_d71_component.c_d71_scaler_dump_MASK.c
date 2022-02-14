
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct komeda_component {int reg; } ;


 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (int ,int,int,int *) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct komeda_component *VAR_0, struct seq_file *VAR_1)
{
 u32 VAR_2[9];

 FUNC_0(VAR_1, VAR_0->reg);

 FUNC_1(VAR_0->reg, 0x80, 1, VAR_2);
 FUNC_2(VAR_1, "SC_INPUT_ID0:\t\t0x%X\n", VAR_2[0]);

 FUNC_1(VAR_0->reg, 0xD0, 1, VAR_2);
 FUNC_2(VAR_1, "SC_CONTROL:\t\t0x%X\n", VAR_2[0]);

 FUNC_1(VAR_0->reg, 0xDC, 9, VAR_2);
 FUNC_2(VAR_1, "SC_COEFFTAB:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "SC_IN_SIZE:\t\t0x%X\n", VAR_2[1]);
 FUNC_2(VAR_1, "SC_OUT_SIZE:\t\t0x%X\n", VAR_2[2]);
 FUNC_2(VAR_1, "SC_H_CROP:\t\t0x%X\n", VAR_2[3]);
 FUNC_2(VAR_1, "SC_V_CROP:\t\t0x%X\n", VAR_2[4]);
 FUNC_2(VAR_1, "SC_H_INIT_PH:\t\t0x%X\n", VAR_2[5]);
 FUNC_2(VAR_1, "SC_H_DELTA_PH:\t\t0x%X\n", VAR_2[6]);
 FUNC_2(VAR_1, "SC_V_INIT_PH:\t\t0x%X\n", VAR_2[7]);
 FUNC_2(VAR_1, "SC_V_DELTA_PH:\t\t0x%X\n", VAR_2[8]);
}
