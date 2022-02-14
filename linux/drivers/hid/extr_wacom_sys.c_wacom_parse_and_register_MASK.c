
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ pktlen; scalar_t__ type; int device_type; int quirks; } ;
struct wacom_wac {struct wacom_features features; } ;
struct wacom {int resources; int init_work; struct wacom_wac wacom_wac; struct hid_device* hdev; } ;
struct hid_device {int dev; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct wacom*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,char*) ;
 int FUNC_3 (int *,struct wacom*) ;
 int FUNC_4 (int *,struct wacom*,int ) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*,unsigned int) ;
 int FUNC_8 (struct hid_device*) ;
 int FUNC_9 (struct hid_device*) ;
 int FUNC_10 (struct wacom*) ;
 int FUNC_11 (struct wacom_features*) ;
 scalar_t__ FUNC_12 (struct hid_device*) ;
 int FUNC_13 (struct wacom*) ;
 int FUNC_14 (struct wacom*) ;
 int FUNC_15 (struct wacom*) ;
 int FUNC_16 (struct wacom*) ;
 int FUNC_17 (struct wacom*) ;
 int FUNC_18 (struct wacom*) ;
 int FUNC_19 (struct hid_device*,struct wacom_features*) ;
 int FUNC_20 (struct wacom_features*) ;
 int FUNC_21 (struct wacom_wac*) ;
 int FUNC_22 (struct wacom*) ;
 int FUNC_23 (struct wacom*,char*) ;

__attribute__((used)) static int FUNC_24(struct wacom *VAR_21, bool VAR_22)
{
 struct wacom_wac *VAR_23 = &VAR_21->wacom_wac;
 struct wacom_features *VAR_24 = &VAR_23->features;
 struct hid_device *VAR_25 = VAR_21->hdev;
 int VAR_26;
 unsigned int VAR_27 = VAR_8;

 VAR_24->pktlen = FUNC_12(VAR_25);
 if (VAR_24->pktlen > VAR_17)
  return -VAR_3;

 if (!FUNC_4(&VAR_25->dev, VAR_21, VAR_6))
  return -VAR_5;

 VAR_21->resources = 1;

 VAR_26 = FUNC_10(VAR_21);
 if (VAR_26)
  goto fail;






 if (VAR_24->type == VAR_0) {
  if (VAR_24->pktlen == VAR_18) {
   VAR_24->type = VAR_9;
  } else if ((VAR_24->pktlen != VAR_15) &&
      (VAR_24->pktlen != VAR_16)) {
   VAR_26 = -VAR_4;
   goto fail;
  }
 }


 FUNC_20(VAR_24);


 FUNC_19(VAR_25, VAR_24);
 FUNC_22(VAR_21);

 if (VAR_24->device_type == VAR_10 &&
     VAR_24->type != VAR_20) {
  VAR_26 = VAR_24->type == VAR_9 ? -VAR_4 : 0;

  FUNC_2(&VAR_25->dev, "Unknown device_type for '%s'. %s.",
    VAR_25->name,
    VAR_26 ? "Ignoring" : "Assuming pen");

  if (VAR_26)
   goto fail;

  VAR_24->device_type |= VAR_12;
 }

 FUNC_11(VAR_24);

 FUNC_23(VAR_21, VAR_22 ? " (WL)" : "");


 if ((VAR_24->type == VAR_1) &&
     ((VAR_24->device_type & VAR_13) ||
     (VAR_24->device_type & VAR_11))) {
  VAR_26 = -VAR_4;
  goto fail;
 }

 VAR_26 = FUNC_9(VAR_25);
 if (VAR_26)
  goto fail;

 if (!(VAR_24->device_type & VAR_14) &&
      (VAR_24->quirks & VAR_19)) {
  VAR_26 = FUNC_13(VAR_21);
  if (VAR_26)
   goto fail;
 }

 VAR_26 = FUNC_17(VAR_21);
 if (VAR_26)
  goto fail;

 if (VAR_21->wacom_wac.features.device_type & VAR_11) {
  VAR_26 = FUNC_14(VAR_21);
  if (VAR_26)
   goto fail;

  VAR_26 = FUNC_15(VAR_21);
  if (VAR_26)
   goto fail;
 }

 if (VAR_24->type == VAR_9)
  VAR_27 |= VAR_7;


 VAR_26 = FUNC_7(VAR_25, VAR_27);
 if (VAR_26) {
  FUNC_5(VAR_25, "hw start failed\n");
  goto fail;
 }

 if (!VAR_22) {

  FUNC_16(VAR_21);
 }


 if ((VAR_24->type == VAR_2) &&
     (VAR_24->device_type & VAR_12)) {
  FUNC_1(&VAR_21->init_work);
  FUNC_0(VAR_21);
  VAR_26 = -VAR_4;
  goto fail_quirks;
 }

 if (VAR_24->device_type & VAR_14)
  VAR_26 = FUNC_6(VAR_25);

 FUNC_21(VAR_23);
 FUNC_3(&VAR_25->dev, VAR_21);

 return 0;

fail_quirks:
 FUNC_8(VAR_25);
fail:
 FUNC_18(VAR_21);
 return VAR_26;
}
