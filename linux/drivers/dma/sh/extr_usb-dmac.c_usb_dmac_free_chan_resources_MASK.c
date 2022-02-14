
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct usb_dmac_chan {TYPE_2__ vc; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct usb_dmac_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (struct usb_dmac_chan*) ;
 int FUNC_5 (struct usb_dmac_chan*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct usb_dmac_chan *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;


 FUNC_1(&VAR_1->vc.lock, VAR_2);
 FUNC_4(VAR_1);
 FUNC_2(&VAR_1->vc.lock, VAR_2);

 FUNC_5(VAR_1);
 FUNC_6(&VAR_1->vc);

 FUNC_0(VAR_0->device->dev);
}
