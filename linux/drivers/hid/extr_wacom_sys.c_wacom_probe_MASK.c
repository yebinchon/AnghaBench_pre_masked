
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inputmode; } ;
struct wacom_features {scalar_t__ hid_type; scalar_t__ check_for_hid_type; } ;
struct wacom_wac {int mode_report; TYPE_1__ hid_data; int pen_fifo; struct wacom_features features; } ;
struct wacom {int mode_change_work; int remote_work; int battery_work; int wireless_work; int init_work; int lock; struct usb_interface* intf; struct usb_device* usbdev; struct wacom_wac wacom_wac; struct hid_device* hdev; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct hid_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {int parent; } ;
struct hid_device {scalar_t__ type; scalar_t__ bus; TYPE_2__ dev; int quirks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 struct wacom* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct hid_device*,char*) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*,struct wacom*) ;
 int FUNC_7 (struct hid_device*,char*,int) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 struct usb_interface* FUNC_11 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (struct wacom*,int) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_13(struct hid_device *VAR_14,
  const struct hid_device_id *VAR_15)
{
 struct usb_interface *VAR_16 = FUNC_11(VAR_14->dev.parent);
 struct usb_device *VAR_17 = FUNC_8(VAR_16);
 struct wacom *VAR_18;
 struct wacom_wac *VAR_19;
 struct wacom_features *VAR_20;
 int VAR_21;

 if (!VAR_15->driver_data)
  return -VAR_1;

 VAR_14->quirks |= VAR_6;


 VAR_14->quirks &= ~VAR_5;

 VAR_18 = FUNC_3(&VAR_14->dev, sizeof(struct wacom), VAR_4);
 if (!VAR_18)
  return -VAR_3;

 FUNC_6(VAR_14, VAR_18);
 VAR_18->hdev = VAR_14;

 VAR_19 = &VAR_18->wacom_wac;
 VAR_19->features = *((struct wacom_features *)VAR_15->driver_data);
 VAR_20 = &VAR_19->features;

 if (VAR_20->check_for_hid_type && VAR_20->hid_type != VAR_14->type)
  return -VAR_2;

 VAR_21 = FUNC_9(&VAR_19->pen_fifo, VAR_7, VAR_4);
 if (VAR_21)
  return VAR_21;

 VAR_19->hid_data.inputmode = -1;
 VAR_19->mode_report = -1;

 VAR_18->usbdev = VAR_17;
 VAR_18->intf = VAR_16;
 FUNC_10(&VAR_18->lock);
 FUNC_0(&VAR_18->init_work, VAR_10);
 FUNC_1(&VAR_18->wireless_work, VAR_13);
 FUNC_1(&VAR_18->battery_work, VAR_9);
 FUNC_1(&VAR_18->remote_work, VAR_12);
 FUNC_1(&VAR_18->mode_change_work, VAR_11);


 VAR_21 = FUNC_5(VAR_14);
 if (VAR_21) {
  FUNC_4(VAR_14, "parse failed\n");
  return VAR_21;
 }

 VAR_21 = FUNC_12(VAR_18, 0);
 if (VAR_21)
  return VAR_21;

 if (VAR_14->bus == VAR_0) {
  VAR_21 = FUNC_2(&VAR_14->dev, &VAR_8);
  if (VAR_21)
   FUNC_7(VAR_14,
     "can't create sysfs speed attribute err: %d\n",
     VAR_21);
 }

 return 0;
}
