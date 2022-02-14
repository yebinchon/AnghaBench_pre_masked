
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct of_phandle_args {int np; } ;
struct iommu_fwspec {int iommu_priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iommu_fwspec* FUNC_0 (struct device*) ;
 struct platform_device* FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
          struct of_phandle_args *VAR_2)
{
 struct iommu_fwspec *VAR_3 = FUNC_0(VAR_1);
 struct platform_device *VAR_4;

 VAR_4 = FUNC_1(VAR_2->np);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->iommu_priv = FUNC_2(VAR_4);

 return 0;
}
