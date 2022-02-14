
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_priv {int dev; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_4__ {int size; int* phys_buffer; int phys; void** virt_buffer; void* virt; scalar_t__ tx_slot; void* dev_id; } ;
struct fsl_rmu {TYPE_2__ msg_tx_ring; TYPE_1__* msg_regs; } ;
struct TYPE_3__ {int omr; int osr; int osar; int odqepar; int odqdpar; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsl_rmu* FUNC_0 (struct rio_mport*) ;
 int VAR_2 ;
 int FUNC_1 (struct rio_mport*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int,int*,int ) ;
 int FUNC_3 (int ,int,void*,int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int ,int ,char*,void*) ;

int
FUNC_9(struct rio_mport *VAR_8, void *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = 0;
 struct rio_priv *VAR_15 = VAR_8->priv;
 struct fsl_rmu *VAR_16 = FUNC_0(VAR_8);

 if ((VAR_11 < VAR_4) ||
  (VAR_11 > VAR_3) || (!FUNC_6(VAR_11))) {
  VAR_14 = -VAR_0;
  goto out;
 }


 VAR_16->msg_tx_ring.dev_id = VAR_9;
 VAR_16->msg_tx_ring.size = VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_16->msg_tx_ring.size; VAR_12++) {
  VAR_16->msg_tx_ring.virt_buffer[VAR_12] =
   FUNC_2(VAR_15->dev, VAR_5,
    &VAR_16->msg_tx_ring.phys_buffer[VAR_12], VAR_2);
  if (!VAR_16->msg_tx_ring.virt_buffer[VAR_12]) {
   VAR_14 = -VAR_1;
   for (VAR_13 = 0; VAR_13 < VAR_16->msg_tx_ring.size; VAR_13++)
    if (VAR_16->msg_tx_ring.virt_buffer[VAR_13])
     FUNC_3(VAR_15->dev,
       VAR_5,
       VAR_16->msg_tx_ring.
       virt_buffer[VAR_13],
       VAR_16->msg_tx_ring.
       phys_buffer[VAR_13]);
   goto out;
  }
 }


 VAR_16->msg_tx_ring.virt = FUNC_2(VAR_15->dev,
         VAR_16->msg_tx_ring.size * VAR_6,
         &VAR_16->msg_tx_ring.phys,
         VAR_2);
 if (!VAR_16->msg_tx_ring.virt) {
  VAR_14 = -VAR_1;
  goto out_dma;
 }
 VAR_16->msg_tx_ring.tx_slot = 0;


 FUNC_7(&VAR_16->msg_regs->odqdpar, VAR_16->msg_tx_ring.phys);
 FUNC_7(&VAR_16->msg_regs->odqepar, VAR_16->msg_tx_ring.phys);


 FUNC_7(&VAR_16->msg_regs->osar, 0x00000004);


 FUNC_7(&VAR_16->msg_regs->osr, 0x000000b3);


 VAR_14 = FUNC_8(FUNC_1(VAR_8), VAR_7, 0,
    "msg_tx", (void *)VAR_8);
 if (VAR_14 < 0)
  goto out_irq;
 FUNC_7(&VAR_16->msg_regs->omr, 0x00100220);


 FUNC_7(&VAR_16->msg_regs->omr,
   FUNC_5(&VAR_16->msg_regs->omr) |
   ((FUNC_4(VAR_11) - 2) << 12));


 FUNC_7(&VAR_16->msg_regs->omr, FUNC_5(&VAR_16->msg_regs->omr) | 0x1);

out:
 return VAR_14;

out_irq:
 FUNC_3(VAR_15->dev,
  VAR_16->msg_tx_ring.size * VAR_6,
  VAR_16->msg_tx_ring.virt, VAR_16->msg_tx_ring.phys);

out_dma:
 for (VAR_12 = 0; VAR_12 < VAR_16->msg_tx_ring.size; VAR_12++)
  FUNC_3(VAR_15->dev, VAR_5,
  VAR_16->msg_tx_ring.virt_buffer[VAR_12],
  VAR_16->msg_tx_ring.phys_buffer[VAR_12]);

 return VAR_14;
}
