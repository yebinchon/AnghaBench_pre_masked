
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct plat_ls1x_cpufreq {int clk_name; int osc_clk_name; int min_freq; int max_freq; } ;
struct ls1x_cpufreq {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int min_freq; int max_freq; struct clk* osc_clk; struct clk* pll_clk; struct clk* mux_clk; struct clk* clk; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct clk*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,...) ;
 struct plat_ls1x_cpufreq* FUNC_8 (int *) ;
 struct clk* FUNC_9 (int *,int) ;
 TYPE_1__* FUNC_10 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct plat_ls1x_cpufreq *VAR_8 = FUNC_8(&VAR_7->dev);
 struct clk *VAR_9;
 int VAR_10;

 if (!VAR_8 || !VAR_8->clk_name || !VAR_8->osc_clk_name) {
  FUNC_7(&VAR_7->dev, "platform data missing\n");
  return -VAR_1;
 }

 VAR_4 =
     FUNC_10(&VAR_7->dev, sizeof(struct ls1x_cpufreq), VAR_3);
 if (!VAR_4)
  return -VAR_2;

 VAR_4->dev = &VAR_7->dev;

 VAR_9 = FUNC_9(&VAR_7->dev, VAR_8->clk_name);
 if (FUNC_0(VAR_9)) {
  FUNC_7(&VAR_7->dev, "unable to get %s clock\n",
   VAR_8->clk_name);
  return FUNC_1(VAR_9);
 }
 VAR_4->clk = VAR_9;

 VAR_9 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_9)) {
  FUNC_7(&VAR_7->dev, "unable to get parent of %s clock\n",
   FUNC_2(VAR_4->clk));
  return FUNC_1(VAR_9);
 }
 VAR_4->mux_clk = VAR_9;

 VAR_9 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_9)) {
  FUNC_7(&VAR_7->dev, "unable to get parent of %s clock\n",
   FUNC_2(VAR_4->mux_clk));
  return FUNC_1(VAR_9);
 }
 VAR_4->pll_clk = VAR_9;

 VAR_9 = FUNC_9(&VAR_7->dev, VAR_8->osc_clk_name);
 if (FUNC_0(VAR_9)) {
  FUNC_7(&VAR_7->dev, "unable to get %s clock\n",
   VAR_8->osc_clk_name);
  return FUNC_1(VAR_9);
 }
 VAR_4->osc_clk = VAR_9;

 VAR_4->max_freq = VAR_8->max_freq;
 VAR_4->min_freq = VAR_8->min_freq;

 VAR_10 = FUNC_4(&VAR_5);
 if (VAR_10) {
  FUNC_7(&VAR_7->dev,
   "failed to register CPUFreq driver: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_5(&VAR_6,
     VAR_0);

 if (VAR_10) {
  FUNC_7(&VAR_7->dev,
   "failed to register CPUFreq notifier: %d\n",VAR_10);
  FUNC_6(&VAR_5);
 }

 return VAR_10;
}
