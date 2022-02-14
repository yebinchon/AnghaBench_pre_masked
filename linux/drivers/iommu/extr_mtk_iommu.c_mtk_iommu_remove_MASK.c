
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtk_iommu_data {int irq; int bclk; int iommu; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,struct mtk_iommu_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mtk_iommu_data* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct mtk_iommu_data *VAR_3 = FUNC_7(VAR_2);

 FUNC_4(&VAR_3->iommu);
 FUNC_5(&VAR_3->iommu);

 if (FUNC_6(&VAR_1))
  FUNC_0(&VAR_1, ((void*)0));

 FUNC_1(VAR_3->bclk);
 FUNC_3(&VAR_2->dev, VAR_3->irq, VAR_3);
 FUNC_2(&VAR_2->dev, &VAR_0);
 return 0;
}
