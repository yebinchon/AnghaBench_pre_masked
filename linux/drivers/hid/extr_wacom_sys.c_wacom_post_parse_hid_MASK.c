
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int touch_max; } ;
struct wacom_wac {TYPE_1__ features; int touch_input; scalar_t__ is_direct_mode; scalar_t__ has_mode_change; } ;
struct wacom_features {scalar_t__ type; int device_type; int touch_max; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_4,
     struct wacom_features *VAR_5)
{
 struct wacom *VAR_6 = FUNC_0(VAR_4);
 struct wacom_wac *VAR_7 = &VAR_6->wacom_wac;

 if (VAR_5->type == VAR_0) {

  if (VAR_7->has_mode_change) {
   if (VAR_7->is_direct_mode)
    VAR_5->device_type |= VAR_3;
   else
    VAR_5->device_type &= ~VAR_3;
  }

  if (VAR_5->touch_max > 1) {
   if (VAR_5->device_type & VAR_3)
    FUNC_1(VAR_7->touch_input,
          VAR_7->features.touch_max,
          VAR_1);
   else
    FUNC_1(VAR_7->touch_input,
          VAR_7->features.touch_max,
          VAR_2);
  }
 }
}
