
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {scalar_t__ dma_address; unsigned int dma_length; } ;
struct pci_pbm_info {int devhandle; } ;
struct iommu_map_table {scalar_t__ table_map_base; } ;
struct iommu {struct iommu_map_table tbl; struct atu* atu; } ;
struct TYPE_3__ {struct pci_pbm_info* host_controller; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct atu {struct iommu_map_table tbl; TYPE_2__* iotsb; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {unsigned long iotsb_num; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,int ,scalar_t__,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (scalar_t__,unsigned int,int ) ;
 int FUNC_4 (struct iommu_map_table*,scalar_t__,unsigned long,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 struct scatterlist* FUNC_7 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_4, struct scatterlist *VAR_5,
       int VAR_6, enum dma_data_direction VAR_7,
       unsigned long VAR_8)
{
 struct pci_pbm_info *VAR_9;
 struct scatterlist *VAR_10;
 struct iommu *VAR_11;
 struct atu *VAR_12;
 unsigned long VAR_13, VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;

 FUNC_0(VAR_7 == VAR_0);

 VAR_11 = VAR_4->archdata.iommu;
 VAR_9 = VAR_4->archdata.host_controller;
 VAR_12 = VAR_11->atu;
 VAR_16 = VAR_9->devhandle;

 FUNC_6(VAR_13);

 VAR_10 = VAR_5;
 while (VAR_6--) {
  dma_addr_t VAR_17 = VAR_10->dma_address;
  unsigned int VAR_18 = VAR_10->dma_length;
  unsigned long VAR_19;
  struct iommu_map_table *VAR_20;
  unsigned long VAR_21 = VAR_2;

  if (!VAR_18)
   break;
  VAR_19 = FUNC_3(VAR_17, VAR_18, VAR_3);

  if (VAR_17 <= FUNC_1(32)) {
   VAR_15 = 0;
   VAR_20 = &VAR_11->tbl;
  } else {
   VAR_15 = VAR_12->iotsb->iotsb_num;
   VAR_20 = &VAR_12->tbl;
  }
  VAR_14 = ((VAR_17 - VAR_20->table_map_base) >> VAR_21);
  FUNC_2(VAR_4, VAR_16, VAR_17, VAR_15,
       VAR_14, VAR_19);
  FUNC_4(VAR_20, VAR_17, VAR_19,
         VAR_1);
  VAR_10 = FUNC_7(VAR_10);
 }

 FUNC_5(VAR_13);
}
