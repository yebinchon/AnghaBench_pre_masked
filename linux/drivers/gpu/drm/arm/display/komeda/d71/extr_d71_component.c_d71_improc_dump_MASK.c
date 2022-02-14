
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

 FUNC_1(VAR_0->reg, 0x80, 2, VAR_2);
 FUNC_2(VAR_1, "IPS_INPUT_ID0:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "IPS_INPUT_ID1:\t\t0x%X\n", VAR_2[1]);

 FUNC_1(VAR_0->reg, 0xC0, 1, VAR_2);
 FUNC_2(VAR_1, "IPS_INFO:\t\t0x%X\n", VAR_2[0]);

 FUNC_1(VAR_0->reg, 0xD0, 3, VAR_2);
 FUNC_2(VAR_1, "IPS_CONTROL:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "IPS_SIZE:\t\t0x%X\n", VAR_2[1]);
 FUNC_2(VAR_1, "IPS_DEPTH:\t\t0x%X\n", VAR_2[2]);

 FUNC_1(VAR_0->reg, 0x130, 12, VAR_2);
 for (VAR_3 = 0; VAR_3 < 12; VAR_3++)
  FUNC_2(VAR_1, "IPS_RGB_RGB_COEFF%u:\t0x%X\n", VAR_3, VAR_2[VAR_3]);

 FUNC_1(VAR_0->reg, 0x170, 12, VAR_2);
 for (VAR_3 = 0; VAR_3 < 12; VAR_3++)
  FUNC_2(VAR_1, "IPS_RGB_YUV_COEFF%u:\t0x%X\n", VAR_3, VAR_2[VAR_3]);
}
