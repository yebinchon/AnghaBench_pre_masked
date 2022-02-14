
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct iommu {scalar_t__ dma_addr_mask; } ;
struct TYPE_2__ {struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 scalar_t__ FUNC_0 (struct device*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, u64 VAR_1)
{
 struct iommu *VAR_2 = VAR_0->archdata.iommu;

 if (FUNC_0(VAR_0, VAR_1))
  return 1;
 if (VAR_1 < VAR_2->dma_addr_mask)
  return 0;
 return 1;
}
