
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct amdgpu_vce_clock_voltage_dependency_table {int count; TYPE_5__* entries; } ;
struct amdgpu_uvd_clock_voltage_dependency_table {int count; TYPE_4__* entries; } ;
struct amdgpu_clock_voltage_dependency_table {int count; TYPE_6__* entries; } ;
struct TYPE_7__ {struct amdgpu_clock_voltage_dependency_table acp_clock_voltage_dependency_table; struct amdgpu_clock_voltage_dependency_table samu_clock_voltage_dependency_table; struct amdgpu_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; struct amdgpu_uvd_clock_voltage_dependency_table uvd_clock_voltage_dependency_table; } ;
struct TYPE_8__ {TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_12__ {void* v; } ;
struct TYPE_11__ {void* v; } ;
struct TYPE_10__ {void* v; } ;


 void* FUNC_0 (struct amdgpu_device*,void*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1;
 struct amdgpu_uvd_clock_voltage_dependency_table *VAR_2 =
  &VAR_0->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table;
 struct amdgpu_vce_clock_voltage_dependency_table *VAR_3 =
  &VAR_0->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;
 struct amdgpu_clock_voltage_dependency_table *VAR_4 =
  &VAR_0->pm.dpm.dyn_state.samu_clock_voltage_dependency_table;
 struct amdgpu_clock_voltage_dependency_table *VAR_5 =
  &VAR_0->pm.dpm.dyn_state.acp_clock_voltage_dependency_table;

 if (VAR_2->count) {
  for (VAR_1 = 0; VAR_1 < VAR_2->count; VAR_1++)
   VAR_2->entries[VAR_1].v =
    FUNC_0(VAR_0,
         VAR_2->entries[VAR_1].v);
 }

 if (VAR_3->count) {
  for (VAR_1 = 0; VAR_1 < VAR_3->count; VAR_1++)
   VAR_3->entries[VAR_1].v =
    FUNC_0(VAR_0,
         VAR_3->entries[VAR_1].v);
 }

 if (VAR_4->count) {
  for (VAR_1 = 0; VAR_1 < VAR_4->count; VAR_1++)
   VAR_4->entries[VAR_1].v =
    FUNC_0(VAR_0,
         VAR_4->entries[VAR_1].v);
 }

 if (VAR_5->count) {
  for (VAR_1 = 0; VAR_1 < VAR_5->count; VAR_1++)
   VAR_5->entries[VAR_1].v =
    FUNC_0(VAR_0,
         VAR_5->entries[VAR_1].v);
 }

}
