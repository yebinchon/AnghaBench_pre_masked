
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int touch_max; } ;
struct hid_data {int num_expected; scalar_t__ cc_report; int cc_index; unsigned int cc_value_index; } ;
struct wacom_wac {TYPE_2__ features; struct hid_data hid_data; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {size_t collection_index; int hid; } ;
struct hid_report {int maxfield; scalar_t__ id; struct hid_field** field; } ;
struct hid_field {unsigned int maxusage; int* value; struct hid_usage* usage; } ;
struct hid_device {TYPE_1__* collection; } ;
struct TYPE_3__ {unsigned int level; } ;


 scalar_t__ VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1,
       struct hid_report *VAR_2,
       int VAR_3,
       struct hid_field *VAR_4,
       int VAR_5)
{
 struct wacom *VAR_6 = FUNC_0(VAR_1);
 struct wacom_wac *VAR_7 = &VAR_6->wacom_wac;
 struct hid_data *VAR_8 = &VAR_7->hid_data;
 unsigned int VAR_9 =
  VAR_1->collection[VAR_3].level;
 bool VAR_10 = 0;
 int VAR_11;

 if (VAR_8->num_expected)
  return;


 for (VAR_11 = VAR_5; VAR_11 < VAR_2->maxfield && !VAR_10; VAR_11++) {
  struct hid_field *VAR_12 = VAR_2->field[VAR_11];
  unsigned int VAR_13 =
   VAR_1->collection[VAR_12->usage[0].collection_index].level;
  unsigned int VAR_14;

  if (VAR_13 != VAR_9)
   continue;

  for (VAR_14 = 0; VAR_14 < VAR_12->maxusage; VAR_14++) {
   struct hid_usage *VAR_15 = &VAR_12->usage[VAR_14];

   if (VAR_15->collection_index != VAR_3) {
    VAR_10 = 1;
    break;
   }
   if (FUNC_1(VAR_15->hid) == VAR_0) {
    VAR_8->cc_report = VAR_2->id;
    VAR_8->cc_index = VAR_11;
    VAR_8->cc_value_index = VAR_14;

    if (VAR_8->cc_report != 0 &&
        VAR_8->cc_index >= 0) {

     struct hid_field *VAR_16 =
      VAR_2->field[VAR_8->cc_index];
     int VAR_17 =
      VAR_16->value[VAR_8->cc_value_index];

     if (VAR_17)
      VAR_8->num_expected = VAR_17;
    }
   }
  }
 }

 if (VAR_8->cc_report == 0 || VAR_8->cc_index < 0)
  VAR_8->num_expected = VAR_7->features.touch_max;
}
