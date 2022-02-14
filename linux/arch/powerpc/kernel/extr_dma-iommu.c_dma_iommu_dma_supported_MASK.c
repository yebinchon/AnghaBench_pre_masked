
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct iommu_table {int it_offset; int it_page_shift; } ;
struct TYPE_2__ {int iommu_bypass; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*,int) ;
 struct iommu_table* FUNC_5 (struct device*) ;

int FUNC_6(struct device *VAR_0, u64 VAR_1)
{
 struct iommu_table *VAR_2 = FUNC_5(VAR_0);

 if (FUNC_3(VAR_0) && FUNC_4(VAR_0, VAR_1)) {
  VAR_0->archdata.iommu_bypass = 1;
  FUNC_0(VAR_0, "iommu: 64-bit OK, using fixed ops\n");
  return 1;
 }

 if (!VAR_2) {
  FUNC_1(VAR_0, "Warning: IOMMU dma not supported: mask 0x%08llx, table unavailable\n", VAR_1);
  return 0;
 }

 if (VAR_2->it_offset > (VAR_1 >> VAR_2->it_page_shift)) {
  FUNC_2(VAR_0, "Warning: IOMMU offset too big for device mask\n");
  FUNC_2(VAR_0, "mask: 0x%08llx, table offset: 0x%08lx\n",
    VAR_1, VAR_2->it_offset << VAR_2->it_page_shift);
  return 0;
 }

 FUNC_0(VAR_0, "iommu: not 64-bit, using default ops\n");
 VAR_0->archdata.iommu_bypass = 0;
 return 1;
}
