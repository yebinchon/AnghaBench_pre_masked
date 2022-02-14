
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
 u32 VAR_2[12], VAR_3;

 FUNC_0(VAR_1, VAR_0->reg);

 FUNC_1(VAR_0->reg, 0x80, 1, VAR_2);
 FUNC_2(VAR_1, "LW_INPUT_ID0:\t\t0x%X\n", VAR_2[0]);

 FUNC_1(VAR_0->reg, 0xD0, 3, VAR_2);
 FUNC_2(VAR_1, "LW_CONTROL:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "LW_PROG_LINE:\t\t0x%X\n", VAR_2[1]);
 FUNC_2(VAR_1, "LW_FORMAT:\t\t0x%X\n", VAR_2[2]);

 FUNC_1(VAR_0->reg, 0xE0, 1, VAR_2);
 FUNC_2(VAR_1, "LW_IN_SIZE:\t\t0x%X\n", VAR_2[0]);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_1(VAR_0->reg, 0x100 + VAR_3 * 0x10, 3, VAR_2);
  FUNC_2(VAR_1, "LW_P%u_PTR_LOW:\t\t0x%X\n", VAR_3, VAR_2[0]);
  FUNC_2(VAR_1, "LW_P%u_PTR_HIGH:\t\t0x%X\n", VAR_3, VAR_2[1]);
  FUNC_2(VAR_1, "LW_P%u_STRIDE:\t\t0x%X\n", VAR_3, VAR_2[2]);
 }

 FUNC_1(VAR_0->reg, 0x130, 12, VAR_2);
 for (VAR_3 = 0; VAR_3 < 12; VAR_3++)
  FUNC_2(VAR_1, "LW_RGB_YUV_COEFF%u:\t0x%X\n", VAR_3, VAR_2[VAR_3]);
}
