
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vega20_hwmgr {int disable_dpm_mask; int avfs_exist; int is_tlu_enabled; int is_custom_profile_set; int total_active_cus; scalar_t__ water_marks_bitmap; void* vddci_control; void* mvdd_control; void* vddc_control; } ;
struct TYPE_5__ {int engineClock; int memoryClock; } ;
struct TYPE_6__ {int hardwarePerformanceLevels; int minimumClocksReductionPercentage; int vbiosInterruptId; TYPE_1__ clockStep; int hardwareActivityPerformanceLevels; } ;
struct pp_hwmgr {int workload_mask; int* workload_prority; size_t power_profile_mode; size_t default_power_profile_mode; TYPE_2__ platform_descriptor; struct vega20_hwmgr* backend; struct amdgpu_device* adev; } ;
struct TYPE_7__ {int number; } ;
struct TYPE_8__ {TYPE_3__ cu_info; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct vega20_hwmgr* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_5)
{
 struct vega20_hwmgr *VAR_6;
 struct amdgpu_device *VAR_7 = VAR_5->adev;

 VAR_6 = FUNC_0(sizeof(struct vega20_hwmgr), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5->backend = VAR_6;

 VAR_5->workload_mask = 1 << VAR_5->workload_prority[VAR_2];
 VAR_5->power_profile_mode = VAR_2;
 VAR_5->default_power_profile_mode = VAR_2;

 FUNC_2(VAR_5);

 VAR_6->disable_dpm_mask = 0xff;


 VAR_6->vddc_control = VAR_4;
 VAR_6->mvdd_control = VAR_4;
 VAR_6->vddci_control = VAR_4;

 VAR_6->water_marks_bitmap = 0;
 VAR_6->avfs_exist = 0;

 FUNC_3(VAR_5);

 FUNC_1(VAR_5);


 FUNC_4(VAR_5);

 VAR_6->is_tlu_enabled = 0;

 VAR_5->platform_descriptor.hardwareActivityPerformanceLevels =
   VAR_3;
 VAR_5->platform_descriptor.hardwarePerformanceLevels = 2;
 VAR_5->platform_descriptor.minimumClocksReductionPercentage = 50;

 VAR_5->platform_descriptor.vbiosInterruptId = 0x20000400;

 VAR_5->platform_descriptor.clockStep.engineClock = 500;
 VAR_5->platform_descriptor.clockStep.memoryClock = 500;

 VAR_6->total_active_cus = VAR_7->gfx.cu_info.number;
 VAR_6->is_custom_profile_set = 0;

 return 0;
}
