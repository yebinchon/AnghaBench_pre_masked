
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


struct TYPE_13__ {int min_fan_limit; int min_performance_clock; int target_temperature; int target_fan_speed; } ;
struct vega12_hwmgr {int disable_dpm_mask; int workload_mask; int avfs_exist; int is_tlu_enabled; int gfxoff_controlled_by_driver; TYPE_5__ odn_fan_table; int total_active_cus; scalar_t__ water_marks_bitmap; void* vddci_control; void* mvdd_control; void* vddc_control; } ;
struct TYPE_15__ {int ulMaxRPM; } ;
struct TYPE_14__ {int usFanPWMMinLimit; int ulMinFanSCLKAcousticLimit; int ucTargetTemperature; int usMaxFanRPM; } ;
struct TYPE_16__ {TYPE_7__ fanInfo; TYPE_6__ advanceFanControlParameters; } ;
struct TYPE_9__ {int engineClock; int memoryClock; } ;
struct TYPE_10__ {int hardwarePerformanceLevels; int minimumClocksReductionPercentage; int vbiosInterruptId; TYPE_1__ clockStep; int hardwareActivityPerformanceLevels; } ;
struct pp_hwmgr {int feature_mask; TYPE_8__ thermal_controller; TYPE_2__ platform_descriptor; struct vega12_hwmgr* backend; struct amdgpu_device* adev; } ;
struct TYPE_11__ {int number; } ;
struct TYPE_12__ {TYPE_3__ cu_info; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct vega12_hwmgr* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_5)
{
 int VAR_6 = 0;
 struct vega12_hwmgr *VAR_7;
 struct amdgpu_device *VAR_8 = VAR_5->adev;

 VAR_7 = FUNC_0(sizeof(struct vega12_hwmgr), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_5->backend = VAR_7;

 FUNC_2(VAR_5);

 VAR_7->disable_dpm_mask = 0xff;
 VAR_7->workload_mask = 0xff;


 VAR_7->vddc_control = VAR_4;
 VAR_7->mvdd_control = VAR_4;
 VAR_7->vddci_control = VAR_4;

 VAR_7->water_marks_bitmap = 0;
 VAR_7->avfs_exist = 0;

 FUNC_3(VAR_5);

 FUNC_1(VAR_5);


 FUNC_4(VAR_5);

 VAR_7->is_tlu_enabled = 0;

 VAR_5->platform_descriptor.hardwareActivityPerformanceLevels =
   VAR_3;
 VAR_5->platform_descriptor.hardwarePerformanceLevels = 2;
 VAR_5->platform_descriptor.minimumClocksReductionPercentage = 50;

 VAR_5->platform_descriptor.vbiosInterruptId = 0x20000400;

 VAR_5->platform_descriptor.clockStep.engineClock = 500;
 VAR_5->platform_descriptor.clockStep.memoryClock = 500;

 VAR_7->total_active_cus = VAR_8->gfx.cu_info.number;

 VAR_7->odn_fan_table.target_fan_speed =
   VAR_5->thermal_controller.advanceFanControlParameters.usMaxFanRPM;
 VAR_7->odn_fan_table.target_temperature =
   VAR_5->thermal_controller.advanceFanControlParameters.ucTargetTemperature;
 VAR_7->odn_fan_table.min_performance_clock =
   VAR_5->thermal_controller.advanceFanControlParameters.ulMinFanSCLKAcousticLimit;
 VAR_7->odn_fan_table.min_fan_limit =
   VAR_5->thermal_controller.advanceFanControlParameters.usFanPWMMinLimit *
   VAR_5->thermal_controller.fanInfo.ulMaxRPM / 100;

 if (VAR_5->feature_mask & VAR_2)
  VAR_7->gfxoff_controlled_by_driver = 1;
 else
  VAR_7->gfxoff_controlled_by_driver = 0;

 return VAR_6;
}
