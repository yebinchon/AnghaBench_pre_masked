
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpci_dev {int iommu_dev; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct zpci_dev* sysdata; } ;


 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (int *,struct device*) ;
 struct iommu_group* FUNC_3 (struct device*) ;
 int FUNC_4 (struct iommu_group*) ;
 TYPE_1__* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct iommu_group *VAR_1 = FUNC_3(VAR_0);
 struct zpci_dev *VAR_2 = FUNC_5(VAR_0)->sysdata;

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 FUNC_4(VAR_1);
 FUNC_2(&VAR_2->iommu_dev, VAR_0);

 return 0;
}
