
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtouch_usb {int buffer; int data_dma; int data; int data_size; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_0,
      struct usbtouch_usb *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->data_size,
     VAR_1->data, VAR_1->data_dma);
 FUNC_0(VAR_1->buffer);
}
