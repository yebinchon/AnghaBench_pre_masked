
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int num_irq; int dev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ,int,struct rk_iommu*) ;
 struct rk_iommu* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0)
{
 struct rk_iommu *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_irq; VAR_2++) {
  int VAR_3 = FUNC_2(VAR_0, VAR_2);

  FUNC_0(VAR_1->dev, VAR_3, VAR_1);
 }

 FUNC_3(&VAR_0->dev);
}
