
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct wacom_wac {scalar_t__ pad_input; scalar_t__ touch_input; scalar_t__ pen_input; TYPE_1__ features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {TYPE_2__* usage; int physical; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int collection_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hid_field*) ;
 scalar_t__ FUNC_1 (struct hid_field*) ;
 scalar_t__ FUNC_2 (struct hid_field*) ;
 struct wacom* FUNC_3 (struct hid_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct hid_device*,struct hid_report*) ;
 int FUNC_6 (struct hid_device*,struct hid_report*) ;
 scalar_t__ FUNC_7 (struct hid_device*,struct hid_report*,int,struct hid_field*,int) ;
 int FUNC_8 (struct hid_device*,struct hid_report*) ;
 int FUNC_9 (struct hid_device*,struct hid_report*) ;
 int FUNC_10 (struct hid_device*,struct hid_report*,struct hid_field*) ;
 int FUNC_11 (struct hid_device*,struct hid_report*) ;

void FUNC_12(struct hid_device *VAR_2, struct hid_report *VAR_3)
{
 struct wacom *VAR_4 = FUNC_3(VAR_2);
 struct wacom_wac *VAR_5 = &VAR_4->wacom_wac;
 struct hid_field *VAR_6;
 bool VAR_7 = 0, VAR_8 = 0,
  VAR_9 = 0, VAR_10 = 0;
 int VAR_11;
 int VAR_12 = -1;

 if (VAR_5->features.type != VAR_1)
  return;

 for (VAR_11 = 0; VAR_11 < VAR_3->maxfield; VAR_11++) {
  VAR_6 = VAR_3->field[VAR_11];

  if (FUNC_1(VAR_6))
   VAR_7 = 1;
  if (FUNC_2(VAR_6))
   VAR_8 = 1;
  if (FUNC_0(VAR_6))
   VAR_9 = 1;
  if (FUNC_4(VAR_6->physical) == VAR_0)
   VAR_10 = 1;
 }

 FUNC_5(VAR_2, VAR_3);

 if (VAR_7 && VAR_4->wacom_wac.pad_input)
  FUNC_9(VAR_2, VAR_3);
 if (VAR_8 && VAR_4->wacom_wac.pen_input)
  FUNC_11(VAR_2, VAR_3);
 if (VAR_9 && VAR_4->wacom_wac.touch_input)
  FUNC_8(VAR_2, VAR_3);

 for (VAR_11 = 0; VAR_11 < VAR_3->maxfield; VAR_11++) {
  VAR_6 = VAR_3->field[VAR_11];

  if (VAR_6->usage[0].collection_index != VAR_12) {
   if (FUNC_7(VAR_2, VAR_3,
    VAR_6->usage[0].collection_index, VAR_6, VAR_11) < 0)
    return;
   VAR_12 = VAR_6->usage[0].collection_index;
  }
 }

 FUNC_6(VAR_2, VAR_3);

 if (VAR_10 && VAR_4->wacom_wac.pad_input)
  FUNC_10(VAR_2, VAR_3, VAR_6);
}
