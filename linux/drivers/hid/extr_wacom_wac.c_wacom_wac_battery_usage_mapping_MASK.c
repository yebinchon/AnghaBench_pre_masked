
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int quirks; } ;
struct wacom_wac {struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {int hid; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;





 int VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1,
  struct hid_field *VAR_2, struct hid_usage *VAR_3)
{
 struct wacom *VAR_4 = FUNC_0(VAR_1);
 struct wacom_wac *VAR_5 = &VAR_4->wacom_wac;
 struct wacom_features *VAR_6 = &VAR_5->features;
 unsigned VAR_7 = FUNC_1(VAR_3->hid);

 switch (VAR_7) {
 case 130:
 case 128:
 case 129:
  VAR_6->quirks |= VAR_0;
  break;
 }
}
