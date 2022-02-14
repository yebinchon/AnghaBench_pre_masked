
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct lg4ff_device_entry {int report_lock; TYPE_2__* report; } ;
struct hid_device {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {TYPE_1__** field; } ;
struct TYPE_3__ {int* value; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,TYPE_2__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_1, u16 VAR_2)
{
 struct lg4ff_device_entry *VAR_3;
 struct lg_drv_data *VAR_4;
 unsigned long VAR_5;
 s32 *VAR_6;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  FUNC_1(VAR_1, "Private driver data not found!\n");
  return;
 }

 VAR_3 = VAR_4->device_props;
 if (!VAR_3) {
  FUNC_1(VAR_1, "Device properties not found!\n");
  return;
 }
 VAR_6 = VAR_3->report->field[0]->value;
 FUNC_0("G25/G27/DFGT: setting range to %u\n", VAR_2);

 FUNC_4(&VAR_3->report_lock, VAR_5);
 VAR_6[0] = 0xf8;
 VAR_6[1] = 0x81;
 VAR_6[2] = VAR_2 & 0x00ff;
 VAR_6[3] = (VAR_2 & 0xff00) >> 8;
 VAR_6[4] = 0x00;
 VAR_6[5] = 0x00;
 VAR_6[6] = 0x00;

 FUNC_3(VAR_1, VAR_3->report, VAR_0);
 FUNC_5(&VAR_3->report_lock, VAR_5);
}
