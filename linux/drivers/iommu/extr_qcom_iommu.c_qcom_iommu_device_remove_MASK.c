
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_dev {int iommu; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct qcom_iommu_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct qcom_iommu_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_0, ((void*)0));

 FUNC_5(&VAR_1->dev);
 FUNC_4(VAR_1, ((void*)0));
 FUNC_1(&VAR_2->iommu);
 FUNC_2(&VAR_2->iommu);

 return 0;
}
