
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int quirks; int defer_initialization; int hotplug_worker_initialized; struct hid_device* hdev; scalar_t__ hw_version; scalar_t__ fw_version; scalar_t__ ds4_bt_poll_interval; int ds4_dongle_state; int hotplug_worker; } ;
struct hid_input {int dummy; } ;
struct hid_device {int dev; int quirks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
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
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_21 ;
 int FUNC_3 (struct sony_sc*) ;
 int FUNC_4 (struct sony_sc*) ;
 int VAR_22 ;
 int FUNC_5 (struct hid_device*,char*,...) ;
 struct sony_sc* FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*) ;
 int FUNC_8 (struct hid_device*) ;
 int FUNC_9 (struct hid_device*,char*,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_10 (struct hid_device*) ;
 int FUNC_11 (struct hid_device*) ;
 int FUNC_12 (struct sony_sc*) ;
 int FUNC_13 (struct sony_sc*,int) ;
 int FUNC_14 (struct sony_sc*) ;
 int FUNC_15 (struct sony_sc*) ;
 int FUNC_16 (struct sony_sc*) ;
 int FUNC_17 (struct sony_sc*,int ) ;
 int FUNC_18 (struct sony_sc*) ;
 int FUNC_19 (struct sony_sc*) ;
 int FUNC_20 (struct sony_sc*,int,int,int,int,int,int) ;
 int FUNC_21 (struct sony_sc*) ;
 int FUNC_22 (struct sony_sc*) ;
 int FUNC_23 (struct sony_sc*) ;

__attribute__((used)) static int FUNC_24(struct hid_device *VAR_25,
     struct hid_input *VAR_26)
{
 struct sony_sc *VAR_27 = FUNC_6(VAR_25);
 int VAR_28;
 int VAR_29;

 VAR_29 = FUNC_23(VAR_27);
 if (VAR_29 < 0) {
  FUNC_5(VAR_25, "failed to allocate the device id\n");
  goto err_stop;
 }

 VAR_29 = VAR_28 = FUNC_15(VAR_27);
 if (VAR_29 < 0)
  goto err_stop;

 VAR_29 = FUNC_12(VAR_27);
 if (VAR_29 < 0) {
  FUNC_5(VAR_25, "failed to allocate the output report buffer\n");
  goto err_stop;
 }

 if (VAR_27->quirks & VAR_9) {
  VAR_25->quirks |= VAR_5;
  VAR_25->quirks |= VAR_6;
  VAR_27->defer_initialization = 1;

  VAR_29 = FUNC_11(VAR_25);
  if (VAR_29 < 0) {
   FUNC_5(VAR_25, "Failed to set controller into operational mode\n");
   goto err_stop;
  }

  FUNC_17(VAR_27, VAR_24);
 } else if (VAR_27->quirks & VAR_8) {




  VAR_25->quirks |= VAR_5;

  VAR_29 = FUNC_10(VAR_25);
  if (VAR_29 < 0) {
   FUNC_5(VAR_25, "Failed to set controller into operational mode\n");
   goto err_stop;
  }

  FUNC_17(VAR_27, VAR_24);
 } else if (VAR_27->quirks & VAR_14) {






  VAR_25->quirks |= VAR_5;
  VAR_25->quirks |= VAR_6;
  VAR_27->defer_initialization = 1;

  VAR_29 = FUNC_11(VAR_25);
  if (VAR_29 < 0) {
   FUNC_5(VAR_25, "Failed to set controller into operational mode\n");
   goto err_stop;
  }

  VAR_29 = FUNC_19(VAR_27);
  if (VAR_29) {
   FUNC_5(VAR_27->hdev,
   "Unable to initialize motion sensors: %d\n", VAR_29);
   goto err_stop;
  }

  FUNC_17(VAR_27, VAR_24);
 } else if (VAR_27->quirks & VAR_13) {




  VAR_25->quirks |= VAR_5;

  VAR_29 = FUNC_10(VAR_25);
  if (VAR_29 < 0) {
   FUNC_5(VAR_25, "Failed to set controller into operational mode\n");
   goto err_stop;
  }

  VAR_29 = FUNC_19(VAR_27);
  if (VAR_29) {
   FUNC_5(VAR_27->hdev,
   "Unable to initialize motion sensors: %d\n", VAR_29);
   goto err_stop;
  }

  FUNC_17(VAR_27, VAR_24);
 } else if (VAR_27->quirks & VAR_2) {
  VAR_29 = FUNC_3(VAR_27);
  if (VAR_29 < 0) {
   FUNC_5(VAR_25, "Failed to get calibration data from Dualshock 4\n");
   goto err_stop;
  }

  VAR_29 = FUNC_4(VAR_27);
  if (VAR_29 < 0) {
   FUNC_5(VAR_27->hdev, "Failed to get version data from Dualshock 4\n");
   goto err_stop;
  }

  VAR_29 = FUNC_1(&VAR_27->hdev->dev, &VAR_19);
  if (VAR_29) {

   VAR_27->fw_version = 0;
   VAR_27->hw_version = 0;
   FUNC_5(VAR_27->hdev, "can't create sysfs firmware_version attribute err: %d\n", VAR_29);
   goto err_stop;
  }

  VAR_29 = FUNC_1(&VAR_27->hdev->dev, &VAR_20);
  if (VAR_29) {
   VAR_27->hw_version = 0;
   FUNC_5(VAR_27->hdev, "can't create sysfs hardware_version attribute err: %d\n", VAR_29);
   goto err_stop;
  }





  VAR_29 = FUNC_20(VAR_27, 2, 1920, 942, 0, 0, 0);
  if (VAR_29) {
   FUNC_5(VAR_27->hdev,
   "Unable to initialize multi-touch slots: %d\n",
   VAR_29);
   goto err_stop;
  }

  VAR_29 = FUNC_19(VAR_27);
  if (VAR_29) {
   FUNC_5(VAR_27->hdev,
   "Unable to initialize motion sensors: %d\n", VAR_29);
   goto err_stop;
  }

  if (VAR_27->quirks & VAR_3) {
   VAR_27->ds4_bt_poll_interval = VAR_1;
   VAR_29 = FUNC_1(&VAR_27->hdev->dev, &VAR_18);
   if (VAR_29)
    FUNC_9(VAR_27->hdev,
     "can't create sysfs bt_poll_interval attribute err: %d\n",
     VAR_29);
  }

  if (VAR_27->quirks & VAR_4) {
   FUNC_0(&VAR_27->hotplug_worker, VAR_21);
   VAR_27->hotplug_worker_initialized = 1;
   VAR_27->ds4_dongle_state = VAR_0;
  }

  FUNC_17(VAR_27, VAR_22);
 } else if (VAR_27->quirks & VAR_12) {




  VAR_29 = FUNC_20(VAR_27, 2,
   VAR_10, VAR_11, 15, 15, 1);
  if (VAR_29) {
   FUNC_5(VAR_27->hdev,
   "Unable to initialize multi-touch slots: %d\n",
   VAR_29);
   goto err_stop;
  }

 } else if (VAR_27->quirks & VAR_7) {
  FUNC_17(VAR_27, VAR_23);
 } else {
  VAR_29 = 0;
 }

 if (VAR_27->quirks & VAR_17) {
  VAR_29 = FUNC_18(VAR_27);
  if (VAR_29 < 0)
   goto err_stop;
 }

 if (VAR_27->quirks & VAR_15) {
  VAR_29 = FUNC_13(VAR_27, VAR_28);
  if (VAR_29 < 0)
   goto err_stop;


  VAR_29 = FUNC_8(VAR_25);
  if (VAR_29 < 0) {
   FUNC_5(VAR_25, "hw open failed\n");
   goto err_stop;
  }
 }

 if (VAR_27->quirks & VAR_16) {
  VAR_29 = FUNC_16(VAR_27);
  if (VAR_29 < 0)
   goto err_close;
 }

 return 0;
err_close:
 FUNC_7(VAR_25);
err_stop:




 if (VAR_27->ds4_bt_poll_interval)
  FUNC_2(&VAR_27->hdev->dev, &VAR_18);
 if (VAR_27->fw_version)
  FUNC_2(&VAR_27->hdev->dev, &VAR_19);
 if (VAR_27->hw_version)
  FUNC_2(&VAR_27->hdev->dev, &VAR_20);
 FUNC_14(VAR_27);
 FUNC_22(VAR_27);
 FUNC_21(VAR_27);
 return VAR_29;
}
