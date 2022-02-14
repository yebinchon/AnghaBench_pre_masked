
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_iommu_dev {int iommu; } ;
struct device {int dummy; } ;


 struct msm_iommu_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct msm_iommu_dev *VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0, VAR_3);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_4(&VAR_0, VAR_3);

 if (VAR_2)
  FUNC_1(&VAR_2->iommu, VAR_1);

 FUNC_2(VAR_1);
}
