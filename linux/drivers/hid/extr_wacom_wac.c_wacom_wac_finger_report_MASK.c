
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_data {scalar_t__ num_received; scalar_t__ num_expected; } ;
struct TYPE_3__ {unsigned int touch_max; } ;
struct wacom_wac {TYPE_2__* shared; struct hid_data hid_data; TYPE_1__ features; struct input_dev* touch_input; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int dummy; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int touch_down; } ;


 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct wacom_wac*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_0,
  struct hid_report *VAR_1)
{
 struct wacom *VAR_2 = FUNC_0(VAR_0);
 struct wacom_wac *VAR_3 = &VAR_2->wacom_wac;
 struct input_dev *VAR_4 = VAR_3->touch_input;
 unsigned VAR_5 = VAR_3->features.touch_max;
 struct hid_data *VAR_6 = &VAR_3->hid_data;





 if (VAR_3->hid_data.num_received < VAR_3->hid_data.num_expected)
  return;

 if (VAR_5 > 1)
  FUNC_1(VAR_4);

 FUNC_2(VAR_4);
 VAR_3->hid_data.num_received = 0;
 VAR_6->num_expected = 0;


 VAR_3->shared->touch_down = FUNC_3(VAR_3);
}
