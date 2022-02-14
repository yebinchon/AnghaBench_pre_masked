
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bat_status; int battery_capacity; int bat_charging; int bat_connected; int ps_connected; } ;
struct wacom_features {int quirks; } ;
struct wacom_wac {TYPE_1__ hid_data; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct wacom_wac*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_1,
  struct hid_report *VAR_2)
{
 struct wacom *VAR_3 = FUNC_0(VAR_1);
 struct wacom_wac *VAR_4 = &VAR_3->wacom_wac;
 struct wacom_features *VAR_5 = &VAR_4->features;

 if (VAR_5->quirks & VAR_0) {
  int VAR_6 = VAR_4->hid_data.bat_status;
  int VAR_7 = VAR_4->hid_data.battery_capacity;
  bool VAR_8 = VAR_4->hid_data.bat_charging;
  bool VAR_9 = VAR_4->hid_data.bat_connected;
  bool VAR_10 = VAR_4->hid_data.ps_connected;

  FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8,
         VAR_9, VAR_10);
 }
}
