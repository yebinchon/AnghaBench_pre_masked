
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rio_tx_desc {int dport; int dattr; size_t dwcnt; int saddr; } ;
struct rio_mport {int index; } ;
struct rio_dev {int destid; } ;
struct TYPE_4__ {int tx_slot; int* phys_buffer; size_t size; scalar_t__* virt_buffer; scalar_t__ virt; } ;
struct fsl_rmu {TYPE_2__ msg_tx_ring; TYPE_1__* msg_regs; } ;
struct TYPE_3__ {int omr; } ;


 int VAR_0 ;
 struct fsl_rmu* FUNC_0 (struct rio_mport*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (scalar_t__,void*,size_t) ;
 int FUNC_5 (scalar_t__,int ,size_t) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*,int,int,void*,size_t) ;

int
FUNC_8(struct rio_mport *VAR_3, struct rio_dev *VAR_4, int VAR_5,
   void *VAR_6, size_t VAR_7)
{
 struct fsl_rmu *VAR_8 = FUNC_0(VAR_3);
 u32 VAR_9;
 struct rio_tx_desc *VAR_10 = (struct rio_tx_desc *)VAR_8->msg_tx_ring.virt
     + VAR_8->msg_tx_ring.tx_slot;
 int VAR_11 = 0;

 FUNC_7("RIO: fsl_add_outb_message(): destid %4.4x mbox %d buffer " "%p len %8.8zx\n", VAR_4->destid, VAR_5, VAR_6, VAR_7);

 if ((VAR_7 < 8) || (VAR_7 > VAR_1)) {
  VAR_11 = -VAR_0;
  goto out;
 }


 FUNC_4(VAR_8->msg_tx_ring.virt_buffer[VAR_8->msg_tx_ring.tx_slot], VAR_6,
   VAR_7);
 if (VAR_7 < (VAR_1 - 4))
  FUNC_5(VAR_8->msg_tx_ring.virt_buffer[VAR_8->msg_tx_ring.tx_slot]
    + VAR_7, 0, VAR_1 - VAR_7);


 VAR_10->dport = (VAR_4->destid << 16) | (VAR_5 & 0x3);


 VAR_10->dattr = 0x28000000 | ((VAR_3->index) << 20);


 VAR_10->dwcnt = FUNC_3(VAR_7) ? VAR_7 : 1 << FUNC_1(VAR_7);


 VAR_10->saddr = 0x00000004
  | VAR_8->msg_tx_ring.phys_buffer[VAR_8->msg_tx_ring.tx_slot];


 VAR_9 = FUNC_2(&VAR_8->msg_regs->omr);
 FUNC_6(&VAR_8->msg_regs->omr, VAR_9 | VAR_2);


 if (++VAR_8->msg_tx_ring.tx_slot == VAR_8->msg_tx_ring.size)
  VAR_8->msg_tx_ring.tx_slot = 0;

out:
 return VAR_11;
}
