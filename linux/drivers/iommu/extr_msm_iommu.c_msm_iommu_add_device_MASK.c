
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_iommu_dev {int iommu; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 struct msm_iommu_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,struct device*) ;
 struct iommu_group* FUNC_4 (struct device*) ;
 int FUNC_5 (struct iommu_group*) ;
 int VAR_1 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 struct msm_iommu_dev *VAR_3;
 struct iommu_group *VAR_4;
 unsigned long VAR_5;

 FUNC_6(&VAR_1, VAR_5);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_7(&VAR_1, VAR_5);

 if (VAR_3)
  FUNC_3(&VAR_3->iommu, VAR_2);
 else
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_5(VAR_4);

 return 0;
}
