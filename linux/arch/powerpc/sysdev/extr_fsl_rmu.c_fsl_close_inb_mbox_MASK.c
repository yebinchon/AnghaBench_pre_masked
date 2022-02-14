
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_priv {int dev; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_4__ {int size; int phys; int virt; } ;
struct fsl_rmu {TYPE_2__ msg_rx_ring; TYPE_1__* msg_regs; } ;
struct TYPE_3__ {int imr; } ;


 struct fsl_rmu* FUNC_0 (struct rio_mport*) ;
 int FUNC_1 (struct rio_mport*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct rio_mport *VAR_1, int VAR_2)
{
 struct rio_priv *VAR_3 = VAR_1->priv;
 struct fsl_rmu *VAR_4 = FUNC_0(VAR_1);


 FUNC_4(&VAR_4->msg_regs->imr, 0);


 FUNC_2(VAR_3->dev, VAR_4->msg_rx_ring.size * VAR_0,
 VAR_4->msg_rx_ring.virt, VAR_4->msg_rx_ring.phys);


 FUNC_3(FUNC_1(VAR_1), (void *)VAR_1);
}
