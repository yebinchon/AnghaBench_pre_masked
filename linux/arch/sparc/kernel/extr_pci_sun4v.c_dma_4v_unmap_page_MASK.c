
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_pbm_info {int devhandle; } ;
struct iommu_map_table {size_t table_map_base; } ;
struct iommu {struct iommu_map_table tbl; struct atu* atu; } ;
struct TYPE_3__ {struct pci_pbm_info* host_controller; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct atu {struct iommu_map_table tbl; TYPE_2__* iotsb; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef size_t dma_addr_t ;
struct TYPE_4__ {unsigned long iotsb_num; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,int ,size_t,unsigned long,long,unsigned long) ;
 int FUNC_4 (struct iommu_map_table*,size_t,unsigned long,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_4, dma_addr_t VAR_5,
         size_t VAR_6, enum dma_data_direction VAR_7,
         unsigned long VAR_8)
{
 struct pci_pbm_info *VAR_9;
 struct iommu *VAR_10;
 struct atu *VAR_11;
 struct iommu_map_table *VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 long VAR_15;
 u32 VAR_16;

 if (FUNC_6(VAR_7 == VAR_0)) {
  if (FUNC_5())
   FUNC_2(1);
  return;
 }

 VAR_10 = VAR_4->archdata.iommu;
 VAR_9 = VAR_4->archdata.host_controller;
 VAR_11 = VAR_10->atu;
 VAR_16 = VAR_9->devhandle;

 VAR_13 = FUNC_1(VAR_5 + VAR_6) - (VAR_5 & VAR_2);
 VAR_13 >>= VAR_3;
 VAR_5 &= VAR_2;

 if (VAR_5 <= FUNC_0(32)) {
  VAR_14 = 0;
  VAR_12 = &VAR_10->tbl;
 } else {
  VAR_14 = VAR_11->iotsb->iotsb_num;
  VAR_12 = &VAR_11->tbl;
 }
 VAR_15 = (VAR_5 - VAR_12->table_map_base) >> VAR_3;
 FUNC_3(VAR_4, VAR_16, VAR_5, VAR_14, VAR_15, VAR_13);
 FUNC_4(VAR_12, VAR_5, VAR_13, VAR_1);
}
