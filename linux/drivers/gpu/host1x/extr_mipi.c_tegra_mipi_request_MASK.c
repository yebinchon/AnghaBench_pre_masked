
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_mipi_device {int pdev; struct device* device; int pads; int mipi; } ;
struct of_phandle_args {int np; int * args; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tegra_mipi_device* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct tegra_mipi_device*) ;
 struct tegra_mipi_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*,char*,char*,int ,struct of_phandle_args*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

struct tegra_mipi_device *FUNC_8(struct device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->of_node;
 struct tegra_mipi_device *VAR_6;
 struct of_phandle_args VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_5, "nvidia,mipi-calibrate",
      "#nvidia,mipi-calibrate-cells", 0,
      &VAR_7);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_6->pdev = FUNC_3(VAR_7.np);
 if (!VAR_6->pdev) {
  VAR_8 = -VAR_0;
  goto free;
 }

 VAR_6->mipi = FUNC_7(VAR_6->pdev);
 if (!VAR_6->mipi) {
  VAR_8 = -VAR_2;
  goto put;
 }

 FUNC_4(VAR_7.np);

 VAR_6->pads = VAR_7.args[0];
 VAR_6->device = VAR_4;

 return VAR_6;

put:
 FUNC_6(VAR_6->pdev);
free:
 FUNC_1(VAR_6);
out:
 FUNC_4(VAR_7.np);
 return FUNC_0(VAR_8);
}
