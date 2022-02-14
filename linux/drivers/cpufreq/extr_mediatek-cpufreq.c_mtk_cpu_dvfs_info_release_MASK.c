
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cpu_dvfs_info {int cpus; int inter_clk; int cpu_clk; int sram_reg; int proc_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mtk_cpu_dvfs_info *VAR_0)
{
 if (!FUNC_0(VAR_0->proc_reg))
  FUNC_3(VAR_0->proc_reg);
 if (!FUNC_0(VAR_0->sram_reg))
  FUNC_3(VAR_0->sram_reg);
 if (!FUNC_0(VAR_0->cpu_clk))
  FUNC_1(VAR_0->cpu_clk);
 if (!FUNC_0(VAR_0->inter_clk))
  FUNC_1(VAR_0->inter_clk);

 FUNC_2(&VAR_0->cpus);
}
