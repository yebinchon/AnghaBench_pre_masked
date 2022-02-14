
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int ctrlbuf_dma; int ctrlbuf; int bufsize; int cr; int outbuf_dma; int outbuf; int inbuf_dma; int inbuf; } ;
struct usb_device {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_0, struct hid_device *VAR_1)
{
 struct usbhid_device *VAR_2 = VAR_1->driver_data;

 FUNC_1(VAR_0, VAR_2->bufsize, VAR_2->inbuf, VAR_2->inbuf_dma);
 FUNC_1(VAR_0, VAR_2->bufsize, VAR_2->outbuf, VAR_2->outbuf_dma);
 FUNC_0(VAR_2->cr);
 FUNC_1(VAR_0, VAR_2->bufsize, VAR_2->ctrlbuf, VAR_2->ctrlbuf_dma);
}
