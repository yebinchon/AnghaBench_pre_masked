
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int max_bus_speed; int fmb_update; int max_msi; int msi_addr; int dma_mask; int tlb_refresh; } ;
struct clp_rsp_query_pci_grp {int version; int mui; int noi; int msia; int dasm; int refresh; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct zpci_dev *VAR_2,
          struct clp_rsp_query_pci_grp *VAR_3)
{
 VAR_2->tlb_refresh = VAR_3->refresh;
 VAR_2->dma_mask = VAR_3->dasm;
 VAR_2->msi_addr = VAR_3->msia;
 VAR_2->max_msi = VAR_3->noi;
 VAR_2->fmb_update = VAR_3->mui;

 switch (VAR_3->version) {
 case 1:
  VAR_2->max_bus_speed = VAR_0;
  break;
 default:
  VAR_2->max_bus_speed = VAR_1;
  break;
 }
}
