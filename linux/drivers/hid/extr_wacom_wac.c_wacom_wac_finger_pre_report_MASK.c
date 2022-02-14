
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_data {unsigned int last_slot_field; } ;
struct wacom_wac {int is_invalid_bt_frame; struct hid_data hid_data; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {int hid; } ;
struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {int maxusage; struct hid_usage* usage; } ;
struct hid_device {int dummy; } ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_0,
  struct hid_report *VAR_1)
{
 struct wacom *VAR_2 = FUNC_0(VAR_0);
 struct wacom_wac *VAR_3 = &VAR_2->wacom_wac;
 struct hid_data* VAR_4 = &VAR_3->hid_data;
 int VAR_5;

 VAR_3->is_invalid_bt_frame = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->maxfield; VAR_5++) {
  struct hid_field *VAR_6 = VAR_1->field[VAR_5];
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_6->maxusage; VAR_7++) {
   struct hid_usage *VAR_8 = &VAR_6->usage[VAR_7];
   unsigned int VAR_9 =
    FUNC_1(VAR_8->hid);

   switch (VAR_9) {
   case 129:
   case 128:
   case 130:
   case 134:
   case 135:
   case 133:
   case 132:
   case 131:
    VAR_4->last_slot_field = VAR_9;
    break;
   }
  }
 }
}
