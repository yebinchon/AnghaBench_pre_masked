
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int in_bridge_node; int esc_clk_rate; int burst_clk_rate; int pll_clk_rate; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (struct device_node*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct exynos_dsi *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, "samsung,pll-clock-frequency",
         &VAR_1->pll_clk_rate);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, "samsung,burst-clock-frequency",
         &VAR_1->burst_clk_rate);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, "samsung,esc-clock-frequency",
         &VAR_1->esc_clk_rate);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->in_bridge_node = FUNC_1(VAR_3, VAR_0, 0);

 return 0;
}
