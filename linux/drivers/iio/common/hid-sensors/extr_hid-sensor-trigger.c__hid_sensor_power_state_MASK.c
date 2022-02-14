
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int index; int report_id; scalar_t__ logical_minimum; } ;
struct TYPE_4__ {int index; int report_id; scalar_t__ logical_minimum; } ;
struct hid_sensor_common {TYPE_3__ power_state; int hsdev; TYPE_2__* pdev; TYPE_1__ report_state; int data_ready; } ;
typedef int state_val ;
typedef int s32 ;
typedef int report_val ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct hid_sensor_common*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int,int*) ;
 int FUNC_9 (int ,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_10(struct hid_sensor_common *VAR_5, bool VAR_6)
{
 int VAR_7;
 int VAR_8;
 s32 VAR_9 = 0;

 if (VAR_6) {
  if (FUNC_7(VAR_5->hsdev))
   return -VAR_0;

  FUNC_1(&VAR_5->data_ready);

  VAR_7 = FUNC_2(VAR_5->hsdev,
   VAR_5->power_state.report_id,
   VAR_5->power_state.index,
   VAR_1);
  VAR_8 = FUNC_2(VAR_5->hsdev,
   VAR_5->report_state.report_id,
   VAR_5->report_state.index,
   VAR_3);

  VAR_9 = FUNC_3(VAR_5);
 } else {
  int VAR_10;

  VAR_10 = FUNC_0(&VAR_5->data_ready);
  if (VAR_10 < 0)
   return 0;

  FUNC_6(VAR_5->hsdev);
  VAR_7 = FUNC_2(VAR_5->hsdev,
   VAR_5->power_state.report_id,
   VAR_5->power_state.index,
   VAR_2);
  VAR_8 = FUNC_2(VAR_5->hsdev,
   VAR_5->report_state.report_id,
   VAR_5->report_state.index,
   VAR_4);
 }

 if (VAR_7 >= 0) {
  VAR_7 += VAR_5->power_state.logical_minimum;
  FUNC_9(VAR_5->hsdev, VAR_5->power_state.report_id,
           VAR_5->power_state.index, sizeof(VAR_7),
           &VAR_7);
 }

 if (VAR_8 >= 0) {
  VAR_8 += VAR_5->report_state.logical_minimum;
  FUNC_9(VAR_5->hsdev, VAR_5->report_state.report_id,
           VAR_5->report_state.index,
           sizeof(VAR_8),
           &VAR_8);
 }

 FUNC_5("HID_SENSOR %s set power_state %d report_state %d\n",
   VAR_5->pdev->name, VAR_7, VAR_8);

 FUNC_8(VAR_5->hsdev, VAR_5->power_state.report_id,
          VAR_5->power_state.index,
          sizeof(VAR_7), &VAR_7);
 if (VAR_6 && VAR_9)
  FUNC_4(VAR_9 * 2);

 return 0;
}
