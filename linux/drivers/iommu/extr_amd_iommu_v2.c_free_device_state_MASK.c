
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_group {int dummy; } ;
struct device_state {int domain; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct iommu_group*) ;
 int FUNC_2 (int ) ;
 struct iommu_group* FUNC_3 (int *) ;
 int FUNC_4 (struct iommu_group*) ;
 int FUNC_5 (struct device_state*) ;

__attribute__((used)) static void FUNC_6(struct device_state *VAR_0)
{
 struct iommu_group *VAR_1;





 VAR_1 = FUNC_3(&VAR_0->pdev->dev);
 if (FUNC_0(!VAR_1))
  return;

 FUNC_1(VAR_0->domain, VAR_1);

 FUNC_4(VAR_1);


 FUNC_2(VAR_0->domain);


 FUNC_5(VAR_0);
}
