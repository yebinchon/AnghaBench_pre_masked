
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_ops {int dummy; } ;
struct device {int dma_coherent; int * dma_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,int ,int ,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;

void FUNC_6(struct device *VAR_3, u64 VAR_4, u64 VAR_5,
   const struct iommu_ops *VAR_6, bool VAR_7)
{
 int VAR_8 = FUNC_1();

 FUNC_0(!VAR_7 && VAR_8 > VAR_0,
     VAR_1,
     "%s %s: ARCH_DMA_MINALIGN smaller than CTR_EL0.CWG (%d < %d)",
     FUNC_2(VAR_3), FUNC_3(VAR_3),
     VAR_0, VAR_8);

 VAR_3->dma_coherent = VAR_7;
 if (VAR_6)
  FUNC_4(VAR_3, VAR_4, VAR_5);





}
