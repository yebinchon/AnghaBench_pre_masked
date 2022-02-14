
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct of_phandle_args {int args_count; int args; int np; } ;
struct iommu_fwspec {scalar_t__ iommu_priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct iommu_fwspec* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int) ;
 struct platform_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct of_phandle_args *VAR_2)
{
 struct iommu_fwspec *VAR_3 = FUNC_2(VAR_1);
 struct platform_device *VAR_4;

 if (VAR_2->args_count != 1) {
  FUNC_1(VAR_1, "invalid #iommu-cells(%d) property for IOMMU\n",
   VAR_2->args_count);
  return -VAR_0;
 }

 if (!VAR_3->iommu_priv) {

  VAR_4 = FUNC_4(VAR_2->np);
  if (FUNC_0(!VAR_4))
   return -VAR_0;

  VAR_3->iommu_priv = FUNC_5(VAR_4);
 }

 return FUNC_3(VAR_1, VAR_2->args, 1);
}
