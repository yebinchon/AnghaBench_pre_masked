
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct mtk_cpu_dvfs_info {int need_voltage_tracking; int cpus; struct regulator* inter_clk; struct regulator* cpu_clk; struct regulator* sram_reg; struct regulator* proc_reg; struct device* cpu_dev; int intermediate_voltage; } ;
struct device {int dummy; } ;
typedef struct regulator dev_pm_opp ;
typedef struct regulator clk ;


 int VAR_0 ;
 int VAR_1 ;
 struct regulator* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct regulator* FUNC_3 (struct device*,char*) ;
 unsigned long FUNC_4 (struct regulator*) ;
 int FUNC_5 (struct regulator*) ;
 struct regulator* FUNC_6 (struct device*,unsigned long*) ;
 int FUNC_7 (struct regulator*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct device*,int *) ;
 int FUNC_11 (struct regulator*) ;
 struct device* FUNC_12 (int) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int) ;
 struct regulator* FUNC_15 (struct device*,char*) ;
 struct regulator* FUNC_16 (struct device*,char*) ;
 int FUNC_17 (struct regulator*) ;

__attribute__((used)) static int FUNC_18(struct mtk_cpu_dvfs_info *VAR_2, int VAR_3)
{
 struct device *VAR_4;
 struct regulator *VAR_5 = FUNC_0(-VAR_0);
 struct regulator *VAR_6 = FUNC_0(-VAR_0);
 struct clk *VAR_7 = FUNC_0(-VAR_0);
 struct clk *VAR_8 = FUNC_0(-VAR_0);
 struct dev_pm_opp *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_4 = FUNC_12(VAR_3);
 if (!VAR_4) {
  FUNC_13("failed to get cpu%d device\n", VAR_3);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_4, "cpu");
 if (FUNC_1(VAR_7)) {
  if (FUNC_2(VAR_7) == -VAR_1)
   FUNC_14("cpu clk for cpu%d not ready, retry.\n", VAR_3);
  else
   FUNC_13("failed to get cpu clk for cpu%d\n", VAR_3);

  VAR_11 = FUNC_2(VAR_7);
  return VAR_11;
 }

 VAR_8 = FUNC_3(VAR_4, "intermediate");
 if (FUNC_1(VAR_8)) {
  if (FUNC_2(VAR_8) == -VAR_1)
   FUNC_14("intermediate clk for cpu%d not ready, retry.\n",
    VAR_3);
  else
   FUNC_13("failed to get intermediate clk for cpu%d\n",
          VAR_3);

  VAR_11 = FUNC_2(VAR_8);
  goto out_free_resources;
 }

 VAR_5 = FUNC_16(VAR_4, "proc");
 if (FUNC_1(VAR_5)) {
  if (FUNC_2(VAR_5) == -VAR_1)
   FUNC_14("proc regulator for cpu%d not ready, retry.\n",
    VAR_3);
  else
   FUNC_13("failed to get proc regulator for cpu%d\n",
          VAR_3);

  VAR_11 = FUNC_2(VAR_5);
  goto out_free_resources;
 }


 VAR_6 = FUNC_15(VAR_4, "sram");


 VAR_11 = FUNC_10(VAR_4, &VAR_2->cpus);
 if (VAR_11) {
  FUNC_13("failed to get OPP-sharing information for cpu%d\n",
         VAR_3);
  goto out_free_resources;
 }

 VAR_11 = FUNC_8(&VAR_2->cpus);
 if (VAR_11) {
  FUNC_14("no OPP table for cpu%d\n", VAR_3);
  goto out_free_resources;
 }


 VAR_10 = FUNC_4(VAR_8);
 VAR_9 = FUNC_6(VAR_4, &VAR_10);
 if (FUNC_1(VAR_9)) {
  FUNC_13("failed to get intermediate opp for cpu%d\n", VAR_3);
  VAR_11 = FUNC_2(VAR_9);
  goto out_free_opp_table;
 }
 VAR_2->intermediate_voltage = FUNC_7(VAR_9);
 FUNC_11(VAR_9);

 VAR_2->cpu_dev = VAR_4;
 VAR_2->proc_reg = VAR_5;
 VAR_2->sram_reg = FUNC_1(VAR_6) ? ((void*)0) : VAR_6;
 VAR_2->cpu_clk = VAR_7;
 VAR_2->inter_clk = VAR_8;





 VAR_2->need_voltage_tracking = !FUNC_1(VAR_6);

 return 0;

out_free_opp_table:
 FUNC_9(&VAR_2->cpus);

out_free_resources:
 if (!FUNC_1(VAR_5))
  FUNC_17(VAR_5);
 if (!FUNC_1(VAR_6))
  FUNC_17(VAR_6);
 if (!FUNC_1(VAR_7))
  FUNC_5(VAR_7);
 if (!FUNC_1(VAR_8))
  FUNC_5(VAR_8);

 return VAR_11;
}
