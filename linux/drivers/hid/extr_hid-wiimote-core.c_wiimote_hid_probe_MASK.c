
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiimote_data {int accel; int ir; TYPE_1__* hdev; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {int dev; int quirks; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,int ) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*,char*) ;
 int FUNC_8 (struct hid_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct wiimote_data*) ;
 int FUNC_11 (struct wiimote_data*) ;
 struct wiimote_data* FUNC_12 (struct hid_device*) ;
 int FUNC_13 (struct wiimote_data*) ;
 int FUNC_14 (struct wiimote_data*) ;

__attribute__((used)) static int FUNC_15(struct hid_device *VAR_5,
    const struct hid_device_id *VAR_6)
{
 struct wiimote_data *VAR_7;
 int VAR_8;

 VAR_5->quirks |= VAR_2;

 VAR_7 = FUNC_12(VAR_5);
 if (!VAR_7) {
  FUNC_2(VAR_5, "Can't alloc device\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_5, "HID parse failed\n");
  goto err;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_1);
 if (VAR_8) {
  FUNC_2(VAR_5, "HW start failed\n");
  goto err;
 }

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_5, "cannot start hardware I/O\n");
  goto err_stop;
 }

 VAR_8 = FUNC_0(&VAR_5->dev, &VAR_4);
 if (VAR_8) {
  FUNC_2(VAR_5, "cannot create sysfs attribute\n");
  goto err_close;
 }

 VAR_8 = FUNC_0(&VAR_5->dev, &VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_5, "cannot create sysfs attribute\n");
  goto err_ext;
 }

 VAR_8 = FUNC_11(VAR_7);
 if (VAR_8)
  goto err_free;

 FUNC_7(VAR_5, "New device registered\n");


 FUNC_14(VAR_7);

 return 0;

err_free:
 FUNC_13(VAR_7);
 return VAR_8;

err_ext:
 FUNC_1(&VAR_7->hdev->dev, &VAR_4);
err_close:
 FUNC_3(VAR_5);
err_stop:
 FUNC_6(VAR_5);
err:
 FUNC_9(VAR_7->ir);
 FUNC_9(VAR_7->accel);
 FUNC_10(VAR_7);
 return VAR_8;
}
