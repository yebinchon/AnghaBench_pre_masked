
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct ims_pcu {int bootloader_mode; int data_intf; int ctrl_intf; int async_firmware_done; int cmd_done; int cmd_mutex; struct usb_device* udev; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct ims_pcu*) ;
 int FUNC_2 (struct ims_pcu*) ;
 int VAR_4 ;
 int FUNC_3 (struct ims_pcu*) ;
 int FUNC_4 (struct ims_pcu*) ;
 int FUNC_5 (struct ims_pcu*) ;
 int FUNC_6 (struct usb_interface*,struct ims_pcu*) ;
 int FUNC_7 (struct ims_pcu*) ;
 int FUNC_8 (struct ims_pcu*) ;
 int FUNC_9 (int *) ;
 struct usb_device* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (struct ims_pcu*) ;
 struct ims_pcu* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int ,struct ims_pcu*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int ,struct ims_pcu*) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_5,
    const struct usb_device_id *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_10(VAR_5);
 struct ims_pcu *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_12(sizeof(struct ims_pcu), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = &VAR_5->dev;
 VAR_8->udev = VAR_7;
 VAR_8->bootloader_mode = VAR_6->driver_info == VAR_2;
 FUNC_13(&VAR_8->cmd_mutex);
 FUNC_9(&VAR_8->cmd_done);
 FUNC_9(&VAR_8->async_firmware_done);

 VAR_9 = FUNC_6(VAR_5, VAR_8);
 if (VAR_9)
  goto err_free_mem;

 VAR_9 = FUNC_16(&VAR_4,
        VAR_8->data_intf, VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev,
   "Unable to claim corresponding data interface: %d\n",
   VAR_9);
  goto err_free_mem;
 }

 FUNC_18(VAR_8->ctrl_intf, VAR_8);
 FUNC_18(VAR_8->data_intf, VAR_8);

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  goto err_unclaim_intf;

 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9)
  goto err_free_buffers;

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9)
  goto err_stop_io;

 VAR_9 = FUNC_14(&VAR_5->dev.kobj, &VAR_3);
 if (VAR_9)
  goto err_stop_io;

 VAR_9 = VAR_8->bootloader_mode ?
   FUNC_4(VAR_8) :
   FUNC_3(VAR_8);
 if (VAR_9)
  goto err_remove_sysfs;

 return 0;

err_remove_sysfs:
 FUNC_15(&VAR_5->dev.kobj, &VAR_3);
err_stop_io:
 FUNC_8(VAR_8);
err_free_buffers:
 FUNC_2(VAR_8);
err_unclaim_intf:
 FUNC_17(&VAR_4, VAR_8->data_intf);
err_free_mem:
 FUNC_11(VAR_8);
 return VAR_9;
}
