
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {void* last_backlight_off; void* last_power_on; int panel_power_off_time; } ;


 void* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct intel_dp *VAR_1)
{
 VAR_1->panel_power_off_time = FUNC_0();
 VAR_1->last_power_on = VAR_0;
 VAR_1->last_backlight_off = VAR_0;
}
