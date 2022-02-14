
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ inrange_state; int pad_input_event_flag; } ;
struct wacom_wac {TYPE_1__ hid_data; struct input_dev* pad_input; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int dummy; } ;
struct hid_report {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_3,
  struct hid_report *VAR_4, struct hid_field *VAR_5)
{
 struct wacom *VAR_6 = FUNC_0(VAR_3);
 struct wacom_wac *VAR_7 = &VAR_6->wacom_wac;
 struct input_dev *VAR_8 = VAR_7->pad_input;
 bool VAR_9 = VAR_7->hid_data.inrange_state != 0;


 if (VAR_7->hid_data.pad_input_event_flag) {
  FUNC_1(VAR_8, VAR_1, VAR_0, VAR_9 ? VAR_2 : 0);
  FUNC_2(VAR_8);
  if (!VAR_9)
   VAR_7->hid_data.pad_input_event_flag = 0;
 }
}
