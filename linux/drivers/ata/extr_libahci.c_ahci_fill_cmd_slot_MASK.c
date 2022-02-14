
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ahci_port_priv {int cmd_tbl_dma; TYPE_1__* cmd_slot; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* tbl_addr_hi; void* tbl_addr; scalar_t__ status; void* opts; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int) ;

void FUNC_1(struct ahci_port_priv *VAR_1, unsigned int VAR_2,
   u32 VAR_3)
{
 dma_addr_t VAR_4;

 VAR_4 = VAR_1->cmd_tbl_dma + VAR_2 * VAR_0;

 VAR_1->cmd_slot[VAR_2].opts = FUNC_0(VAR_3);
 VAR_1->cmd_slot[VAR_2].status = 0;
 VAR_1->cmd_slot[VAR_2].tbl_addr = FUNC_0(VAR_4 & 0xffffffff);
 VAR_1->cmd_slot[VAR_2].tbl_addr_hi = FUNC_0((VAR_4 >> 16) >> 16);
}
