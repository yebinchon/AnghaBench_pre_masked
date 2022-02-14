
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

__attribute__((used)) static void FUNC_3(struct komeda_component *VAR_0,
      struct seq_file *VAR_1)
{
 u32 VAR_2[8], VAR_3;

 FUNC_0(VAR_1, VAR_0->reg);

 FUNC_1(VAR_0->reg, 0xC0, 1, VAR_2);
 FUNC_2(VAR_1, "BS_INFO:\t\t0x%X\n", VAR_2[0]);

 FUNC_1(VAR_0->reg, 0xD0, 8, VAR_2);
 FUNC_2(VAR_1, "BS_CONTROL:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "BS_PROG_LINE:\t\t0x%X\n", VAR_2[1]);
 FUNC_2(VAR_1, "BS_PREFETCH_LINE:\t0x%X\n", VAR_2[2]);
 FUNC_2(VAR_1, "BS_BG_COLOR:\t\t0x%X\n", VAR_2[3]);
 FUNC_2(VAR_1, "BS_ACTIVESIZE:\t\t0x%X\n", VAR_2[4]);
 FUNC_2(VAR_1, "BS_HINTERVALS:\t\t0x%X\n", VAR_2[5]);
 FUNC_2(VAR_1, "BS_VINTERVALS:\t\t0x%X\n", VAR_2[6]);
 FUNC_2(VAR_1, "BS_SYNC:\t\t0x%X\n", VAR_2[7]);

 FUNC_1(VAR_0->reg, 0x100, 3, VAR_2);
 FUNC_2(VAR_1, "BS_DRIFT_TO:\t\t0x%X\n", VAR_2[0]);
 FUNC_2(VAR_1, "BS_FRAME_TO:\t\t0x%X\n", VAR_2[1]);
 FUNC_2(VAR_1, "BS_TE_TO:\t\t0x%X\n", VAR_2[2]);

 FUNC_1(VAR_0->reg, 0x110, 3, VAR_2);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  FUNC_2(VAR_1, "BS_T%u_INTERVAL:\t\t0x%X\n", VAR_3, VAR_2[VAR_3]);

 FUNC_1(VAR_0->reg, 0x120, 5, VAR_2);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_2(VAR_1, "BS_CRC%u_LOW:\t\t0x%X\n", VAR_3, VAR_2[VAR_3 << 1]);
  FUNC_2(VAR_1, "BS_CRC%u_HIGH:\t\t0x%X\n", VAR_3, VAR_2[(VAR_3 << 1) + 1]);
 }
 FUNC_2(VAR_1, "BS_USER:\t\t0x%X\n", VAR_2[4]);
}
