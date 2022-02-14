
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_5__ {int product_id; } ;
struct lg4ff_device_entry {int report_lock; TYPE_3__* report; TYPE_2__ wdata; } ;
struct input_dev {int dummy; } ;
struct hid_device {int dummy; } ;
typedef int s32 ;
struct TYPE_6__ {TYPE_1__** field; } ;
struct TYPE_4__ {int* value; } ;


 int VAR_0 ;


 int FUNC_0 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,TYPE_3__*,int ) ;
 struct hid_device* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_1, u16 VAR_2)
{
 struct hid_device *VAR_3 = FUNC_3(VAR_1);
 s32 *VAR_4;
 u32 VAR_5, VAR_6;
 struct lg4ff_device_entry *VAR_7;
 struct lg_drv_data *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_1(VAR_3);
 if (!VAR_8) {
  FUNC_0(VAR_3, "Private driver data not found!\n");
  return;
 }

 VAR_7 = VAR_8->device_props;
 if (!VAR_7) {
  FUNC_0(VAR_3, "Device properties not found!\n");
  return;
 }
 VAR_4 = VAR_7->report->field[0]->value;


 FUNC_4(&VAR_7->report_lock, VAR_9);
 if (VAR_2 == 0) {
  VAR_4[0] = 0xf5;
  VAR_4[1] = 0x00;
  VAR_4[2] = 0x00;
  VAR_4[3] = 0x00;
  VAR_4[4] = 0x00;
  VAR_4[5] = 0x00;
  VAR_4[6] = 0x00;

  FUNC_2(VAR_3, VAR_7->report, VAR_0);
  FUNC_5(&VAR_7->report_lock, VAR_9);
  return;
 }

 if (VAR_2 <= 0xaaaa) {
  VAR_5 = 0x0c * VAR_2;
  VAR_6 = 0x80 * VAR_2;
 } else {
  VAR_5 = (0x0c * 0xaaaa) + 0x06 * (VAR_2 - 0xaaaa);
  VAR_6 = (0x80 * 0xaaaa) + 0xff * (VAR_2 - 0xaaaa);
 }


 switch (VAR_7->wdata.product_id) {
 case 129:
 case 128:
  break;
 default:
  VAR_5 = VAR_5 >> 1;
  break;
 }

 VAR_4[0] = 0xfe;
 VAR_4[1] = 0x0d;
 VAR_4[2] = VAR_5 / 0xaaaa;
 VAR_4[3] = VAR_5 / 0xaaaa;
 VAR_4[4] = VAR_6 / 0xaaaa;
 VAR_4[5] = 0x00;
 VAR_4[6] = 0x00;

 FUNC_2(VAR_3, VAR_7->report, VAR_0);


 VAR_4[0] = 0x14;
 VAR_4[1] = 0x00;
 VAR_4[2] = 0x00;
 VAR_4[3] = 0x00;
 VAR_4[4] = 0x00;
 VAR_4[5] = 0x00;
 VAR_4[6] = 0x00;

 FUNC_2(VAR_3, VAR_7->report, VAR_0);
 FUNC_5(&VAR_7->report_lock, VAR_9);
}
