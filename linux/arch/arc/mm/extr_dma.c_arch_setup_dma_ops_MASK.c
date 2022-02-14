
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_ops {int dummy; } ;
struct device {int dma_coherent; } ;


 int FUNC_0 (struct device*,char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(struct device *VAR_1, u64 VAR_2, u64 VAR_3,
   const struct iommu_ops *VAR_4, bool VAR_5)
{





 if (FUNC_1() && VAR_0 && VAR_5)
  VAR_1->dma_coherent = 1;

 FUNC_0(VAR_1, "use %scoherent DMA ops\n",
   VAR_1->dma_coherent ? "" : "non");
}
