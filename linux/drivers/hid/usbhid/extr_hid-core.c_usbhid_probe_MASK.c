
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usbhid_device {int lock; int io_retry; int reset_work; int wait; int ifnum; struct usb_interface* intf; struct hid_device* hid; } ;
struct usb_interface {TYPE_4__* altsetting; struct usb_host_interface* cur_altsetting; int dev; } ;
struct TYPE_12__ {unsigned int bNumEndpoints; scalar_t__ bInterfaceProtocol; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_6__ desc; TYPE_1__* endpoint; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_11__ {int iSerialNumber; int idProduct; int idVendor; int bcdDevice; } ;
struct usb_device {char* product; TYPE_5__ descriptor; scalar_t__ manufacturer; } ;
struct TYPE_8__ {int * parent; } ;
struct hid_device {int vendor; int product; int version; struct usbhid_device* driver_data; scalar_t__* uniq; scalar_t__* phys; scalar_t__* name; int type; int bus; TYPE_2__ dev; int hiddev_report_event; int hiddev_hid_event; int hiddev_disconnect; int hiddev_connect; int ff_init; int * ll_driver; } ;
struct TYPE_9__ {int bInterfaceNumber; } ;
struct TYPE_10__ {TYPE_3__ desc; } ;
struct TYPE_7__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct hid_device*) ;
 struct hid_device* FUNC_5 () ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct usb_interface*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usbhid_device*) ;
 struct usbhid_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__*,int,char*,int,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__*,char*,int) ;
 int FUNC_16 (scalar_t__*,scalar_t__,int) ;
 size_t FUNC_17 (scalar_t__*) ;
 int FUNC_18 (int *,int ,int ) ;
 scalar_t__ FUNC_19 (int *) ;
 int VAR_14 ;
 int FUNC_20 (struct usb_device*,scalar_t__*,int) ;
 int FUNC_21 (struct usb_interface*,struct hid_device*) ;
 scalar_t__ FUNC_22 (struct usb_device*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_23(struct usb_interface *VAR_15, const struct usb_device_id *VAR_16)
{
 struct usb_host_interface *VAR_17 = VAR_15->cur_altsetting;
 struct usb_device *VAR_18 = FUNC_9(VAR_15);
 struct usbhid_device *VAR_19;
 struct hid_device *VAR_20;
 unsigned int VAR_21, VAR_22 = 0;
 size_t VAR_23;
 int VAR_24;

 FUNC_3("HID probe called for ifnum %d\n",
   VAR_15->altsetting->desc.bInterfaceNumber);

 for (VAR_21 = 0; VAR_21 < VAR_17->desc.bNumEndpoints; VAR_21++)
  if (FUNC_19(&VAR_17->endpoint[VAR_21].desc))
   VAR_22++;
 if (!VAR_22) {
  FUNC_7(VAR_15, "couldn't find an input interrupt endpoint\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_5();
 if (FUNC_1(VAR_20))
  return FUNC_2(VAR_20);

 FUNC_21(VAR_15, VAR_20);
 VAR_20->ll_driver = &VAR_14;
 VAR_20->ff_init = VAR_7;






 VAR_20->dev.parent = &VAR_15->dev;
 VAR_20->bus = VAR_0;
 VAR_20->vendor = FUNC_12(VAR_18->descriptor.idVendor);
 VAR_20->product = FUNC_12(VAR_18->descriptor.idProduct);
 VAR_20->version = FUNC_12(VAR_18->descriptor.bcdDevice);
 VAR_20->name[0] = 0;
 if (VAR_15->cur_altsetting->desc.bInterfaceProtocol ==
   VAR_6)
  VAR_20->type = VAR_4;
 else if (VAR_15->cur_altsetting->desc.bInterfaceProtocol == 0)
  VAR_20->type = VAR_5;

 if (VAR_18->manufacturer)
  FUNC_16(VAR_20->name, VAR_18->manufacturer, sizeof(VAR_20->name));

 if (VAR_18->product) {
  if (VAR_18->manufacturer)
   FUNC_15(VAR_20->name, " ", sizeof(VAR_20->name));
  FUNC_15(VAR_20->name, VAR_18->product, sizeof(VAR_20->name));
 }

 if (!FUNC_17(VAR_20->name))
  FUNC_13(VAR_20->name, sizeof(VAR_20->name), "HID %04x:%04x",
    FUNC_12(VAR_18->descriptor.idVendor),
    FUNC_12(VAR_18->descriptor.idProduct));

 FUNC_20(VAR_18, VAR_20->phys, sizeof(VAR_20->phys));
 FUNC_15(VAR_20->phys, "/input", sizeof(VAR_20->phys));
 VAR_23 = FUNC_17(VAR_20->phys);
 if (VAR_23 < sizeof(VAR_20->phys) - 1)
  FUNC_13(VAR_20->phys + VAR_23, sizeof(VAR_20->phys) - VAR_23,
    "%d", VAR_15->altsetting[0].desc.bInterfaceNumber);

 if (FUNC_22(VAR_18, VAR_18->descriptor.iSerialNumber, VAR_20->uniq, 64) <= 0)
  VAR_20->uniq[0] = 0;

 VAR_19 = FUNC_11(sizeof(*VAR_19), VAR_3);
 if (VAR_19 == ((void*)0)) {
  VAR_24 = -VAR_2;
  goto err;
 }

 VAR_20->driver_data = VAR_19;
 VAR_19->hid = VAR_20;
 VAR_19->intf = VAR_15;
 VAR_19->ifnum = VAR_17->desc.bInterfaceNumber;

 FUNC_8(&VAR_19->wait);
 FUNC_0(&VAR_19->reset_work, VAR_8);
 FUNC_18(&VAR_19->io_retry, VAR_9, 0);
 FUNC_14(&VAR_19->lock);

 VAR_24 = FUNC_4(VAR_20);
 if (VAR_24) {
  if (VAR_24 != -VAR_1)
   FUNC_7(VAR_15, "can't add hid device: %d\n", VAR_24);
  goto err_free;
 }

 return 0;
err_free:
 FUNC_10(VAR_19);
err:
 FUNC_6(VAR_20);
 return VAR_24;
}
