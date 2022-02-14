
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct magicmouse_sc {int input; int quirks; int scroll_accel; } ;
struct hid_report {int size; } ;
struct hid_device_id {scalar_t__ vendor; scalar_t__ product; int driver_data; } ;
struct hid_device {scalar_t__ type; int dev; } ;
typedef int feature_mt_trackpad2_usb ;
typedef int feature_mt_trackpad2_bt ;
typedef int feature_mt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 struct magicmouse_sc* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*,...) ;
 int FUNC_2 (struct hid_device*,int,int*,int,int ,int ) ;
 int FUNC_3 (struct hid_device*,int ) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*) ;
 struct hid_report* FUNC_6 (struct hid_device*,int ,int ,int ) ;
 int FUNC_7 (struct hid_device*,struct magicmouse_sc*) ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (int const*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct hid_device *VAR_18,
 const struct hid_device_id *VAR_19)
{
 const u8 *VAR_20;
 const u8 VAR_21[] = { 0xD7, 0x01 };
 const u8 VAR_22[] = { 0x02, 0x01 };
 const u8 VAR_23[] = { 0xF1, 0x02, 0x01 };
 u8 *VAR_24;
 struct magicmouse_sc *VAR_25;
 struct hid_report *VAR_26;
 int VAR_27;
 int VAR_28;

 if (VAR_19->vendor == VAR_17 &&
     VAR_19->product == VAR_16 &&
     VAR_18->type != VAR_9)
  return 0;

 VAR_25 = FUNC_0(&VAR_18->dev, sizeof(*VAR_25), VAR_4);
 if (VAR_25 == ((void*)0)) {
  FUNC_1(VAR_18, "can't alloc magicmouse descriptor\n");
  return -VAR_3;
 }

 VAR_25->scroll_accel = VAR_11;

 VAR_25->quirks = VAR_19->driver_data;
 FUNC_7(VAR_18, VAR_25);

 VAR_27 = FUNC_5(VAR_18);
 if (VAR_27) {
  FUNC_1(VAR_18, "magicmouse hid parse failed\n");
  return VAR_27;
 }

 VAR_27 = FUNC_3(VAR_18, VAR_5);
 if (VAR_27) {
  FUNC_1(VAR_18, "magicmouse hw start failed\n");
  return VAR_27;
 }

 if (!VAR_25->input) {
  FUNC_1(VAR_18, "magicmouse input not registered\n");
  VAR_27 = -VAR_3;
  goto err_stop_hw;
 }

 if (VAR_19->product == VAR_15)
  VAR_26 = FUNC_6(VAR_18, VAR_7,
   VAR_10, 0);
 else if (VAR_19->product == VAR_16) {
  if (VAR_19->vendor == VAR_0)
   VAR_26 = FUNC_6(VAR_18, VAR_7,
    VAR_12, 0);
  else
   VAR_26 = FUNC_6(VAR_18, VAR_7,
    VAR_13, 0);
 } else {
  VAR_26 = FUNC_6(VAR_18, VAR_7,
   VAR_14, 0);
  VAR_26 = FUNC_6(VAR_18, VAR_7,
   VAR_1, 0);
 }

 if (!VAR_26) {
  FUNC_1(VAR_18, "unable to register touch report\n");
  VAR_27 = -VAR_3;
  goto err_stop_hw;
 }
 VAR_26->size = 6;

 if (VAR_19->product == VAR_16) {
  if (VAR_19->vendor == VAR_0) {
   VAR_28 = sizeof(VAR_23);
   VAR_20 = VAR_23;
  } else {
   VAR_28 = sizeof(VAR_22);
   VAR_20 = VAR_22;
  }
 } else {
  VAR_28 = sizeof(VAR_21);
  VAR_20 = VAR_21;
 }

 VAR_24 = FUNC_9(VAR_20, VAR_28, VAR_4);
 if (!VAR_24) {
  VAR_27 = -VAR_3;
  goto err_stop_hw;
 }
 VAR_27 = FUNC_2(VAR_18, VAR_24[0], VAR_24, VAR_28,
    VAR_6, VAR_8);
 FUNC_8(VAR_24);
 if (VAR_27 != -VAR_2 && VAR_27 != VAR_28) {
  FUNC_1(VAR_18, "unable to request touch data (%d)\n", VAR_27);
  goto err_stop_hw;
 }

 return 0;
err_stop_hw:
 FUNC_4(VAR_18);
 return VAR_27;
}
