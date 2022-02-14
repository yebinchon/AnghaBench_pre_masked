
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_dmac_sg {int mem_addr; int size; } ;
struct usb_dmac_desc {scalar_t__ direction; struct usb_dmac_sg* sg; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;
struct usb_dmac_chan {int index; TYPE_3__ vc; struct usb_dmac_desc* desc; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,struct usb_dmac_sg*,int ,int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_dmac_chan*) ;
 int FUNC_5 (struct usb_dmac_chan*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct usb_dmac_chan *VAR_11,
       unsigned int VAR_12)
{
 struct usb_dmac_desc *VAR_13 = VAR_11->desc;
 struct usb_dmac_sg *VAR_14 = VAR_13->sg + VAR_12;
 dma_addr_t VAR_15 = 0, VAR_16 = 0;

 FUNC_1(FUNC_4(VAR_11));

 if (VAR_13->direction == VAR_0)
  VAR_16 = VAR_14->mem_addr;
 else
  VAR_15 = VAR_14->mem_addr;

 FUNC_2(VAR_11->vc.chan.device->dev,
  "chan%u: queue sg %p: %u@%pad -> %pad\n",
  VAR_11->index, VAR_14, VAR_14->size, &VAR_15, &VAR_16);

 FUNC_5(VAR_11, VAR_8, VAR_15 & 0xffffffff);
 FUNC_5(VAR_11, VAR_7, VAR_16 & 0xffffffff);
 FUNC_5(VAR_11, VAR_9,
       FUNC_0(VAR_14->size, VAR_6));
 FUNC_5(VAR_11, VAR_10, FUNC_3(VAR_14->size));

 FUNC_5(VAR_11, VAR_1, VAR_5 |
   VAR_4 | VAR_3 | VAR_2);
}
