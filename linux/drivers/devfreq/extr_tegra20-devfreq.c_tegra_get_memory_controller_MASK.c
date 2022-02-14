
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_mc {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tegra_mc* FUNC_0 (int ) ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct tegra_mc* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static struct tegra_mc *FUNC_5(void)
{
 struct platform_device *VAR_3;
 struct device_node *VAR_4;
 struct tegra_mc *VAR_5;

 VAR_4 = FUNC_1(((void*)0), ((void*)0), "nvidia,tegra20-mc-gart");
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_3 = FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_2);

 return VAR_5;
}
