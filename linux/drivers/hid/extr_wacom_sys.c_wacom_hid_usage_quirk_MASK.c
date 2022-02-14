
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wacom_features {scalar_t__ type; int quirks; } ;
struct TYPE_4__ {int mode_value; int mode_report; struct wacom_features features; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_usage {int hid; int usage_index; } ;
struct hid_field {scalar_t__ application; scalar_t__ physical; int maxusage; int report_size; int index; int logical_maximum; scalar_t__ logical_minimum; TYPE_3__* usage; TYPE_2__* report; } ;
struct hid_device {scalar_t__ vendor; int product; } ;
struct TYPE_6__ {scalar_t__ hid; } ;
struct TYPE_5__ {int maxfield; struct hid_field** field; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct hid_field*) ;
 int VAR_21 ;
 struct wacom* FUNC_1 (struct hid_device*) ;
 unsigned int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_22,
  struct hid_field *VAR_23, struct hid_usage *VAR_24)
{
 struct wacom *VAR_25 = FUNC_1(VAR_22);
 struct wacom_features *VAR_26 = &VAR_25->wacom_wac.features;
 unsigned int VAR_27 = FUNC_2(VAR_24->hid);





 if (VAR_22->vendor == VAR_17 &&
     VAR_22->product == 0x4200 &&
     VAR_23->application == VAR_11) {
  VAR_25->wacom_wac.mode_report = VAR_23->report->id;
  VAR_25->wacom_wac.mode_value = 2;
 }
 if (VAR_26->type == VAR_10 &&
     VAR_24->hid == 0x000D0000 &&
     VAR_23->application == VAR_5 &&
     VAR_23->physical == VAR_6) {
  int VAR_28 = VAR_24->usage_index;

  if (VAR_28-4 >= 0 && VAR_28+1 < VAR_23->maxusage &&
      VAR_23->usage[VAR_28-4].hid == VAR_7 &&
      VAR_23->usage[VAR_28-3].hid == VAR_0 &&
      VAR_23->usage[VAR_28-2].hid == VAR_2 &&
      VAR_23->usage[VAR_28-1].hid == VAR_4 &&
      VAR_23->usage[VAR_28+1].hid == VAR_3) {
   VAR_24->hid = VAR_1;
  }
 }
 if (VAR_24->hid == VAR_20 &&
     VAR_23->report_size == 16 &&
     VAR_23->index + 2 < VAR_23->report->maxfield) {
  struct hid_field *VAR_29 = VAR_23->report->field[VAR_23->index + 1];
  struct hid_field *VAR_30 = VAR_23->report->field[VAR_23->index + 2];

  if (VAR_29->maxusage > 0 &&
      VAR_29->usage[0].hid == VAR_8 &&
      VAR_29->report_size == 32 &&
      VAR_30->maxusage > 0 &&
      VAR_30->usage[0].hid == 0xFF000000 &&
      VAR_30->report_size == 8) {
   VAR_26->quirks |= VAR_21;
   VAR_24->hid = VAR_19;
   VAR_23->logical_minimum = VAR_13;
   VAR_23->logical_maximum = VAR_12;
   VAR_29->logical_minimum = VAR_15;
   VAR_29->logical_maximum = VAR_14;
   VAR_30->usage[0].hid = VAR_18;
   VAR_30->logical_minimum = 0;
   VAR_30->logical_maximum = VAR_16;
  }
 }


 if (VAR_22->vendor == VAR_17 &&
     VAR_22->product == 0x0358 &&
     FUNC_0(VAR_23) &&
     VAR_27 == VAR_9) {
  VAR_23->logical_maximum = 43200;
 }
}
