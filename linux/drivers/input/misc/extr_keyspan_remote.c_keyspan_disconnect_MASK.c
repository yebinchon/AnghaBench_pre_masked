
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_keyspan {int in_dma; int in_buffer; int udev; int irq_urb; int input; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_keyspan*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct usb_keyspan* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct usb_keyspan *VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_6(VAR_1, ((void*)0));

 if (VAR_2) {
  FUNC_0(VAR_2->input);
  FUNC_5(VAR_2->irq_urb);
  FUNC_3(VAR_2->irq_urb);
  FUNC_2(VAR_2->udev, VAR_0, VAR_2->in_buffer, VAR_2->in_dma);
  FUNC_1(VAR_2);
 }
}
