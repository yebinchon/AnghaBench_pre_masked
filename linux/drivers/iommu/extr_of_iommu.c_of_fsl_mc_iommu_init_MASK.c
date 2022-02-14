
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; int np; int args; } ;
struct fsl_mc_device {int dev; int icid; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct of_phandle_args*) ;
 int FUNC_1 (struct device_node*,int ,char*,char*,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fsl_mc_device *VAR_2,
    struct device_node *VAR_3)
{
 struct of_phandle_args VAR_4 = { .args_count = 1 };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2->icid, "iommu-map",
    "iommu-map-mask", &VAR_4.np,
    VAR_4.args);
 if (VAR_5)
  return VAR_5 == -VAR_0 ? VAR_1 : VAR_5;

 VAR_5 = FUNC_0(&VAR_2->dev, &VAR_4);
 FUNC_2(VAR_4.np);
 return VAR_5;
}
