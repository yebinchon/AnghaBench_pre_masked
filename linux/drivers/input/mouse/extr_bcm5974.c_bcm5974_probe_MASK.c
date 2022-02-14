
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {int version; } ;
struct input_dev {char* name; int close; int open; TYPE_1__ dev; TYPE_2__ id; int phys; } ;
struct bcm5974_config {scalar_t__ tp_type; int bt_datalen; int tp_datalen; int caps; int tp_ep; int bt_ep; } ;
struct bcm5974 {TYPE_3__* bt_urb; TYPE_3__* tp_urb; void* bt_data; struct bcm5974_config cfg; struct usb_device* udev; void* tp_data; struct input_dev* input; int phys; int pm_mutex; struct usb_interface* intf; } ;
struct TYPE_7__ {int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct bcm5974_config* FUNC_0 (struct usb_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,struct bcm5974*) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct bcm5974*) ;
 struct bcm5974* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct input_dev*,struct bcm5974_config const*) ;
 int FUNC_11 (int ,char*,int) ;
 void* FUNC_12 (struct usb_device*,int ,int ,int *) ;
 void* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_3__*,struct usb_device*,int ,void*,int ,int ,struct bcm5974*,int) ;
 int FUNC_15 (struct usb_device*,int ,void*,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct usb_device*,int ,int) ;
 int FUNC_18 (struct usb_device*,int ) ;
 int FUNC_19 (struct usb_interface*,struct bcm5974*) ;
 int FUNC_20 (struct usb_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_7,
    const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_6(VAR_7);
 const struct bcm5974_config *VAR_10;
 struct bcm5974 *VAR_11;
 struct input_dev *VAR_12;
 int VAR_13 = -VAR_0;


 VAR_10 = FUNC_0(VAR_9);


 VAR_11 = FUNC_8(sizeof(struct bcm5974), VAR_1);
 VAR_12 = FUNC_2();
 if (!VAR_11 || !VAR_12) {
  FUNC_1(&VAR_7->dev, "out of memory\n");
  goto err_free_devs;
 }

 VAR_11->udev = VAR_9;
 VAR_11->intf = VAR_7;
 VAR_11->input = VAR_12;
 VAR_11->cfg = *VAR_10;
 FUNC_9(&VAR_11->pm_mutex);


 if (VAR_10->tp_type == VAR_2) {
  VAR_11->bt_urb = FUNC_13(0, VAR_1);
  if (!VAR_11->bt_urb)
   goto err_free_devs;
 }

 VAR_11->tp_urb = FUNC_13(0, VAR_1);
 if (!VAR_11->tp_urb)
  goto err_free_bt_urb;

 if (VAR_11->bt_urb) {
  VAR_11->bt_data = FUNC_12(VAR_11->udev,
       VAR_11->cfg.bt_datalen, VAR_1,
       &VAR_11->bt_urb->transfer_dma);
  if (!VAR_11->bt_data)
   goto err_free_urb;
 }

 VAR_11->tp_data = FUNC_12(VAR_11->udev,
       VAR_11->cfg.tp_datalen, VAR_1,
       &VAR_11->tp_urb->transfer_dma);
 if (!VAR_11->tp_data)
  goto err_free_bt_buffer;

 if (VAR_11->bt_urb)
  FUNC_14(VAR_11->bt_urb, VAR_9,
     FUNC_18(VAR_9, VAR_10->bt_ep),
     VAR_11->bt_data, VAR_11->cfg.bt_datalen,
     VAR_4, VAR_11, 1);

 FUNC_14(VAR_11->tp_urb, VAR_9,
    FUNC_18(VAR_9, VAR_10->tp_ep),
    VAR_11->tp_data, VAR_11->cfg.tp_datalen,
    VAR_5, VAR_11, 1);


 FUNC_17(VAR_9, VAR_11->phys, sizeof(VAR_11->phys));
 FUNC_11(VAR_11->phys, "/input0", sizeof(VAR_11->phys));

 VAR_12->name = "bcm5974";
 VAR_12->phys = VAR_11->phys;
 FUNC_20(VAR_11->udev, &VAR_12->id);

 VAR_12->id.version = VAR_10->caps;
 VAR_12->dev.parent = &VAR_7->dev;

 FUNC_5(VAR_12, VAR_11);

 VAR_12->open = VAR_6;
 VAR_12->close = VAR_3;

 FUNC_10(VAR_12, VAR_10);

 VAR_13 = FUNC_4(VAR_11->input);
 if (VAR_13)
  goto err_free_buffer;


 FUNC_19(VAR_7, VAR_11);

 return 0;

err_free_buffer:
 FUNC_15(VAR_11->udev, VAR_11->cfg.tp_datalen,
  VAR_11->tp_data, VAR_11->tp_urb->transfer_dma);
err_free_bt_buffer:
 if (VAR_11->bt_urb)
  FUNC_15(VAR_11->udev, VAR_11->cfg.bt_datalen,
      VAR_11->bt_data, VAR_11->bt_urb->transfer_dma);
err_free_urb:
 FUNC_16(VAR_11->tp_urb);
err_free_bt_urb:
 FUNC_16(VAR_11->bt_urb);
err_free_devs:
 FUNC_19(VAR_7, ((void*)0));
 FUNC_3(VAR_12);
 FUNC_7(VAR_11);
 return VAR_13;
}
