
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ touch_input; scalar_t__ pen_input; scalar_t__ pad_input; TYPE_1__ features; } ;
struct wacom {TYPE_2__ wacom_wac; } ;
struct hid_usage {int dummy; } ;
struct hid_field {scalar_t__ logical_maximum; scalar_t__ logical_minimum; } ;
struct hid_device {int dummy; } ;
typedef scalar_t__ __s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hid_usage*) ;
 scalar_t__ FUNC_1 (struct hid_field*) ;
 scalar_t__ FUNC_2 (struct hid_field*) ;
 scalar_t__ FUNC_3 (struct hid_field*) ;
 struct wacom* FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,struct hid_field*,struct hid_usage*,scalar_t__) ;
 int FUNC_6 (struct hid_device*,struct hid_field*,struct hid_usage*,scalar_t__) ;
 int FUNC_7 (struct hid_device*,struct hid_field*,struct hid_usage*,scalar_t__) ;
 int FUNC_8 (struct hid_device*,struct hid_field*,struct hid_usage*,scalar_t__) ;

void FUNC_9(struct hid_device *VAR_1, struct hid_field *VAR_2,
  struct hid_usage *VAR_3, __s32 VAR_4)
{
 struct wacom *VAR_5 = FUNC_4(VAR_1);

 if (VAR_5->wacom_wac.features.type != VAR_0)
  return;

 if (VAR_4 > VAR_2->logical_maximum || VAR_4 < VAR_2->logical_minimum)
  return;


 if (FUNC_0(VAR_3))
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_2(VAR_2) && VAR_5->wacom_wac.pad_input)
  FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_3(VAR_2) && VAR_5->wacom_wac.pen_input)
  FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_1(VAR_2) && VAR_5->wacom_wac.touch_input)
  FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
}
