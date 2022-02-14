
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* requested_dpm_level; void* dpm_level; } ;
struct TYPE_6__ {int platform_support; int state; int mutex; } ;
struct TYPE_5__ {int allowed; int enabled; int supported; int mutex; int feature_num; } ;
struct smu_context {size_t power_profile_mode; size_t default_power_profile_mode; int workload_mask; int* workload_prority; size_t* workload_setting; TYPE_4__ smu_dpm; int * display_config; scalar_t__ watermarks_bitmap; int sensor_lock; TYPE_2__ smu_baco; TYPE_1__ smu_feature; int pool_size; } ;
struct TYPE_7__ {int pm_display_cfg; int smu_prv_buffer_size; } ;
struct amdgpu_device {TYPE_3__ pm; struct smu_context smu; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct smu_context*) ;
 int FUNC_4 (struct smu_context*) ;
 int FUNC_5 (struct smu_context*) ;

__attribute__((used)) static int FUNC_6(void *VAR_10)
{
 struct amdgpu_device *VAR_11 = (struct amdgpu_device *)VAR_10;
 struct smu_context *VAR_12 = &VAR_11->smu;
 int VAR_13;

 VAR_12->pool_size = VAR_11->pm.smu_prv_buffer_size;
 VAR_12->smu_feature.feature_num = VAR_9;
 FUNC_1(&VAR_12->smu_feature.mutex);
 FUNC_0(VAR_12->smu_feature.supported, VAR_9);
 FUNC_0(VAR_12->smu_feature.enabled, VAR_9);
 FUNC_0(VAR_12->smu_feature.allowed, VAR_9);

 FUNC_1(&VAR_12->smu_baco.mutex);
 VAR_12->smu_baco.state = VAR_8;
 VAR_12->smu_baco.platform_support = 0;

 FUNC_1(&VAR_12->sensor_lock);

 VAR_12->watermarks_bitmap = 0;
 VAR_12->power_profile_mode = VAR_1;
 VAR_12->default_power_profile_mode = VAR_1;

 VAR_12->workload_mask = 1 << VAR_12->workload_prority[VAR_1];
 VAR_12->workload_prority[VAR_1] = 0;
 VAR_12->workload_prority[VAR_4] = 1;
 VAR_12->workload_prority[VAR_5] = 2;
 VAR_12->workload_prority[VAR_6] = 3;
 VAR_12->workload_prority[VAR_7] = 4;
 VAR_12->workload_prority[VAR_2] = 5;
 VAR_12->workload_prority[VAR_3] = 6;

 VAR_12->workload_setting[0] = VAR_1;
 VAR_12->workload_setting[1] = VAR_4;
 VAR_12->workload_setting[2] = VAR_5;
 VAR_12->workload_setting[3] = VAR_6;
 VAR_12->workload_setting[4] = VAR_7;
 VAR_12->workload_setting[5] = VAR_2;
 VAR_12->workload_setting[6] = VAR_3;
 VAR_12->display_config = &VAR_11->pm.pm_display_cfg;

 VAR_12->smu_dpm.dpm_level = VAR_0;
 VAR_12->smu_dpm.requested_dpm_level = VAR_0;
 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13) {
  FUNC_2("Failed to load smu firmware!\n");
  return VAR_13;
 }

 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13) {
  FUNC_2("Failed to sw init smc table!\n");
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13) {
  FUNC_2("Failed to register smc irq handler!\n");
  return VAR_13;
 }

 return 0;
}
