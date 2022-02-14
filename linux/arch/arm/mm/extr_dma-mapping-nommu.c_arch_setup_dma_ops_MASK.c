
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct iommu_ops {int dummy; } ;
struct TYPE_2__ {int dma_coherent; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*,int *) ;

void FUNC_3(struct device *VAR_4, u64 VAR_5, u64 VAR_6,
   const struct iommu_ops *VAR_7, bool VAR_8)
{
 if (FUNC_0(VAR_0)) {






  VAR_4->archdata.dma_coherent = (VAR_3) ? VAR_8 : 1;
 } else {



  VAR_4->archdata.dma_coherent = (FUNC_1() & VAR_1) ? VAR_8 : 1;
 }

 if (!VAR_4->archdata.dma_coherent)
  FUNC_2(VAR_4, &VAR_2);
}
