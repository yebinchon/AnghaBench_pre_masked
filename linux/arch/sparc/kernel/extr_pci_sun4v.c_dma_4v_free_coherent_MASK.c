
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_pbm_info {int devhandle; } ;
struct iommu_map_table {unsigned long table_map_base; } ;
struct iommu {struct iommu_map_table tbl; struct atu* atu; } ;
struct TYPE_3__ {struct pci_pbm_info* host_controller; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct atu {TYPE_2__* iotsb; struct iommu_map_table tbl; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_4__ {unsigned long iotsb_num; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (size_t) ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct device*,int ,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (size_t) ;
 int FUNC_4 (struct iommu_map_table*,unsigned long,unsigned long,int ) ;
 int FUNC_5 (struct iommu*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2, size_t VAR_3, void *VAR_4,
     dma_addr_t VAR_5, unsigned long VAR_6)
{
 struct pci_pbm_info *VAR_7;
 struct iommu *VAR_8;
 struct atu *VAR_9;
 struct iommu_map_table *VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_0(VAR_3) >> VAR_1;
 VAR_8 = VAR_2->archdata.iommu;
 VAR_7 = VAR_2->archdata.host_controller;
 VAR_9 = VAR_8->atu;
 VAR_15 = VAR_7->devhandle;

 if (!FUNC_5(VAR_8, VAR_5)) {
  VAR_10 = &VAR_8->tbl;
  VAR_14 = 0;
 } else {
  VAR_10 = &VAR_9->tbl;
  VAR_14 = VAR_9->iotsb->iotsb_num;
 }
 VAR_13 = ((VAR_5 - VAR_10->table_map_base) >> VAR_1);
 FUNC_1(VAR_2, VAR_15, VAR_5, VAR_14, VAR_13, VAR_12);
 FUNC_4(VAR_10, VAR_5, VAR_12, VAR_0);
 VAR_11 = FUNC_3(VAR_3);
 if (VAR_11 < 10)
  FUNC_2((unsigned long)VAR_4, VAR_11);
}
