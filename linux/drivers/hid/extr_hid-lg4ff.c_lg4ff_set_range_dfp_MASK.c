
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
 int VAR_6, VAR_7, VAR_8;
 s32 *VAR_9;

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
 VAR_9 = VAR_3->report->field[0]->value;
 FUNC_0("Driving Force Pro: setting range to %u\n", VAR_2);


 FUNC_4(&VAR_3->report_lock, VAR_5);
 VAR_9[0] = 0xf8;
 VAR_9[1] = 0x00;
 VAR_9[2] = 0x00;
 VAR_9[3] = 0x00;
 VAR_9[4] = 0x00;
 VAR_9[5] = 0x00;
 VAR_9[6] = 0x00;

 if (VAR_2 > 200) {
  VAR_9[1] = 0x03;
  VAR_8 = 900;
 } else {
  VAR_9[1] = 0x02;
  VAR_8 = 200;
 }
 FUNC_3(VAR_1, VAR_3->report, VAR_0);


 VAR_9[0] = 0x81;
 VAR_9[1] = 0x0b;
 VAR_9[2] = 0x00;
 VAR_9[3] = 0x00;
 VAR_9[4] = 0x00;
 VAR_9[5] = 0x00;
 VAR_9[6] = 0x00;

 if (VAR_2 == 200 || VAR_2 == 900) {
  FUNC_3(VAR_1, VAR_3->report, VAR_0);
  FUNC_5(&VAR_3->report_lock, VAR_5);
  return;
 }


 VAR_6 = (((VAR_8 - VAR_2 + 1) * 2047) / VAR_8);
 VAR_7 = 0xfff - VAR_6;

 VAR_9[2] = VAR_6 >> 4;
 VAR_9[3] = VAR_7 >> 4;
 VAR_9[4] = 0xff;
 VAR_9[5] = (VAR_7 & 0xe) << 4 | (VAR_6 & 0xe);
 VAR_9[6] = 0xff;

 FUNC_3(VAR_1, VAR_3->report, VAR_0);
 FUNC_5(&VAR_3->report_lock, VAR_5);
}
