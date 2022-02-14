
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int panel_power_cycle_delay; int panel_vdd_work; } ;


 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct intel_dp *VAR_0)
{
 unsigned long VAR_1;






 VAR_1 = FUNC_0(VAR_0->panel_power_cycle_delay * 5);
 FUNC_1(&VAR_0->panel_vdd_work, VAR_1);
}
