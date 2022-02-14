
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {int uvd_dpm_enable_mask; } ;
struct smu7_hwmgr {TYPE_7__ dpm_level_enable_mask; } ;
struct TYPE_10__ {scalar_t__ vddc; } ;
struct TYPE_9__ {scalar_t__ vddc; } ;
struct TYPE_11__ {TYPE_3__ max_clock_voltage_on_dc; TYPE_2__ max_clock_voltage_on_ac; struct phm_uvd_clock_voltage_dependency_table* uvd_clock_voltage_dependency_table; } ;
struct pp_hwmgr {scalar_t__ dpm_level; int device; TYPE_4__ dyn_state; struct ci_smumgr* smu_backend; struct smu7_hwmgr* backend; struct amdgpu_device* adev; } ;
struct phm_uvd_clock_voltage_dependency_table {scalar_t__ count; TYPE_6__* entries; } ;
struct TYPE_12__ {scalar_t__ UvdBootLevel; } ;
struct ci_smumgr {TYPE_5__ smc_state_table; } ;
struct TYPE_8__ {scalar_t__ ac_power; } ;
struct amdgpu_device {TYPE_1__ pm; } ;
typedef size_t int32_t ;
struct TYPE_13__ {scalar_t__ v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_9->adev;
 struct smu7_hwmgr *VAR_11 = VAR_9->backend;
 struct ci_smumgr *VAR_12 = VAR_9->smu_backend;
 struct phm_uvd_clock_voltage_dependency_table *VAR_13 =
   VAR_9->dyn_state.uvd_clock_voltage_dependency_table;
 uint32_t VAR_14 = VAR_3 |
     VAR_1 |
     VAR_0 |
     VAR_2;
 uint32_t VAR_15 = VAR_10->pm.ac_power ? VAR_9->dyn_state.max_clock_voltage_on_ac.vddc :
      VAR_9->dyn_state.max_clock_voltage_on_dc.vddc;
 int32_t VAR_16;

 if (FUNC_1(VAR_6) || VAR_13->count <= 0)
  VAR_12->smc_state_table.UvdBootLevel = 0;
 else
  VAR_12->smc_state_table.UvdBootLevel = VAR_13->count - 1;

 FUNC_0(VAR_9->device, VAR_4, VAR_5,
    VAR_8, VAR_12->smc_state_table.UvdBootLevel);

 VAR_11->dpm_level_enable_mask.uvd_dpm_enable_mask = 0;

 for (VAR_16 = VAR_13->count - 1; VAR_16 >= 0; VAR_16--) {
  if (VAR_13->entries[VAR_16].v <= VAR_15)
   VAR_11->dpm_level_enable_mask.uvd_dpm_enable_mask |= 1 << VAR_16;
  if (VAR_9->dpm_level & VAR_14 || !FUNC_1(VAR_6))
   break;
 }
 FUNC_2(VAR_9, VAR_7,
    VAR_11->dpm_level_enable_mask.uvd_dpm_enable_mask);

 return 0;
}
