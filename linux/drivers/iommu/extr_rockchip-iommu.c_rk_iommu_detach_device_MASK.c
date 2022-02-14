
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu_domain {int iommus_lock; } ;
struct rk_iommu {int dev; int node; struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rk_iommu*) ;
 struct rk_iommu* FUNC_6 (struct device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct rk_iommu_domain* FUNC_9 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_10(struct iommu_domain *VAR_0,
       struct device *VAR_1)
{
 struct rk_iommu *VAR_2;
 struct rk_iommu_domain *VAR_3 = FUNC_9(VAR_0);
 unsigned long VAR_4;
 int VAR_5;


 VAR_2 = FUNC_6(VAR_1);
 if (!VAR_2)
  return;

 FUNC_1(VAR_1, "Detaching from iommu domain\n");


 if (VAR_2->domain != VAR_0)
  return;

 VAR_2->domain = ((void*)0);

 FUNC_7(&VAR_3->iommus_lock, VAR_4);
 FUNC_2(&VAR_2->node);
 FUNC_8(&VAR_3->iommus_lock, VAR_4);

 VAR_5 = FUNC_3(VAR_2->dev);
 FUNC_0(VAR_5 < 0);
 if (VAR_5 > 0) {
  FUNC_5(VAR_2);
  FUNC_4(VAR_2->dev);
 }
}
