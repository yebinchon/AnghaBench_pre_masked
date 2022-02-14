
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {int iommu; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct iommu_group*) ;
 int FUNC_3 (int *,struct device*) ;
 struct iommu_group* FUNC_4 (struct device*) ;
 int FUNC_5 (struct iommu_group*) ;
 int FUNC_6 (struct device*) ;
 struct ipmmu_vmsa_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3)
{
 struct ipmmu_vmsa_device *VAR_4 = FUNC_7(VAR_3);
 struct iommu_group *VAR_5;
 int VAR_6;




 if (!VAR_4)
  return -VAR_2;

 if (FUNC_0(VAR_0) && !FUNC_0(VAR_1)) {
  VAR_6 = FUNC_6(VAR_3);
  if (VAR_6)
   return VAR_6;
 } else {
  VAR_5 = FUNC_4(VAR_3);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  FUNC_5(VAR_5);
 }

 FUNC_3(&VAR_4->iommu, VAR_3);
 return 0;
}
