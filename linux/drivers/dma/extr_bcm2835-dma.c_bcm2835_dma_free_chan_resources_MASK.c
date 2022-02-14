
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;
struct bcm2835_chan {int ch; TYPE_3__ vc; int cb_pool; int irq_number; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct bcm2835_chan*) ;
 struct bcm2835_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct bcm2835_chan *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_1->vc);
 FUNC_2(VAR_1->irq_number, VAR_1);
 FUNC_1(VAR_1->cb_pool);

 FUNC_0(VAR_1->vc.chan.device->dev, "Freeing DMA channel %u\n", VAR_1->ch);
}
