
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_4__ {int product_id; int range; } ;
struct lg4ff_device_entry {TYPE_2__ wdata; } ;
struct hid_usage {int code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int dummy; } ;
typedef int s32 ;
struct TYPE_3__ {int input; } ;




 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct hid_device *VAR_0, struct hid_field *VAR_1,
        struct hid_usage *VAR_2, s32 VAR_3, struct lg_drv_data *VAR_4)
{
 struct lg4ff_device_entry *VAR_5 = VAR_4->device_props;
 s32 VAR_6 = 0;

 if (!VAR_5) {
  FUNC_0(VAR_0, "Device properties not found");
  return 0;
 }

 switch (VAR_5->wdata.product_id) {
 case 128:
  switch (VAR_2->code) {
  case 129:
   VAR_6 = FUNC_2(VAR_3, VAR_5->wdata.range);
   FUNC_1(VAR_1->hidinput->input, VAR_2->type, VAR_2->code, VAR_6);
   return 1;
  default:
   return 0;
  }
 default:
  return 0;
 }
}
