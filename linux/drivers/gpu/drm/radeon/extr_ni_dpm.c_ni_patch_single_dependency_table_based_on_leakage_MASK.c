
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct rv7xx_power_info {int max_vddc; } ;
struct radeon_device {int dummy; } ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_2__ {int v; } ;


 int VAR_0 ;
 struct rv7xx_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_1,
            struct radeon_clock_voltage_dependency_table *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4;

 if (VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) {
   if (0xff01 == VAR_2->entries[VAR_4].v) {
    if (VAR_3->max_vddc == 0)
     return -VAR_0;
    VAR_2->entries[VAR_4].v = VAR_3->max_vddc;
   }
  }
 }
 return 0;
}
