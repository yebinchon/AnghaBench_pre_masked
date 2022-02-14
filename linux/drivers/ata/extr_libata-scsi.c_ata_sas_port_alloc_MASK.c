
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port_info {int port_ops; int flags; int udma_mask; int mwdma_mask; int pio_mask; } ;
struct ata_port {int cbl; int ops; int flags; int udma_mask; int mwdma_mask; int pio_mask; int * lock; scalar_t__ port_no; } ;
struct ata_host {int lock; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct ata_port* FUNC_0 (struct ata_host*) ;

struct ata_port *FUNC_1(struct ata_host *VAR_1,
        struct ata_port_info *VAR_2,
        struct Scsi_Host *VAR_3)
{
 struct ata_port *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->port_no = 0;
 VAR_4->lock = &VAR_1->lock;
 VAR_4->pio_mask = VAR_2->pio_mask;
 VAR_4->mwdma_mask = VAR_2->mwdma_mask;
 VAR_4->udma_mask = VAR_2->udma_mask;
 VAR_4->flags |= VAR_2->flags;
 VAR_4->ops = VAR_2->port_ops;
 VAR_4->cbl = VAR_0;

 return VAR_4;
}
