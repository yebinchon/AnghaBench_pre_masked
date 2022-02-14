
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_iommudata {int link; } ;
struct rk_iommu {int iommu; } ;
struct TYPE_2__ {struct rk_iommudata* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct device*) ;
 int FUNC_2 (struct device*) ;
 struct rk_iommu* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct rk_iommu *VAR_1;
 struct rk_iommudata *VAR_2 = VAR_0->archdata.iommu;

 VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_2->link);
 FUNC_1(&VAR_1->iommu, VAR_0);
 FUNC_2(VAR_0);
}
