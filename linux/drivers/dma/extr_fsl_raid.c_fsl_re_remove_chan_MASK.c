
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_re_chan {int oub_phys_addr; int oub_ring_virt_addr; TYPE_1__* re_dev; int inb_phys_addr; int inb_ring_virt_addr; int irqtask; } ;
struct TYPE_2__ {int hw_desc_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fsl_re_chan *VAR_0)
{
 FUNC_1(&VAR_0->irqtask);

 FUNC_0(VAR_0->re_dev->hw_desc_pool, VAR_0->inb_ring_virt_addr,
        VAR_0->inb_phys_addr);

 FUNC_0(VAR_0->re_dev->hw_desc_pool, VAR_0->oub_ring_virt_addr,
        VAR_0->oub_phys_addr);
}
