
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_7__* cur_altsetting; int num_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int driver_info; } ;
struct TYPE_9__ {int idProduct; int idVendor; } ;
struct usb_device {char* product; int dev; TYPE_2__ descriptor; scalar_t__ manufacturer; } ;
struct synusb {int flags; TYPE_4__* urb; int data; struct input_dev* input; struct usb_interface* intf; int phys; int name; int pm_mutex; struct usb_device* udev; } ;
struct TYPE_10__ {int * parent; } ;
struct input_dev {int (* open ) (struct input_dev*) ;int keybit; int propbit; int relbit; int evbit; int (* close ) (struct input_dev*) ;TYPE_3__ dev; int id; int phys; int name; } ;
struct TYPE_8__ {unsigned int bInterfaceNumber; } ;
struct TYPE_12__ {TYPE_1__ desc; } ;
struct TYPE_11__ {int transfer_dma; int transfer_flags; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_6 (struct input_dev*,struct synusb*) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct synusb*) ;
 struct synusb* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int,char*,int,int) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int ,scalar_t__,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct input_dev*) ;
 struct usb_endpoint_descriptor* FUNC_18 (TYPE_7__*) ;
 int VAR_33 ;
 int FUNC_19 (struct input_dev*) ;
 int FUNC_20 (struct usb_device*,int ,int ,int *) ;
 TYPE_4__* FUNC_21 (int ,int ) ;
 int FUNC_22 (TYPE_4__*,struct usb_device*,int ,int ,int ,int ,struct synusb*,int ) ;
 int FUNC_23 (struct usb_device*,int ,int ,int ) ;
 int FUNC_24 (TYPE_4__*) ;
 int FUNC_25 (struct usb_device*,int ,int) ;
 int FUNC_26 (struct usb_device*,int ) ;
 int FUNC_27 (struct usb_device*,unsigned int,unsigned int) ;
 int FUNC_28 (struct usb_interface*,struct synusb*) ;
 int FUNC_29 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_30(struct usb_interface *VAR_34,
   const struct usb_device_id *VAR_35)
{
 struct usb_device *VAR_36 = FUNC_7(VAR_34);
 struct usb_endpoint_descriptor *VAR_37;
 struct synusb *VAR_38;
 struct input_dev *VAR_39;
 unsigned int VAR_40 = VAR_34->cur_altsetting->desc.bInterfaceNumber;
 unsigned int VAR_41 = FUNC_11(VAR_34->num_altsetting, 1U);
 int VAR_42;

 VAR_42 = FUNC_27(VAR_36, VAR_40, VAR_41);
 if (VAR_42) {
  FUNC_1(&VAR_36->dev,
   "Can not set alternate setting to %i, error: %i",
   VAR_41, VAR_42);
  return VAR_42;
 }

 VAR_37 = FUNC_18(VAR_34->cur_altsetting);
 if (!VAR_37)
  return -VAR_11;

 VAR_38 = FUNC_9(sizeof(*VAR_38), VAR_16);
 VAR_39 = FUNC_2();
 if (!VAR_38 || !VAR_39) {
  VAR_42 = -VAR_12;
  goto err_free_mem;
 }

 VAR_38->udev = VAR_36;
 VAR_38->intf = VAR_34;
 VAR_38->input = VAR_39;
 FUNC_12(&VAR_38->pm_mutex);

 VAR_38->flags = VAR_35->driver_info;
 if (VAR_38->flags & VAR_22) {




  VAR_38->flags |= VAR_40 == 1 ?
     VAR_25 : VAR_26;
 }

 VAR_38->urb = FUNC_21(0, VAR_16);
 if (!VAR_38->urb) {
  VAR_42 = -VAR_12;
  goto err_free_mem;
 }

 VAR_38->data = FUNC_20(VAR_36, VAR_24, VAR_16,
       &VAR_38->urb->transfer_dma);
 if (!VAR_38->data) {
  VAR_42 = -VAR_12;
  goto err_free_urb;
 }

 FUNC_22(VAR_38->urb, VAR_36,
    FUNC_26(VAR_36, VAR_37->bEndpointAddress),
    VAR_38->data, VAR_24,
    VAR_33, VAR_38,
    VAR_37->bInterval);
 VAR_38->urb->transfer_flags |= VAR_28;

 if (VAR_36->manufacturer)
  FUNC_15(VAR_38->name, VAR_36->manufacturer,
   sizeof(VAR_38->name));

 if (VAR_36->product) {
  if (VAR_36->manufacturer)
   FUNC_14(VAR_38->name, " ", sizeof(VAR_38->name));
  FUNC_14(VAR_38->name, VAR_36->product, sizeof(VAR_38->name));
 }

 if (!FUNC_16(VAR_38->name))
  FUNC_13(VAR_38->name, sizeof(VAR_38->name),
    "USB Synaptics Device %04x:%04x",
    FUNC_10(VAR_36->descriptor.idVendor),
    FUNC_10(VAR_36->descriptor.idProduct));

 if (VAR_38->flags & VAR_25)
  FUNC_14(VAR_38->name, " (Stick)", sizeof(VAR_38->name));

 FUNC_25(VAR_36, VAR_38->phys, sizeof(VAR_38->phys));
 FUNC_14(VAR_38->phys, "/input0", sizeof(VAR_38->phys));

 VAR_39->name = VAR_38->name;
 VAR_39->phys = VAR_38->phys;
 FUNC_29(VAR_36, &VAR_39->id);
 VAR_39->dev.parent = &VAR_38->intf->dev;

 if (!(VAR_38->flags & VAR_23)) {
  VAR_39->open = FUNC_19;
  VAR_39->close = FUNC_17;
 }

 FUNC_6(VAR_39, VAR_38);

 FUNC_0(VAR_13, VAR_39->evbit);
 FUNC_0(VAR_14, VAR_39->evbit);

 if (VAR_38->flags & VAR_25) {
  FUNC_0(VAR_15, VAR_39->evbit);
  FUNC_0(VAR_20, VAR_39->relbit);
  FUNC_0(VAR_21, VAR_39->relbit);
  FUNC_0(VAR_19, VAR_39->propbit);
  FUNC_5(VAR_39, VAR_0, 0, 127, 0, 0);
 } else {
  FUNC_5(VAR_39, VAR_2,
         VAR_30, VAR_29, 0, 0);
  FUNC_5(VAR_39, VAR_3,
         VAR_32, VAR_31, 0, 0);
  FUNC_5(VAR_39, VAR_0, 0, 255, 0, 0);
  FUNC_5(VAR_39, VAR_1, 0, 15, 0, 0);
  FUNC_0(VAR_10, VAR_39->keybit);
  FUNC_0(VAR_8, VAR_39->keybit);
  FUNC_0(VAR_7, VAR_39->keybit);
  FUNC_0(VAR_9, VAR_39->keybit);
 }

 if (VAR_38->flags & VAR_27)
  FUNC_0(VAR_17, VAR_39->propbit);
 else
  FUNC_0(VAR_18, VAR_39->propbit);

 FUNC_0(VAR_4, VAR_39->keybit);
 FUNC_0(VAR_6, VAR_39->keybit);
 FUNC_0(VAR_5, VAR_39->keybit);

 FUNC_28(VAR_34, VAR_38);

 if (VAR_38->flags & VAR_23) {
  VAR_42 = FUNC_19(VAR_39);
  if (VAR_42)
   goto err_free_dma;
 }

 VAR_42 = FUNC_4(VAR_39);
 if (VAR_42) {
  FUNC_1(&VAR_36->dev,
   "Failed to register input device, error %d\n",
   VAR_42);
  goto err_stop_io;
 }

 return 0;

err_stop_io:
 if (VAR_38->flags & VAR_23)
  FUNC_17(VAR_38->input);
err_free_dma:
 FUNC_23(VAR_36, VAR_24, VAR_38->data,
     VAR_38->urb->transfer_dma);
err_free_urb:
 FUNC_24(VAR_38->urb);
err_free_mem:
 FUNC_3(VAR_39);
 FUNC_8(VAR_38);
 FUNC_28(VAR_34, ((void*)0));

 return VAR_42;
}
