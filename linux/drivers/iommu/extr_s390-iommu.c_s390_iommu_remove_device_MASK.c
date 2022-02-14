
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpci_dev {int iommu_dev; scalar_t__ s390_domain; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct zpci_dev* sysdata; } ;


 int FUNC_0 (int *,struct device*) ;
 struct iommu_domain* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct iommu_domain*,struct device*) ;
 TYPE_1__* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct zpci_dev *VAR_1 = FUNC_4(VAR_0)->sysdata;
 struct iommu_domain *VAR_2;
 if (VAR_1 && VAR_1->s390_domain) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   FUNC_3(VAR_2, VAR_0);
 }

 FUNC_0(&VAR_1->iommu_dev, VAR_0);
 FUNC_2(VAR_0);
}
