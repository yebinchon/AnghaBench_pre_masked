
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_cpufreq_priv {void* cpu_clk; void* dfll_clk; void* pllx_clk; void* pllp_clk; void* cpufreq_dt_pdev; } ;
struct platform_device_info {char* name; int * parent; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 struct tegra124_cpufreq_priv* FUNC_3 (int *,int,int ) ;
 struct device* FUNC_4 (int ) ;
 void* FUNC_5 (struct device_node*,char*) ;
 struct device_node* FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*) ;
 void* FUNC_8 (struct platform_device_info*) ;
 int FUNC_9 (struct platform_device*,struct tegra124_cpufreq_priv*) ;
 int FUNC_10 (struct tegra124_cpufreq_priv*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_3)
{
 struct tegra124_cpufreq_priv *VAR_4;
 struct device_node *VAR_5;
 struct device *VAR_6;
 struct platform_device_info VAR_7 = {};
 int VAR_8;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_4(0);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_6(0);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->cpu_clk = FUNC_5(VAR_5, "cpu_g");
 if (FUNC_0(VAR_4->cpu_clk)) {
  VAR_8 = FUNC_1(VAR_4->cpu_clk);
  goto out_put_np;
 }

 VAR_4->dfll_clk = FUNC_5(VAR_5, "dfll");
 if (FUNC_0(VAR_4->dfll_clk)) {
  VAR_8 = FUNC_1(VAR_4->dfll_clk);
  goto out_put_cpu_clk;
 }

 VAR_4->pllx_clk = FUNC_5(VAR_5, "pll_x");
 if (FUNC_0(VAR_4->pllx_clk)) {
  VAR_8 = FUNC_1(VAR_4->pllx_clk);
  goto out_put_dfll_clk;
 }

 VAR_4->pllp_clk = FUNC_5(VAR_5, "pll_p");
 if (FUNC_0(VAR_4->pllp_clk)) {
  VAR_8 = FUNC_1(VAR_4->pllp_clk);
  goto out_put_pllx_clk;
 }

 VAR_8 = FUNC_10(VAR_4);
 if (VAR_8)
  goto out_put_pllp_clk;

 VAR_7.name = "cpufreq-dt";
 VAR_7.parent = &VAR_3->dev;

 VAR_4->cpufreq_dt_pdev =
  FUNC_8(&VAR_7);
 if (FUNC_0(VAR_4->cpufreq_dt_pdev)) {
  VAR_8 = FUNC_1(VAR_4->cpufreq_dt_pdev);
  goto out_put_pllp_clk;
 }

 FUNC_9(VAR_3, VAR_4);

 FUNC_7(VAR_5);

 return 0;

out_put_pllp_clk:
 FUNC_2(VAR_4->pllp_clk);
out_put_pllx_clk:
 FUNC_2(VAR_4->pllx_clk);
out_put_dfll_clk:
 FUNC_2(VAR_4->dfll_clk);
out_put_cpu_clk:
 FUNC_2(VAR_4->cpu_clk);
out_put_np:
 FUNC_7(VAR_5);

 return VAR_8;
}
