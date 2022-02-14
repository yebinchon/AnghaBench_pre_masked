
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int device; } ;
struct TYPE_2__ {struct dma_chan chan; } ;
struct usb_dmac_chan {TYPE_1__ vc; } ;
struct usb_dmac {int n_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_dmac* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct usb_dmac_chan*) ;
 int FUNC_3 (struct usb_dmac*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct usb_dmac_chan *VAR_3)
{
 struct dma_chan *VAR_4 = &VAR_3->vc.chan;
 struct usb_dmac *VAR_5 = FUNC_0(VAR_4->device);
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_5->n_channels; ++VAR_6) {
  if (FUNC_2(VAR_3))
   return;
 }

 FUNC_3(VAR_5, VAR_0, 0);
 FUNC_3(VAR_5, VAR_1, VAR_2);
 FUNC_1(100);
 FUNC_3(VAR_5, VAR_1, 0);
 FUNC_3(VAR_5, VAR_0, 1);
}
