
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dsi {TYPE_2__* slave; TYPE_1__* dev; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct tegra_dsi* master; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,char*,int ) ;
 TYPE_2__* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct tegra_dsi *VAR_1)
{
 struct device_node *VAR_2;

 VAR_2 = FUNC_2(VAR_1->dev->of_node, "nvidia,ganged-mode", 0);
 if (VAR_2) {
  struct platform_device *VAR_3 = FUNC_0(VAR_2);

  VAR_1->slave = FUNC_3(VAR_3);
  FUNC_1(VAR_2);

  if (!VAR_1->slave)
   return -VAR_0;

  VAR_1->slave->master = VAR_1;
 }

 return 0;
}
