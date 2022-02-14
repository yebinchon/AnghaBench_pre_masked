
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_5__* cur_altsetting; TYPE_3__* altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_16__ {int idProduct; int idVendor; } ;
struct usb_device {char* product; TYPE_6__ descriptor; scalar_t__ manufacturer; } ;
struct pegasus {int data_dma; int data; int data_len; TYPE_8__* irq; struct input_dev* dev; int phys; int name; int init; struct usb_interface* intf; struct usb_device* usbdev; int pm_mutex; } ;
struct TYPE_17__ {int * parent; } ;
struct input_dev {int propbit; int keybit; int absbit; int evbit; int close; int open; TYPE_7__ dev; int id; int phys; int name; } ;
struct TYPE_18__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_11__ {int bInterfaceNumber; } ;
struct TYPE_15__ {TYPE_4__* endpoint; TYPE_1__ desc; } ;
struct TYPE_14__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_12__ {int bNumEndpoints; } ;
struct TYPE_13__ {TYPE_2__ desc; } ;


 int VAR_0 ;
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
 int FUNC_0 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int,int,int,int ) ;
 int FUNC_7 (struct input_dev*,struct pegasus*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct pegasus*) ;
 struct pegasus* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (int ,int,char*,int,int) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int ,scalar_t__,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct usb_device*,int ,int ,int *) ;
 TYPE_8__* FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_8__*,struct usb_device*,int,int ,int ,int ,struct pegasus*,int ) ;
 int FUNC_20 (struct usb_device*,int ,int ,int ) ;
 int FUNC_21 (TYPE_8__*) ;
 int FUNC_22 (struct usb_device*,int ,int) ;
 int FUNC_23 (struct usb_device*,int,int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (struct usb_device*,int ) ;
 int FUNC_26 (struct usb_interface*,struct pegasus*) ;
 int FUNC_27 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_28(struct usb_interface *VAR_18,
    const struct usb_device_id *VAR_19)
{
 struct usb_device *VAR_20 = FUNC_8(VAR_18);
 struct usb_endpoint_descriptor *VAR_21;
 struct pegasus *VAR_22;
 struct input_dev *VAR_23;
 int VAR_24;
 int VAR_25;


 if (VAR_18->cur_altsetting->desc.bInterfaceNumber >= 1)
  return -VAR_6;


 if (VAR_18->altsetting[0].desc.bNumEndpoints < 1) {
  FUNC_2(&VAR_18->dev, "Invalid number of endpoints\n");
  return -VAR_5;
 }

 VAR_21 = &VAR_18->cur_altsetting->endpoint[0].desc;

 VAR_22 = FUNC_10(sizeof(*VAR_22), VAR_10);
 VAR_23 = FUNC_3();
 if (!VAR_22 || !VAR_23) {
  VAR_24 = -VAR_7;
  goto err_free_mem;
 }

 FUNC_12(&VAR_22->pm_mutex);

 VAR_22->usbdev = VAR_20;
 VAR_22->dev = VAR_23;
 VAR_22->intf = VAR_18;

 VAR_25 = FUNC_25(VAR_20, VAR_21->bEndpointAddress);
 VAR_22->data_len = FUNC_23(VAR_20, VAR_25, FUNC_24(VAR_25));

 VAR_22->data = FUNC_17(VAR_20, VAR_22->data_len, VAR_10,
        &VAR_22->data_dma);
 if (!VAR_22->data) {
  VAR_24 = -VAR_7;
  goto err_free_mem;
 }

 VAR_22->irq = FUNC_18(0, VAR_10);
 if (!VAR_22->irq) {
  VAR_24 = -VAR_7;
  goto err_free_dma;
 }

 FUNC_19(VAR_22->irq, VAR_20, VAR_25,
    VAR_22->data, VAR_22->data_len,
    VAR_16, VAR_22, VAR_21->bInterval);

 VAR_22->irq->transfer_dma = VAR_22->data_dma;
 VAR_22->irq->transfer_flags |= VAR_13;

 if (VAR_20->manufacturer)
  FUNC_15(VAR_22->name, VAR_20->manufacturer,
   sizeof(VAR_22->name));

 if (VAR_20->product) {
  if (VAR_20->manufacturer)
   FUNC_14(VAR_22->name, " ", sizeof(VAR_22->name));
  FUNC_14(VAR_22->name, VAR_20->product, sizeof(VAR_22->name));
 }

 if (!FUNC_16(VAR_22->name))
  FUNC_13(VAR_22->name, sizeof(VAR_22->name),
    "USB Pegasus Device %04x:%04x",
    FUNC_11(VAR_20->descriptor.idVendor),
    FUNC_11(VAR_20->descriptor.idProduct));

 FUNC_22(VAR_20, VAR_22->phys, sizeof(VAR_22->phys));
 FUNC_14(VAR_22->phys, "/input0", sizeof(VAR_22->phys));

 FUNC_0(&VAR_22->init, VAR_15);

 FUNC_26(VAR_18, VAR_22);

 VAR_23->name = VAR_22->name;
 VAR_23->phys = VAR_22->phys;
 FUNC_27(VAR_20, &VAR_23->id);
 VAR_23->dev.parent = &VAR_18->dev;

 FUNC_7(VAR_23, VAR_22);

 VAR_23->open = VAR_17;
 VAR_23->close = VAR_14;

 FUNC_1(VAR_8, VAR_23->evbit);
 FUNC_1(VAR_9, VAR_23->evbit);

 FUNC_1(VAR_0, VAR_23->absbit);
 FUNC_1(VAR_1, VAR_23->absbit);

 FUNC_1(VAR_4, VAR_23->keybit);
 FUNC_1(VAR_2, VAR_23->keybit);
 FUNC_1(VAR_3, VAR_23->keybit);

 FUNC_1(VAR_11, VAR_23->propbit);
 FUNC_1(VAR_12, VAR_23->propbit);

 FUNC_6(VAR_23, VAR_0, -1500, 1500, 8, 0);
 FUNC_6(VAR_23, VAR_1, 1600, 3000, 8, 0);

 VAR_24 = FUNC_5(VAR_22->dev);
 if (VAR_24)
  goto err_free_urb;

 return 0;

err_free_urb:
 FUNC_21(VAR_22->irq);
err_free_dma:
 FUNC_20(VAR_20, VAR_22->data_len,
     VAR_22->data, VAR_22->data_dma);
err_free_mem:
 FUNC_4(VAR_23);
 FUNC_9(VAR_22);
 FUNC_26(VAR_18, ((void*)0));

 return VAR_24;
}
