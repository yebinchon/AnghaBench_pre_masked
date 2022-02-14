
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_fwspec {int iommu_fwnode; } ;
struct device {int dummy; } ;


 struct iommu_fwspec* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iommu_fwspec*) ;

void FUNC_4(struct device *VAR_0)
{
 struct iommu_fwspec *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1) {
  FUNC_2(VAR_1->iommu_fwnode);
  FUNC_3(VAR_1);
  FUNC_1(VAR_0, ((void*)0));
 }
}
