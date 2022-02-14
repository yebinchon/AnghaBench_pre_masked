
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct lg4ff_device_entry {int report_lock; TYPE_2__* report; } ;
struct input_dev {int dummy; } ;
struct hid_device {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {TYPE_1__** field; } ;
struct TYPE_3__ {int* value; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,TYPE_2__*,int ) ;
 struct hid_device* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_1, u16 VAR_2)
{
 struct hid_device *VAR_3 = FUNC_3(VAR_1);
 struct lg4ff_device_entry *VAR_4;
 struct lg_drv_data *VAR_5;
 unsigned long VAR_6;
 s32 *VAR_7;
 VAR_2 = VAR_2 * 90 / 65535;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_3, "Private driver data not found!\n");
  return;
 }

 VAR_4 = VAR_5->device_props;
 if (!VAR_4) {
  FUNC_0(VAR_3, "Device properties not found!\n");
  return;
 }
 VAR_7 = VAR_4->report->field[0]->value;

 FUNC_4(&VAR_4->report_lock, VAR_6);
 VAR_7[0] = 0xfe;
 VAR_7[1] = 0x03;
 VAR_7[2] = VAR_2 >> 14;
 VAR_7[3] = VAR_2 >> 14;
 VAR_7[4] = VAR_2;
 VAR_7[5] = 0x00;
 VAR_7[6] = 0x00;

 FUNC_2(VAR_3, VAR_4->report, VAR_0);
 FUNC_5(&VAR_4->report_lock, VAR_6);
}
