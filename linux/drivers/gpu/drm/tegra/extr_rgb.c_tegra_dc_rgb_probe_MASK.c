
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; TYPE_2__* dev; } ;
struct tegra_rgb {TYPE_1__ output; void* clk_parent; void* clk; struct tegra_dc* dc; } ;
struct tegra_dc {TYPE_1__* rgb; TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 void* FUNC_4 (TYPE_2__*,char*) ;
 struct tegra_rgb* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(struct tegra_dc *VAR_3)
{
 struct device_node *VAR_4;
 struct tegra_rgb *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_7(VAR_3->dev->of_node, "rgb");
 if (!VAR_4 || !FUNC_6(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_3->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->output.dev = VAR_3->dev;
 VAR_5->output.of_node = VAR_4;
 VAR_5->dc = VAR_3;

 VAR_6 = FUNC_8(&VAR_5->output);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->clk = FUNC_4(VAR_3->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk)) {
  FUNC_3(VAR_3->dev, "failed to get clock\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_5->clk_parent = FUNC_4(VAR_3->dev, "parent");
 if (FUNC_0(VAR_5->clk_parent)) {
  FUNC_3(VAR_3->dev, "failed to get parent clock\n");
  return FUNC_1(VAR_5->clk_parent);
 }

 VAR_6 = FUNC_2(VAR_5->clk, VAR_5->clk_parent);
 if (VAR_6 < 0) {
  FUNC_3(VAR_3->dev, "failed to set parent clock: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_3->rgb = &VAR_5->output;

 return 0;
}
