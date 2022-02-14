
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_domain {scalar_t__ type; } ;
struct device {int * dma_ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct iommu_domain*,int ,int ,struct device*) ;
 int VAR_1 ;
 struct iommu_domain* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct device *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct iommu_domain *VAR_5 = FUNC_2(VAR_2);

 if (!VAR_5)
  goto out_err;





 if (VAR_5->type == VAR_0) {
  if (FUNC_1(VAR_5, VAR_3, VAR_4, VAR_2))
   goto out_err;
  VAR_2->dma_ops = &VAR_1;
 }

 return;
out_err:
  FUNC_3("Failed to set up IOMMU for device %s; retaining platform DMA ops\n",
   FUNC_0(VAR_2));
}
