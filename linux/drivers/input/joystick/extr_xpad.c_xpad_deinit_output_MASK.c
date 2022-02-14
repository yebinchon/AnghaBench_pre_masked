
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {scalar_t__ xtype; int odata_dma; int odata; int udev; int irq_out; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_xpad *VAR_2)
{
 if (VAR_2->xtype != VAR_1) {
  FUNC_1(VAR_2->irq_out);
  FUNC_0(VAR_2->udev, VAR_0,
    VAR_2->odata, VAR_2->odata_dma);
 }
}
