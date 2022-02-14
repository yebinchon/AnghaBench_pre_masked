
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct iommu_ops {int dummy; } ;
struct dma_map_ops {int dummy; } ;
struct TYPE_2__ {int dma_coherent; int dma_ops_setup; } ;
struct device {int dma_coherent; TYPE_1__ archdata; int * dma_ops; } ;


 struct dma_map_ops* FUNC_0 (int) ;
 struct dma_map_ops* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct device*,int ,int ,struct iommu_ops const*) ;
 int FUNC_3 (struct device*,struct dma_map_ops const*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_0 ;

void FUNC_5(struct device *VAR_1, u64 VAR_2, u64 VAR_3,
   const struct iommu_ops *VAR_4, bool VAR_5)
{
 const struct dma_map_ops *VAR_6;

 VAR_1->archdata.dma_coherent = VAR_5;
 if (VAR_1->dma_ops)
  return;

 if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4))
  VAR_6 = FUNC_1(VAR_5);
 else
  VAR_6 = FUNC_0(VAR_5);

 FUNC_3(VAR_1, VAR_6);





 VAR_1->archdata.dma_ops_setup = 1;
}
