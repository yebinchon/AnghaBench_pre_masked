
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {int iommu; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct device*) ;
 int FUNC_2 (struct device*) ;
 struct ipmmu_vmsa_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct ipmmu_vmsa_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->iommu, VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
