
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rio_priv {int dev; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_3__ {int size; scalar_t__ phys; int virt; int ** virt_buffer; scalar_t__ rx_slot; void* dev_id; } ;
struct fsl_rmu {TYPE_2__* msg_regs; TYPE_1__ msg_rx_ring; } ;
struct TYPE_4__ {int imr; int isr; int ifqepar; int ifqdpar; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsl_rmu* FUNC_0 (struct rio_mport*) ;
 int VAR_2 ;
 int FUNC_1 (struct rio_mport*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,scalar_t__*,int ) ;
 int FUNC_3 (int ,int,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int ,int ,char*,void*) ;
 int FUNC_8 (int *,int) ;

int
FUNC_9(struct rio_mport *VAR_7, void *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = 0;
 struct rio_priv *VAR_13 = VAR_7->priv;
 struct fsl_rmu *VAR_14 = FUNC_0(VAR_7);

 if ((VAR_10 < VAR_5) ||
  (VAR_10 > VAR_4) || (!FUNC_5(VAR_10))) {
  VAR_12 = -VAR_0;
  goto out;
 }


 VAR_14->msg_rx_ring.dev_id = VAR_8;
 VAR_14->msg_rx_ring.size = VAR_10;
 VAR_14->msg_rx_ring.rx_slot = 0;
 for (VAR_11 = 0; VAR_11 < VAR_14->msg_rx_ring.size; VAR_11++)
  VAR_14->msg_rx_ring.virt_buffer[VAR_11] = ((void*)0);


 VAR_14->msg_rx_ring.virt = FUNC_2(VAR_13->dev,
    VAR_14->msg_rx_ring.size * VAR_3,
    &VAR_14->msg_rx_ring.phys, VAR_2);
 if (!VAR_14->msg_rx_ring.virt) {
  VAR_12 = -VAR_1;
  goto out;
 }


 FUNC_6(&VAR_14->msg_regs->ifqdpar, (u32) VAR_14->msg_rx_ring.phys);
 FUNC_6(&VAR_14->msg_regs->ifqepar, (u32) VAR_14->msg_rx_ring.phys);


 FUNC_6(&VAR_14->msg_regs->isr, 0x00000091);


 VAR_12 = FUNC_7(FUNC_1(VAR_7), VAR_6, 0,
    "msg_rx", (void *)VAR_7);
 if (VAR_12 < 0) {
  FUNC_3(VAR_13->dev,
   VAR_14->msg_rx_ring.size * VAR_3,
   VAR_14->msg_rx_ring.virt, VAR_14->msg_rx_ring.phys);
  goto out;
 }
 FUNC_6(&VAR_14->msg_regs->imr, 0x001b0060);


 FUNC_8(&VAR_14->msg_regs->imr, (FUNC_4(VAR_10) - 2) << 12);


 FUNC_8(&VAR_14->msg_regs->imr, 0x1);

out:
 return VAR_12;
}
