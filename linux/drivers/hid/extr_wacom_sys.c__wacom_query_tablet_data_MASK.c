
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; int device_type; } ;
struct wacom_wac {int mode_report; int mode_value; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; struct hid_device* hdev; } ;
struct hid_device {scalar_t__ bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hid_device*,int,struct wacom_features*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,struct wacom_wac*) ;

__attribute__((used)) static int FUNC_3(struct wacom *VAR_9)
{
 struct hid_device *VAR_10 = VAR_9->hdev;
 struct wacom_wac *VAR_11 = &VAR_9->wacom_wac;
 struct wacom_features *VAR_12 = &VAR_11->features;

 if (VAR_10->bus == VAR_2)
  return FUNC_0(VAR_10, 1, VAR_12);

 if (VAR_12->type != VAR_3) {
  if (VAR_12->device_type & VAR_8) {
   if (VAR_12->type > VAR_4) {

    VAR_11->mode_report = 3;
    VAR_11->mode_value = 4;
   } else if (VAR_12->type == VAR_5) {
    VAR_11->mode_report = 18;
    VAR_11->mode_value = 2;
   } else if (VAR_12->type == VAR_6) {
    VAR_11->mode_report = 131;
    VAR_11->mode_value = 2;
   } else if (VAR_12->type == VAR_0) {
    VAR_11->mode_report = 2;
    VAR_11->mode_value = 2;
   }
  } else if (VAR_12->device_type & VAR_7) {
   if (VAR_12->type <= VAR_1) {
    VAR_11->mode_report = 2;
    VAR_11->mode_value = 2;
   }
  }
 }

 FUNC_2(VAR_10, VAR_11);

 if (VAR_12->type == VAR_3)
  return FUNC_1(VAR_10);

 return 0;
}
