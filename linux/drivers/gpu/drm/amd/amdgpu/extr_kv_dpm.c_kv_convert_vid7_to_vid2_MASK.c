
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_vid_mapping_table {size_t num_entries; TYPE_5__* entries; } ;
struct amdgpu_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_6__ {struct amdgpu_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_10__ {size_t vid_7bit; size_t vid_2bit; } ;
struct TYPE_9__ {size_t v; } ;



__attribute__((used)) static u32 FUNC_0(struct amdgpu_device *VAR_0,
       struct sumo_vid_mapping_table *VAR_1,
       u32 VAR_2)
{
 struct amdgpu_clock_voltage_dependency_table *VAR_3 =
  &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk;
 u32 VAR_4;

 if (VAR_3 && VAR_3->count) {
  for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
   if (VAR_3->entries[VAR_4].v == VAR_2)
    return VAR_4;
  }
  return VAR_3->count - 1;
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_1->num_entries; VAR_4++) {
   if (VAR_1->entries[VAR_4].vid_7bit == VAR_2)
    return VAR_1->entries[VAR_4].vid_2bit;
  }

  return VAR_1->entries[VAR_1->num_entries - 1].vid_2bit;
 }
}
