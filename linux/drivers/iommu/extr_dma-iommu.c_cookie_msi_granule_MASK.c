
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t granule; } ;
struct iommu_dma_cookie {scalar_t__ type; TYPE_1__ iovad; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline size_t FUNC_0(struct iommu_dma_cookie *VAR_2)
{
 if (VAR_2->type == VAR_0)
  return VAR_2->iovad.granule;
 return VAR_1;
}
