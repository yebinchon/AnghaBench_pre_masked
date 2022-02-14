
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viommu_endpoint {int resv_regions; TYPE_1__* viommu; } ;
struct iommu_fwspec {struct viommu_endpoint* iommu_priv; int * ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int iommu; } ;


 struct iommu_fwspec* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct viommu_endpoint*) ;
 int VAR_0 ;
 int FUNC_4 (struct device*,int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct viommu_endpoint *VAR_2;
 struct iommu_fwspec *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3 || VAR_3->ops != &VAR_0)
  return;

 VAR_2 = VAR_3->iommu_priv;

 FUNC_2(VAR_1);
 FUNC_1(&VAR_2->viommu->iommu, VAR_1);
 FUNC_4(VAR_1, &VAR_2->resv_regions);
 FUNC_3(VAR_2);
}
