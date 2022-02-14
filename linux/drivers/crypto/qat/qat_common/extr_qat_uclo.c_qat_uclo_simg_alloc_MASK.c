
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* pci_dev; } ;
struct icp_firml_dram_desc {unsigned int dram_size; int dram_bus_addr; void* dram_base_addr_v; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct icp_qat_fw_loader_handle *VAR_2,
          struct icp_firml_dram_desc *VAR_3,
          unsigned int VAR_4)
{
 void *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_0(&VAR_2->pci_dev->dev,
      VAR_4, &VAR_6, VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_3->dram_base_addr_v = VAR_5;
 VAR_3->dram_bus_addr = VAR_6;
 VAR_3->dram_size = VAR_4;
 return 0;
}
