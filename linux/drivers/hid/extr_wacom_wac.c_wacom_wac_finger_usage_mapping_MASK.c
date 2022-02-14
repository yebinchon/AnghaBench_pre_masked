
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cc_value_index; int cc_index; int cc_report; } ;
struct TYPE_4__ {unsigned int touch_max; } ;
struct wacom_wac {TYPE_3__ hid_data; TYPE_1__ features; struct input_dev* touch_input; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int dummy; } ;
struct hid_usage {int usage_index; int hid; } ;
struct hid_field {unsigned int logical_maximum; unsigned int logical_minimum; int index; TYPE_2__* report; } ;
struct hid_device {int dummy; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;







 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,int ,int,int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct input_dev*,struct hid_usage*,struct hid_field*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_10,
  struct hid_field *VAR_11, struct hid_usage *VAR_12)
{
 struct wacom *VAR_13 = FUNC_0(VAR_10);
 struct wacom_wac *VAR_14 = &VAR_13->wacom_wac;
 struct input_dev *VAR_15 = VAR_14->touch_input;
 unsigned VAR_16 = VAR_14->features.touch_max;
 unsigned VAR_17 = FUNC_2(VAR_12->hid);

 switch (VAR_17) {
 case 129:
  if (VAR_16 == 1)
   FUNC_3(VAR_15, VAR_12, VAR_11, VAR_8, VAR_5, 4);
  else
   FUNC_3(VAR_15, VAR_12, VAR_11, VAR_8,
     VAR_1, 4);
  break;
 case 128:
  if (VAR_16 == 1)
   FUNC_3(VAR_15, VAR_12, VAR_11, VAR_8, VAR_6, 4);
  else
   FUNC_3(VAR_15, VAR_12, VAR_11, VAR_8,
     VAR_2, 4);
  break;
 case 130:
 case 132:
  FUNC_3(VAR_15, VAR_12, VAR_11, VAR_8, VAR_3, 0);
  FUNC_3(VAR_15, VAR_12, VAR_11, VAR_8, VAR_4, 0);
  FUNC_1(VAR_15, VAR_0, 0, 1, 0, 0);
  break;
 case 131:
  FUNC_3(VAR_15, VAR_12, VAR_11, VAR_9, VAR_7, 0);
  break;
 case 134:
  VAR_14->hid_data.cc_report = VAR_11->report->id;
  VAR_14->hid_data.cc_index = VAR_11->index;
  VAR_14->hid_data.cc_value_index = VAR_12->usage_index;
  break;
 case 133:
  if ((VAR_11->logical_maximum - VAR_11->logical_minimum) < VAR_16) {





   VAR_11->logical_maximum = 255;
  }
  break;
 }
}
