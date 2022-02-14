
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_6__ {int * xport_ops; } ;
struct iforce_usb {void* out; void* irq; TYPE_3__ iforce; int data_out; int data_in; struct usb_interface* intf; struct usb_device* usbdev; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct iforce_usb*) ;
 struct iforce_usb* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_endpoint_descriptor*) ;
 int FUNC_6 (struct usb_endpoint_descriptor*) ;
 int FUNC_7 (void*,struct usb_device*,int ,int ,int,int ,struct iforce_usb*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct usb_device*,int ) ;
 int FUNC_10 (struct usb_interface*,struct iforce_usb*) ;
 int FUNC_11 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_7,
    const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_1(VAR_7);
 struct usb_host_interface *VAR_10;
 struct usb_endpoint_descriptor *VAR_11, *VAR_12;
 struct iforce_usb *VAR_13;
 int VAR_14 = -VAR_2;

 VAR_10 = VAR_7->cur_altsetting;

 if (VAR_10->desc.bNumEndpoints < 2)
  return -VAR_1;

 VAR_11 = &VAR_10->endpoint[0].desc;
 if (!FUNC_5(VAR_11))
  return -VAR_1;

 VAR_12 = &VAR_10->endpoint[1].desc;
 if (!FUNC_6(VAR_12))
  return -VAR_1;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  goto fail;

 VAR_13->irq = FUNC_4(0, VAR_3);
 if (!VAR_13->irq)
  goto fail;

 VAR_13->out = FUNC_4(0, VAR_3);
 if (!VAR_13->out)
  goto fail;

 VAR_13->iforce.xport_ops = &VAR_6;

 VAR_13->usbdev = VAR_9;
 VAR_13->intf = VAR_7;

 FUNC_7(VAR_13->irq, VAR_9,
    FUNC_9(VAR_9, VAR_11->bEndpointAddress),
    VAR_13->data_in, sizeof(VAR_13->data_in),
    VAR_4, VAR_13, VAR_11->bInterval);

 FUNC_7(VAR_13->out, VAR_9,
    FUNC_11(VAR_9, VAR_12->bEndpointAddress),
    VAR_13->data_out, sizeof(VAR_13->data_out),
    VAR_5, VAR_13, VAR_12->bInterval);

 VAR_14 = FUNC_0(&VAR_7->dev, VAR_0, &VAR_13->iforce);
 if (VAR_14)
  goto fail;

 FUNC_10(VAR_7, VAR_13);
 return 0;

fail:
 if (VAR_13) {
  FUNC_8(VAR_13->irq);
  FUNC_8(VAR_13->out);
  FUNC_2(VAR_13);
 }

 return VAR_14;
}
