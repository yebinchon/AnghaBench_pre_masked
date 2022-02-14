
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct synusb {int flags; TYPE_1__* urb; int data; int input; } ;
struct TYPE_2__ {int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct synusb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct synusb* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_2)
{
 struct synusb *VAR_3 = FUNC_6(VAR_2);
 struct usb_device *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->flags & VAR_0)
  FUNC_3(VAR_3->input);

 FUNC_0(VAR_3->input);

 FUNC_4(VAR_4, VAR_1, VAR_3->data,
     VAR_3->urb->transfer_dma);
 FUNC_5(VAR_3->urb);
 FUNC_2(VAR_3);

 FUNC_7(VAR_2, ((void*)0));
}
