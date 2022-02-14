
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_iommudata {int link; } ;
struct rk_iommu {int dev; int iommu; } ;
struct iommu_group {int dummy; } ;
struct TYPE_2__ {struct rk_iommudata* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct device*,int ,int) ;
 int FUNC_3 (int *,struct device*) ;
 struct iommu_group* FUNC_4 (struct device*) ;
 int FUNC_5 (struct iommu_group*) ;
 struct rk_iommu* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3)
{
 struct iommu_group *VAR_4;
 struct rk_iommu *VAR_5;
 struct rk_iommudata *VAR_6;

 VAR_6 = VAR_3->archdata.iommu;
 if (!VAR_6)
  return -VAR_2;

 VAR_5 = FUNC_6(VAR_3);

 VAR_4 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 FUNC_5(VAR_4);

 FUNC_3(&VAR_5->iommu, VAR_3);
 VAR_6->link = FUNC_2(VAR_3, VAR_5->dev,
         VAR_1 | VAR_0);

 return 0;
}
