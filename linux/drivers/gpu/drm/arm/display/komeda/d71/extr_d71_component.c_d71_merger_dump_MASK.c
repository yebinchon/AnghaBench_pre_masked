
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
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct komeda_component *VAR_4, struct seq_file *VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_4->reg);

 FUNC_1(VAR_4->reg, VAR_1, 1, &VAR_6);
 FUNC_2(VAR_5, "MG_INPUT_ID0:\t\t0x%X\n", VAR_6);

 FUNC_1(VAR_4->reg, VAR_2, 1, &VAR_6);
 FUNC_2(VAR_5, "MG_INPUT_ID1:\t\t0x%X\n", VAR_6);

 FUNC_1(VAR_4->reg, VAR_0, 1, &VAR_6);
 FUNC_2(VAR_5, "MG_CONTROL:\t\t0x%X\n", VAR_6);

 FUNC_1(VAR_4->reg, VAR_3, 1, &VAR_6);
 FUNC_2(VAR_5, "MG_SIZE:\t\t0x%X\n", VAR_6);
}
