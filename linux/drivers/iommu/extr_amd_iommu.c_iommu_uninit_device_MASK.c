
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_dev_data {scalar_t__ domain; } ;
struct device {int * dma_ops; } ;
struct amd_iommu {int iommu; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,struct device*) ;
 int FUNC_3 (struct device*) ;
 struct iommu_dev_data* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct iommu_dev_data *VAR_2;
 struct amd_iommu *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < 0)
  return;

 VAR_3 = VAR_0[VAR_4];

 VAR_2 = FUNC_4(VAR_4);
 if (!VAR_2)
  return;

 if (VAR_2->domain)
  FUNC_0(VAR_1);

 FUNC_2(&VAR_3->iommu, VAR_1);

 FUNC_3(VAR_1);


 VAR_1->dma_ops = ((void*)0);





}
