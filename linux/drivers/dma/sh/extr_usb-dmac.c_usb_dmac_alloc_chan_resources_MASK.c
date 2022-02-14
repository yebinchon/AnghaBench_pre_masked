
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_dmac_chan {scalar_t__ descs_allocated; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct usb_dmac_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct usb_dmac_chan*,int ,int ) ;
 int FUNC_3 (struct usb_dmac_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_3)
{
 struct usb_dmac_chan *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 while (VAR_4->descs_allocated < VAR_1) {
  VAR_5 = FUNC_2(VAR_4, VAR_2,
       VAR_0);
  if (VAR_5 < 0) {
   FUNC_3(VAR_4);
   return VAR_5;
  }
  VAR_4->descs_allocated++;
 }

 return FUNC_0(VAR_3->device->dev);
}
