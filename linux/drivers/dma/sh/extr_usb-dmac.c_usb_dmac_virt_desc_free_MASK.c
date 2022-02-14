
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct usb_dmac_desc {int dummy; } ;
struct usb_dmac_chan {int dummy; } ;


 struct usb_dmac_chan* FUNC_0 (int ) ;
 struct usb_dmac_desc* FUNC_1 (struct virt_dma_desc*) ;
 int FUNC_2 (struct usb_dmac_chan*,struct usb_dmac_desc*) ;

__attribute__((used)) static void FUNC_3(struct virt_dma_desc *VAR_0)
{
 struct usb_dmac_desc *VAR_1 = FUNC_1(VAR_0);
 struct usb_dmac_chan *VAR_2 = FUNC_0(VAR_0->tx.chan);

 FUNC_2(VAR_2, VAR_1);
}
