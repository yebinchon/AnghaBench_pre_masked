
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int device_type; } ;
struct wacom_wac {struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct hid_usage*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct hid_field*) ;
 scalar_t__ FUNC_2 (struct hid_field*) ;
 scalar_t__ FUNC_3 (struct hid_field*) ;
 scalar_t__ FUNC_4 (struct hid_field*) ;
 struct wacom* FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*,struct hid_field*,struct hid_usage*) ;
 int FUNC_7 (struct hid_device*,struct hid_field*,struct hid_usage*) ;
 int FUNC_8 (struct hid_device*,struct hid_field*,struct hid_usage*) ;
 int FUNC_9 (struct hid_device*,struct hid_field*,struct hid_usage*) ;

void FUNC_10(struct hid_device *VAR_1,
  struct hid_field *VAR_2, struct hid_usage *VAR_3)
{
 struct wacom *VAR_4 = FUNC_5(VAR_1);
 struct wacom_wac *VAR_5 = &VAR_4->wacom_wac;
 struct wacom_features *VAR_6 = &VAR_5->features;

 if (FUNC_1(VAR_2))
  VAR_6->device_type |= VAR_0;


 if (FUNC_0(VAR_3))
  FUNC_6(VAR_1, VAR_2, VAR_3);
 else if (FUNC_3(VAR_2))
  FUNC_8(VAR_1, VAR_2, VAR_3);
 else if (FUNC_4(VAR_2))
  FUNC_9(VAR_1, VAR_2, VAR_3);
 else if (FUNC_2(VAR_2))
  FUNC_7(VAR_1, VAR_2, VAR_3);
}
