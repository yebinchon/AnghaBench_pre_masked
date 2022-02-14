
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct lg4ff_device_entry {int report_lock; TYPE_2__* report; } ;
struct lg4ff_compat_mode_switch {scalar_t__ cmd_count; int * cmd; } ;
struct hid_device {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {TYPE_1__** field; } ;
struct TYPE_3__ {int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,TYPE_2__*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_2, const struct lg4ff_compat_mode_switch *VAR_3)
{
 struct lg4ff_device_entry *VAR_4;
 struct lg_drv_data *VAR_5;
 unsigned long VAR_6;
 s32 *VAR_7;
 u8 VAR_8;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  FUNC_0(VAR_2, "Private driver data not found!\n");
  return -VAR_0;
 }

 VAR_4 = VAR_5->device_props;
 if (!VAR_4) {
  FUNC_0(VAR_2, "Device properties not found!\n");
  return -VAR_0;
 }
 VAR_7 = VAR_4->report->field[0]->value;

 FUNC_4(&VAR_4->report_lock, VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_3->cmd_count; VAR_8++) {
  u8 VAR_9;

  for (VAR_9 = 0; VAR_9 < 7; VAR_9++)
   VAR_7[VAR_9] = VAR_3->cmd[VAR_9 + (7*VAR_8)];

  FUNC_2(VAR_2, VAR_4->report, VAR_1);
 }
 FUNC_5(&VAR_4->report_lock, VAR_6);
 FUNC_3(VAR_2);
 return 0;
}
