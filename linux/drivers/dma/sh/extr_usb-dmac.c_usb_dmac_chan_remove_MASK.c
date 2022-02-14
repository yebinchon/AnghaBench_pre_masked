
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dmac_chan {int irq; } ;
struct usb_dmac {int dev; } ;


 int FUNC_0 (int ,int ,struct usb_dmac_chan*) ;
 int FUNC_1 (struct usb_dmac_chan*) ;

__attribute__((used)) static void FUNC_2(struct usb_dmac *VAR_0,
     struct usb_dmac_chan *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_0->dev, VAR_1->irq, VAR_1);
}
