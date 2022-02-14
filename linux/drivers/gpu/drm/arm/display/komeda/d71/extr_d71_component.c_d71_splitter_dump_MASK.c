
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct komeda_component {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct komeda_component *VAR_2, struct seq_file *VAR_3)
{
 u32 VAR_4[3];

 FUNC_0(VAR_3, VAR_2->reg);

 FUNC_1(VAR_2->reg, VAR_1, 1, VAR_4);
 FUNC_2(VAR_3, "SP_INPUT_ID0:\t\t0x%X\n", VAR_4[0]);

 FUNC_1(VAR_2->reg, VAR_0, 3, VAR_4);
 FUNC_2(VAR_3, "SP_CONTROL:\t\t0x%X\n", VAR_4[0]);
 FUNC_2(VAR_3, "SP_SIZE:\t\t0x%X\n", VAR_4[1]);
 FUNC_2(VAR_3, "SP_OVERLAP_SIZE:\t0x%X\n", VAR_4[2]);
}
