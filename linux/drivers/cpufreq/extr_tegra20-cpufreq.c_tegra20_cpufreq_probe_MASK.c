
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int target_intermediate; int get_intermediate; int target_index; struct tegra20_cpufreq* driver_data; int suspend; int verify; int flags; int exit; int init; int attr; int get; } ;
struct tegra20_cpufreq {void* cpu_clk; void* pll_x_clk; void* pll_p_clk; TYPE_1__ driver; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 struct tegra20_cpufreq* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,struct tegra20_cpufreq*) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_13)
{
 struct tegra20_cpufreq *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_5(&VAR_13->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->cpu_clk = FUNC_2(((void*)0), "cclk");
 if (FUNC_0(VAR_14->cpu_clk))
  return FUNC_1(VAR_14->cpu_clk);

 VAR_14->pll_x_clk = FUNC_2(((void*)0), "pll_x");
 if (FUNC_0(VAR_14->pll_x_clk)) {
  VAR_15 = FUNC_1(VAR_14->pll_x_clk);
  goto put_cpu;
 }

 VAR_14->pll_p_clk = FUNC_2(((void*)0), "pll_p");
 if (FUNC_0(VAR_14->pll_p_clk)) {
  VAR_15 = FUNC_1(VAR_14->pll_p_clk);
  goto put_pll_x;
 }

 VAR_14->dev = &VAR_13->dev;
 VAR_14->driver.get = VAR_6;
 VAR_14->driver.attr = VAR_4;
 VAR_14->driver.init = VAR_9;
 VAR_14->driver.exit = VAR_8;
 VAR_14->driver.flags = VAR_1;
 VAR_14->driver.verify = VAR_5;
 VAR_14->driver.suspend = VAR_7;
 VAR_14->driver.driver_data = VAR_14;
 VAR_14->driver.target_index = VAR_11;
 VAR_14->driver.get_intermediate = VAR_10;
 VAR_14->driver.target_intermediate = VAR_12;
 FUNC_7(VAR_14->driver.name, VAR_0, "tegra");

 VAR_15 = FUNC_4(&VAR_14->driver);
 if (VAR_15)
  goto put_pll_p;

 FUNC_6(VAR_13, VAR_14);

 return 0;

put_pll_p:
 FUNC_3(VAR_14->pll_p_clk);
put_pll_x:
 FUNC_3(VAR_14->pll_x_clk);
put_cpu:
 FUNC_3(VAR_14->cpu_clk);

 return VAR_15;
}
