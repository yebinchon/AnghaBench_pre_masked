
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {scalar_t__ xtype; int idata_dma; int idata; int udev; int irq_in; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct usb_xpad*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct usb_xpad* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (struct usb_xpad*) ;
 int FUNC_6 (struct usb_xpad*) ;
 int FUNC_7 (struct usb_xpad*) ;
 int FUNC_8 (struct usb_xpad*) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_2)
{
 struct usb_xpad *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->xtype == VAR_1)
  FUNC_5(VAR_3);

 FUNC_6(VAR_3);





 FUNC_8(VAR_3);

 FUNC_7(VAR_3);

 FUNC_2(VAR_3->irq_in);
 FUNC_1(VAR_3->udev, VAR_0,
   VAR_3->idata, VAR_3->idata_dma);

 FUNC_0(VAR_3);

 FUNC_4(VAR_2, ((void*)0));
}
