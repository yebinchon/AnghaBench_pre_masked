
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct lg4ff_device_entry {int report_lock; TYPE_4__* report; } ;
struct input_dev {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_6__ {int start_level; } ;
struct TYPE_7__ {TYPE_2__ ramp; } ;
struct ff_effect {int type; TYPE_3__ u; } ;
typedef int s32 ;
struct TYPE_8__ {TYPE_1__** field; } ;
struct TYPE_5__ {int* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 int FUNC_1 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,TYPE_4__*,int ) ;
 struct hid_device* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_2, void *VAR_3, struct ff_effect *VAR_4)
{
 struct hid_device *VAR_5 = FUNC_4(VAR_2);
 struct lg4ff_device_entry *VAR_6;
 struct lg_drv_data *VAR_7;
 unsigned long VAR_8;
 s32 *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7) {
  FUNC_1(VAR_5, "Private driver data not found!\n");
  return -VAR_0;
 }

 VAR_6 = VAR_7->device_props;
 if (!VAR_6) {
  FUNC_1(VAR_5, "Device properties not found!\n");
  return -VAR_0;
 }
 VAR_9 = VAR_6->report->field[0]->value;



 switch (VAR_4->type) {
 case 128:
  VAR_10 = VAR_4->u.ramp.start_level + 0x80;
  do { if (VAR_10 < 0) VAR_10 = 0; else if (VAR_10 > 0xff) VAR_10 = 0xff; } while (0);

  FUNC_5(&VAR_6->report_lock, VAR_8);
  if (VAR_10 == 0x80) {

   VAR_9[0] = 0x13;
   VAR_9[1] = 0x00;
   VAR_9[2] = 0x00;
   VAR_9[3] = 0x00;
   VAR_9[4] = 0x00;
   VAR_9[5] = 0x00;
   VAR_9[6] = 0x00;

   FUNC_3(VAR_5, VAR_6->report, VAR_1);
   FUNC_6(&VAR_6->report_lock, VAR_8);
   return 0;
  }

  VAR_9[0] = 0x11;
  VAR_9[1] = 0x08;
  VAR_9[2] = VAR_10;
  VAR_9[3] = 0x80;
  VAR_9[4] = 0x00;
  VAR_9[5] = 0x00;
  VAR_9[6] = 0x00;

  FUNC_3(VAR_5, VAR_6->report, VAR_1);
  FUNC_6(&VAR_6->report_lock, VAR_8);
  break;
 }
 return 0;
}
