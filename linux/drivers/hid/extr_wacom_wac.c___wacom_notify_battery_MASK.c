
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_battery {int bat_status; int battery_capacity; int bat_charging; int bat_connected; int ps_connected; scalar_t__ battery; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct wacom_battery *VAR_0,
       int VAR_1, int VAR_2,
       bool VAR_3, bool VAR_4,
       bool VAR_5)
{
 bool VAR_6 = VAR_0->bat_status != VAR_1 ||
         VAR_0->battery_capacity != VAR_2 ||
         VAR_0->bat_charging != VAR_3 ||
         VAR_0->bat_connected != VAR_4 ||
         VAR_0->ps_connected != VAR_5;

 if (VAR_6) {
  VAR_0->bat_status = VAR_1;
  VAR_0->battery_capacity = VAR_2;
  VAR_0->bat_charging = VAR_3;
  VAR_0->bat_connected = VAR_4;
  VAR_0->ps_connected = VAR_5;

  if (VAR_0->battery)
   FUNC_0(VAR_0->battery);
 }
}
