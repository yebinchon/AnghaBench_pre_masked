
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {struct iommu_group* group; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct iommu_group*) ;
 struct iommu_group* FUNC_1 () ;
 struct iommu_group* FUNC_2 (struct iommu_group*) ;
 struct ipmmu_vmsa_device* FUNC_3 (struct device*) ;

__attribute__((used)) static struct iommu_group *FUNC_4(struct device *VAR_0)
{
 struct ipmmu_vmsa_device *VAR_1 = FUNC_3(VAR_0);
 struct iommu_group *VAR_2;

 if (VAR_1->group)
  return FUNC_2(VAR_1->group);

 VAR_2 = FUNC_1();
 if (!FUNC_0(VAR_2))
  VAR_1->group = VAR_2;

 return VAR_2;
}
