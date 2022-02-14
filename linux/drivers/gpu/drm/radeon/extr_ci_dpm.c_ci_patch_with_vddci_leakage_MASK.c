
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct radeon_device {int dummy; } ;
struct ci_leakage_voltage {size_t count; int * actual_voltage; int * leakage_id; } ;
struct ci_power_info {struct ci_leakage_voltage vddci_leakage; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0, u16 *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_0(VAR_0);
 struct ci_leakage_voltage *VAR_3 = &VAR_2->vddci_leakage;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  if (VAR_3->leakage_id[VAR_4] == *VAR_1) {
   *VAR_1 = VAR_3->actual_voltage[VAR_4];
   break;
  }
 }
}
