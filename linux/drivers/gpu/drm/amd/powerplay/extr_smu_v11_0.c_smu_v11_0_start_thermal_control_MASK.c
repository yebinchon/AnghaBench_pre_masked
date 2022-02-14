
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smu_temperature_range {int mem_emergency_max; int mem_crit_max; int mem_min; int hotspot_emergency_max; int hotspot_crit_max; int hotspot_min; int edge_emergency_max; int max; int min; } ;
struct TYPE_5__ {scalar_t__ thermal_controller_type; } ;
struct smu_context {TYPE_1__ smu_table; int pm_enabled; struct amdgpu_device* adev; } ;
struct TYPE_6__ {int max_mem_emergency_temp; int max_mem_crit_temp; int min_mem_temp; int max_hotspot_emergency_temp; int max_hotspot_crit_temp; int min_hotspot_temp; int max_edge_emergency_temp; int max_temp; int min_temp; } ;
struct TYPE_7__ {TYPE_2__ thermal; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct amdgpu_device {TYPE_4__ pm; } ;


 int FUNC_0 (struct smu_temperature_range*,int *,int) ;
 int * VAR_0 ;
 int FUNC_1 (struct smu_context*,struct smu_temperature_range*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*) ;
 int FUNC_4 (struct smu_context*,struct smu_temperature_range) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_1)
{
 int VAR_2 = 0;
 struct smu_temperature_range VAR_3;
 struct amdgpu_device *VAR_4 = VAR_1->adev;

 if (!VAR_1->pm_enabled)
  return VAR_2;

 FUNC_0(&VAR_3, &VAR_0[0], sizeof(struct smu_temperature_range));

 VAR_2 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->smu_table.thermal_controller_type) {
  VAR_2 = FUNC_4(VAR_1, VAR_3);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_4->pm.dpm.thermal.min_temp = VAR_3.min;
 VAR_4->pm.dpm.thermal.max_temp = VAR_3.max;
 VAR_4->pm.dpm.thermal.max_edge_emergency_temp = VAR_3.edge_emergency_max;
 VAR_4->pm.dpm.thermal.min_hotspot_temp = VAR_3.hotspot_min;
 VAR_4->pm.dpm.thermal.max_hotspot_crit_temp = VAR_3.hotspot_crit_max;
 VAR_4->pm.dpm.thermal.max_hotspot_emergency_temp = VAR_3.hotspot_emergency_max;
 VAR_4->pm.dpm.thermal.min_mem_temp = VAR_3.mem_min;
 VAR_4->pm.dpm.thermal.max_mem_crit_temp = VAR_3.mem_crit_max;
 VAR_4->pm.dpm.thermal.max_mem_emergency_temp = VAR_3.mem_emergency_max;

 return VAR_2;
}
