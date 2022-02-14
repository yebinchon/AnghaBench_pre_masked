
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_8__ {int * funcs; void* max_height; void* min_height; void* max_width; void* min_width; } ;
struct drm_device {TYPE_4__ mode_config; struct gm12u320_device* dev_private; } ;
struct TYPE_7__ {int waitq; int lock; int work; } ;
struct gm12u320_device {int conn; int pipe; struct drm_device dev; TYPE_3__ fb_update; int udev; } ;
struct TYPE_5__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_device*,int *,int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*,int *,int *,int ,int ,int ,int *) ;
 int FUNC_9 (struct gm12u320_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct gm12u320_device*) ;
 int FUNC_11 (struct gm12u320_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct usb_interface*) ;
 int FUNC_14 (struct gm12u320_device*) ;
 struct gm12u320_device* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct usb_interface*,struct drm_device*) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_11,
         const struct usb_device_id *VAR_12)
{
 struct gm12u320_device *VAR_13;
 struct drm_device *VAR_14;
 int VAR_15;





 if (VAR_11->cur_altsetting->desc.bInterfaceNumber != 0)
  return -VAR_0;

 VAR_13 = FUNC_15(sizeof(*VAR_13), VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_13->udev = FUNC_13(VAR_11);
 FUNC_1(&VAR_13->fb_update.work, VAR_6);
 FUNC_16(&VAR_13->fb_update.lock);
 FUNC_12(&VAR_13->fb_update.waitq);

 VAR_14 = &VAR_13->dev;
 VAR_15 = FUNC_2(VAR_14, &VAR_5, &VAR_11->dev);
 if (VAR_15) {
  FUNC_14(VAR_13);
  return VAR_15;
 }
 VAR_14->dev_private = VAR_13;

 FUNC_6(VAR_14);
 VAR_14->mode_config.min_width = VAR_4;
 VAR_14->mode_config.max_width = VAR_4;
 VAR_14->mode_config.min_height = VAR_3;
 VAR_14->mode_config.max_height = VAR_3;
 VAR_14->mode_config.funcs = &VAR_7;

 VAR_15 = FUNC_11(VAR_13);
 if (VAR_15)
  goto err_put;

 VAR_15 = FUNC_10(VAR_13);
 if (VAR_15)
  goto err_put;

 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15)
  goto err_put;

 VAR_15 = FUNC_8(&VAR_13->dev,
        &VAR_13->pipe,
        &VAR_9,
        VAR_8,
        FUNC_0(VAR_8),
        VAR_10,
        &VAR_13->conn);
 if (VAR_15)
  goto err_put;

 FUNC_7(VAR_14);

 FUNC_17(VAR_11, VAR_14);
 VAR_15 = FUNC_4(VAR_14, 0);
 if (VAR_15)
  goto err_put;

 FUNC_5(VAR_14, 0);

 return 0;

err_put:
 FUNC_3(VAR_14);
 return VAR_15;
}
