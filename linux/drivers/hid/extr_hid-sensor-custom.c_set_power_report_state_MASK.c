
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct hid_sensor_custom {TYPE_5__* hsdev; TYPE_4__* report_state; TYPE_2__* power_state; } ;
typedef int report_val ;
typedef int power_val ;
struct TYPE_11__ {int hdev; } ;
struct TYPE_9__ {int index; int report_id; scalar_t__ logical_minimum; } ;
struct TYPE_10__ {TYPE_3__ attribute; } ;
struct TYPE_7__ {int index; int report_id; scalar_t__ logical_minimum; } ;
struct TYPE_8__ {TYPE_1__ attribute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_3(struct hid_sensor_custom *VAR_4,
      bool VAR_5)
{
 int VAR_6 = -1;
 int VAR_7 = -1;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;






 if (VAR_5) {
  VAR_8 =
   VAR_0;
  VAR_9 =
   VAR_2;
 } else {
  VAR_8 =
   VAR_1;
  VAR_9 =
   VAR_3;
 }

 if (VAR_4->power_state)
  VAR_6 = FUNC_1(VAR_4->hsdev,
    VAR_4->power_state->attribute.report_id,
    VAR_4->power_state->attribute.index,
    VAR_8);
 if (VAR_4->report_state)
  VAR_7 = FUNC_1(VAR_4->hsdev,
    VAR_4->report_state->attribute.report_id,
    VAR_4->report_state->attribute.index,
    VAR_9);

 if (VAR_6 >= 0) {
  VAR_6 +=
   VAR_4->power_state->attribute.logical_minimum;
  VAR_10 = FUNC_2(VAR_4->hsdev,
    VAR_4->power_state->attribute.report_id,
    VAR_4->power_state->attribute.index,
    sizeof(VAR_6),
    &VAR_6);
  if (VAR_10) {
   FUNC_0(VAR_4->hsdev->hdev,
    "Set power state failed\n");
   return VAR_10;
  }
 }

 if (VAR_7 >= 0) {
  VAR_7 +=
   VAR_4->report_state->attribute.logical_minimum;
  VAR_10 = FUNC_2(VAR_4->hsdev,
    VAR_4->report_state->attribute.report_id,
    VAR_4->report_state->attribute.index,
    sizeof(VAR_7),
    &VAR_7);
  if (VAR_10) {
   FUNC_0(VAR_4->hsdev->hdev,
    "Set report state failed\n");
   return VAR_10;
  }
 }

 return 0;
}
