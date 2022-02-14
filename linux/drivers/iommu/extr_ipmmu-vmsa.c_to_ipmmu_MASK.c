
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {int dummy; } ;
struct iommu_fwspec {struct ipmmu_vmsa_device* iommu_priv; } ;
struct device {int dummy; } ;


 struct iommu_fwspec* FUNC_0 (struct device*) ;

__attribute__((used)) static struct ipmmu_vmsa_device *FUNC_1(struct device *VAR_0)
{
 struct iommu_fwspec *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->iommu_priv : ((void*)0);
}
