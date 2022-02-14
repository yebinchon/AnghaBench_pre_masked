
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct komeda_component {int reg; } ;


 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static void FUNC_3(struct komeda_component *VAR_0, struct seq_file *VAR_1)
{
 u32 VAR_2[8], VAR_3;

 FUNC_0(VAR_1, VAR_0->reg);

 FUNC_1(VAR_0->reg, 0x80, 5, VAR_2);
 for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
  FUNC_2(VAR_1, "CU_INPUT_ID%u:\t\t0x%X\n", VAR_3, VAR_2[VAR_3]);

 FUNC_1(VAR_0->reg, 0xA0, 5, VAR_2);
 FUNC_2(VAR_1, "CU_IRQ_RAW_STATUS:\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "CU_IRQ_CLEAR:\t\t0x%X\n", VAR_2[1]);
 FUNC_2(VAR_1, "CU_IRQ_MASK:\t\t0x%X\n", VAR_2[2]);
 FUNC_2(VAR_1, "CU_IRQ_STATUS:\t\t0x%X\n", VAR_2[3]);
 FUNC_2(VAR_1, "CU_STATUS:\t\t0x%X\n", VAR_2[4]);

 FUNC_1(VAR_0->reg, 0xD0, 2, VAR_2);
 FUNC_2(VAR_1, "CU_CONTROL:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "CU_SIZE:\t\t0x%X\n", VAR_2[1]);

 FUNC_1(VAR_0->reg, 0xDC, 1, VAR_2);
 FUNC_2(VAR_1, "CU_BG_COLOR:\t\t0x%X\n", VAR_2[0]);

 for (VAR_3 = 0, VAR_2[4] = 0xE0; VAR_3 < 5; VAR_3++, VAR_2[4] += 0x10) {
  FUNC_1(VAR_0->reg, VAR_2[4], 3, VAR_2);
  FUNC_2(VAR_1, "CU_INPUT%u_SIZE:\t\t0x%X\n", VAR_3, VAR_2[0]);
  FUNC_2(VAR_1, "CU_INPUT%u_OFFSET:\t0x%X\n", VAR_3, VAR_2[1]);
  FUNC_2(VAR_1, "CU_INPUT%u_CONTROL:\t0x%X\n", VAR_3, VAR_2[2]);
 }

 FUNC_1(VAR_0->reg, 0x130, 2, VAR_2);
 FUNC_2(VAR_1, "CU_USER_LOW:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "CU_USER_HIGH:\t\t0x%X\n", VAR_2[1]);
}
