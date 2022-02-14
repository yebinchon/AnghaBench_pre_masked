
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
struct bcm2835_dma_cb {int dummy; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;
struct bcm2835_chan {int irq_flags; int irq_number; int cb_pool; int ch; TYPE_3__ vc; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ,struct device*,int,int,int ) ;
 int FUNC_4 (int ,int ,int ,char*,struct bcm2835_chan*) ;
 struct bcm2835_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_2)
{
 struct bcm2835_chan *VAR_3 = FUNC_5(VAR_2);
 struct device *VAR_4 = VAR_3->vc.chan.device->dev;

 FUNC_0(VAR_4, "Allocating DMA channel %d\n", VAR_3->ch);





 VAR_3->cb_pool = FUNC_3(FUNC_2(VAR_4), VAR_4,
         sizeof(struct bcm2835_dma_cb), 32, 0);
 if (!VAR_3->cb_pool) {
  FUNC_1(VAR_4, "unable to allocate descriptor pool\n");
  return -VAR_0;
 }

 return FUNC_4(VAR_3->irq_number, VAR_1,
      VAR_3->irq_flags, "DMA IRQ", VAR_3);
}
