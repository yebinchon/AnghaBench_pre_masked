
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* pci_dev; } ;
struct icp_firml_dram_desc {int dram_bus_addr; int dram_base_addr_v; scalar_t__ dram_size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,size_t,int ,int ) ;
 int FUNC_1 (struct icp_firml_dram_desc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct icp_qat_fw_loader_handle *VAR_0,
          struct icp_firml_dram_desc *VAR_1)
{
 FUNC_0(&VAR_0->pci_dev->dev,
     (size_t)(VAR_1->dram_size),
     (VAR_1->dram_base_addr_v),
     VAR_1->dram_bus_addr);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
