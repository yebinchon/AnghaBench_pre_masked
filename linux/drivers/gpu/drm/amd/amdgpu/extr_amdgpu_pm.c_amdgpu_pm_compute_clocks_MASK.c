
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct smu_dpm_context {int dpm_level; } ;
struct TYPE_10__ {scalar_t__ ready; } ;
struct amdgpu_ring {TYPE_2__ sched; } ;
struct TYPE_15__ {int vrefresh; scalar_t__ min_vblank_time; int num_display; } ;
struct TYPE_11__ {int new_active_crtc_count; } ;
struct TYPE_14__ {int mutex; TYPE_7__ pm_display_cfg; TYPE_3__ dpm; int dpm_enabled; } ;
struct TYPE_13__ {int pp_handle; TYPE_4__* pp_funcs; } ;
struct TYPE_16__ {struct smu_dpm_context smu_dpm; } ;
struct TYPE_9__ {scalar_t__ num_crtc; } ;
struct amdgpu_device {TYPE_6__ pm; TYPE_5__ powerplay; TYPE_8__ smu; struct amdgpu_ring** rings; TYPE_1__ mode_info; } ;
struct TYPE_12__ {int (* display_configuration_change ) (int ,TYPE_7__*) ;scalar_t__ dispatch_tasks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int ,int *) ;
 int FUNC_4 (struct amdgpu_device*) ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_8__*,int ,int ) ;
 int FUNC_12 (int ,TYPE_7__*) ;

void FUNC_13(struct amdgpu_device *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2->pm.dpm_enabled)
  return;

 if (VAR_2->mode_info.num_crtc)
  FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct amdgpu_ring *VAR_4 = VAR_2->rings[VAR_3];
  if (VAR_4 && VAR_4->sched.ready)
   FUNC_7(VAR_4);
 }

 if (FUNC_8(VAR_2)) {
  struct smu_dpm_context *VAR_5 = &VAR_2->smu.smu_dpm;
  FUNC_11(&VAR_2->smu,
    VAR_5->dpm_level,
    VAR_1);
 } else {
  if (VAR_2->powerplay.pp_funcs->dispatch_tasks) {
   if (!FUNC_0(VAR_2)) {
    FUNC_9(&VAR_2->pm.mutex);
    FUNC_4(VAR_2);
    VAR_2->pm.pm_display_cfg.num_display = VAR_2->pm.dpm.new_active_crtc_count;
    VAR_2->pm.pm_display_cfg.vrefresh = FUNC_6(VAR_2);
    VAR_2->pm.pm_display_cfg.min_vblank_time = FUNC_5(VAR_2);

    if (VAR_2->pm.pm_display_cfg.vrefresh > 120)
     VAR_2->pm.pm_display_cfg.min_vblank_time = 0;
    if (VAR_2->powerplay.pp_funcs->display_configuration_change)
     VAR_2->powerplay.pp_funcs->display_configuration_change(
         VAR_2->powerplay.pp_handle,
         &VAR_2->pm.pm_display_cfg);
    FUNC_10(&VAR_2->pm.mutex);
   }
   FUNC_3(VAR_2, VAR_1, ((void*)0));
  } else {
   FUNC_9(&VAR_2->pm.mutex);
   FUNC_4(VAR_2);
   FUNC_2(VAR_2);
   FUNC_10(&VAR_2->pm.mutex);
  }
 }
}
