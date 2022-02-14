
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_2__ {int product_id; scalar_t__ combine; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
int FUNC_0(struct hid_device *VAR_0, struct hid_report *VAR_1,
  u8 *VAR_2, int VAR_3, struct lg_drv_data *VAR_4)
{
 int VAR_5;
 struct lg4ff_device_entry *VAR_6 = VAR_4->device_props;

 if (!VAR_6)
  return 0;


 if (VAR_6->wdata.combine) {
  switch (VAR_6->wdata.product_id) {
  case 131:
   VAR_2[5] = VAR_2[3];
   VAR_2[6] = 0x7F;
   return 1;
  case 128:
  case 129:
  case 133:
  case 132:
   VAR_2[4] = VAR_2[3];
   VAR_2[5] = 0x7F;
   return 1;
  case 137:
   VAR_2[5] = VAR_2[4];
   VAR_2[6] = 0x7F;
   return 1;
  case 136:
  case 135:
   VAR_5 = 5;
   break;
  case 138:
  case 134:
   VAR_5 = 6;
   break;
  case 130:
   VAR_5 = 3;
   break;
  default:
   return 0;
  }


  VAR_2[VAR_5] = (0xFF + VAR_2[VAR_5] - VAR_2[VAR_5+1]) >> 1;
  VAR_2[VAR_5+1] = 0x7F;
  return 1;
 }

 return 0;
}
