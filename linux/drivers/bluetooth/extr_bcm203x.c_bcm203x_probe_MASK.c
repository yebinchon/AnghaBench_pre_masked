
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct firmware {struct usb_device_id const* size; struct usb_interface* data; } ;
struct bcm203x_data {int work; scalar_t__ fw_sent; struct usb_device_id const* fw_size; int buffer; int urb; int fw_data; int state; struct usb_device* udev; } ;
struct TYPE_3__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct bcm203x_data* FUNC_3 (int *,int,int ) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct usb_interface*,struct usb_device_id const*,int ) ;
 int FUNC_8 (int ,struct usb_device_id const*,int) ;
 int FUNC_9 (int ,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_10 (struct firmware const*) ;
 scalar_t__ FUNC_11 (struct firmware const**,char*,int *) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct usb_device*,int ,int ,struct usb_device_id const*,int ,struct bcm203x_data*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct usb_interface*,struct bcm203x_data*) ;
 int FUNC_17 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 const struct firmware *VAR_11;
 struct usb_device *VAR_12 = FUNC_4(VAR_9);
 struct bcm203x_data *VAR_13;
 int VAR_14;

 FUNC_0("intf %p id %p", VAR_9, VAR_10);

 if (VAR_9->cur_altsetting->desc.bInterfaceNumber != 0)
  return -VAR_3;

 VAR_13 = FUNC_3(&VAR_9->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->udev = VAR_12;
 VAR_13->state = VAR_0;

 VAR_13->urb = FUNC_13(0, VAR_5);
 if (!VAR_13->urb)
  return -VAR_4;

 if (FUNC_11(&VAR_11, "BCM2033-MD.hex", &VAR_12->dev) < 0) {
  FUNC_1("Mini driver request failed");
  FUNC_15(VAR_13->urb);
  return -VAR_2;
 }

 FUNC_0("minidrv data %p size %zu", VAR_11->data, VAR_11->size);

 VAR_14 = FUNC_8(VAR_8, VAR_11->size, 4096);

 VAR_13->buffer = FUNC_6(VAR_14, VAR_5);
 if (!VAR_13->buffer) {
  FUNC_1("Can't allocate memory for mini driver");
  FUNC_10(VAR_11);
  FUNC_15(VAR_13->urb);
  return -VAR_4;
 }

 FUNC_9(VAR_13->buffer, VAR_11->data, VAR_11->size);

 FUNC_14(VAR_13->urb, VAR_12, FUNC_17(VAR_12, VAR_1),
   VAR_13->buffer, VAR_11->size, VAR_6, VAR_13);

 FUNC_10(VAR_11);

 if (FUNC_11(&VAR_11, "BCM2033-FW.bin", &VAR_12->dev) < 0) {
  FUNC_1("Firmware request failed");
  FUNC_15(VAR_13->urb);
  FUNC_5(VAR_13->buffer);
  return -VAR_2;
 }

 FUNC_0("firmware data %p size %zu", VAR_11->data, VAR_11->size);

 VAR_13->fw_data = FUNC_7(VAR_11->data, VAR_11->size, VAR_5);
 if (!VAR_13->fw_data) {
  FUNC_1("Can't allocate memory for firmware image");
  FUNC_10(VAR_11);
  FUNC_15(VAR_13->urb);
  FUNC_5(VAR_13->buffer);
  return -VAR_4;
 }

 VAR_13->fw_size = VAR_11->size;
 VAR_13->fw_sent = 0;

 FUNC_10(VAR_11);

 FUNC_2(&VAR_13->work, VAR_7);

 FUNC_16(VAR_9, VAR_13);


 FUNC_12(&VAR_13->work);

 return 0;
}
