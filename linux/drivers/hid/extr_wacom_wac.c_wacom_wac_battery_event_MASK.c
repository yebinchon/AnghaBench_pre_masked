
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int battery_capacity; int bat_connected; int bat_charging; int ps_connected; void* bat_status; } ;
struct wacom_wac {TYPE_1__ hid_data; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {int hid; } ;
struct hid_field {int logical_maximum; int logical_minimum; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;



 void* VAR_0 ;


 void* VAR_1 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_2, struct hid_field *VAR_3,
  struct hid_usage *VAR_4, __s32 VAR_5)
{
 struct wacom *VAR_6 = FUNC_0(VAR_2);
 struct wacom_wac *VAR_7 = &VAR_6->wacom_wac;
 unsigned VAR_8 = FUNC_1(VAR_4->hid);

 switch (VAR_8) {
 case 130:
  if (VAR_5 == 0) {
   VAR_7->hid_data.bat_status = VAR_0;
  }
  else {
   VAR_5 = VAR_5 * 100 / (VAR_3->logical_maximum - VAR_3->logical_minimum);
   VAR_7->hid_data.battery_capacity = VAR_5;
   VAR_7->hid_data.bat_connected = 1;
   VAR_7->hid_data.bat_status = VAR_1;
  }
  break;
 case 128:
  VAR_5 = VAR_5 * 100 / (VAR_3->logical_maximum - VAR_3->logical_minimum);
  VAR_7->hid_data.battery_capacity = VAR_5;
  VAR_7->hid_data.bat_connected = 1;
  VAR_7->hid_data.bat_status = VAR_1;
  break;
 case 129:
  VAR_7->hid_data.bat_charging = VAR_5;
  VAR_7->hid_data.ps_connected = VAR_5;
  VAR_7->hid_data.bat_connected = 1;
  VAR_7->hid_data.bat_status = VAR_1;
  break;
 }
}
