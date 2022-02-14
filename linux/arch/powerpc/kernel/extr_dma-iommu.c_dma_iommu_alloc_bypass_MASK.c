
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iommu_bypass; } ;
struct device {int coherent_dma_mask; TYPE_1__ archdata; } ;


 scalar_t__ FUNC_0 (struct device*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(struct device *VAR_1)
{
 return VAR_1->archdata.iommu_bypass && !VAR_0 &&
  FUNC_0(VAR_1, VAR_1->coherent_dma_mask);
}
