
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {scalar_t__ panel_power_cycle_delay; int panel_power_off_time; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct intel_dp*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct intel_dp *VAR_3)
{
 ktime_t VAR_4;
 s64 VAR_5;

 FUNC_0("Wait for panel power cycle\n");



 VAR_4 = FUNC_1();
 VAR_5 = FUNC_2(VAR_4, VAR_3->panel_power_off_time);



 if (VAR_5 < (s64)VAR_3->panel_power_cycle_delay)
  FUNC_4(VAR_2,
           VAR_3->panel_power_cycle_delay - VAR_5);

 FUNC_3(VAR_3, VAR_0, VAR_1);
}
