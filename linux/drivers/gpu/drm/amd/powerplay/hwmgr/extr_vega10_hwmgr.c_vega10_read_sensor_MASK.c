
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int count; TYPE_1__* dpm_levels; } ;
struct vega10_dpm_table {TYPE_2__ mem_table; } ;
struct vega10_hwmgr {int vce_power_gated; int uvd_power_gated; struct vega10_dpm_table dpm_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int value; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int ) ;
 int FUNC_4 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_5 (struct pp_hwmgr*,int *) ;
 int FUNC_6 (struct pp_hwmgr*,int*) ;
 int FUNC_7 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_11, int VAR_12,
         void *VAR_13, int *VAR_14)
{
 struct amdgpu_device *VAR_15 = VAR_11->adev;
 uint32_t VAR_16, VAR_17, VAR_18 = 0;
 struct vega10_hwmgr *VAR_19 = VAR_11->backend;
 struct vega10_dpm_table *VAR_20 = &VAR_19->dpm_table;
 int VAR_21 = 0;
 uint32_t VAR_22;

 switch (VAR_12) {
 case 136:
  FUNC_3(VAR_11, VAR_2);
  VAR_16 = FUNC_2(VAR_11);
  *((uint32_t *)VAR_13) = VAR_16 * 100;
  break;
 case 137:
  FUNC_3(VAR_11, VAR_3);
  VAR_17 = FUNC_2(VAR_11);
  if (VAR_17 < VAR_20->mem_table.count) {
   *((uint32_t *)VAR_13) = VAR_20->mem_table.dpm_levels[VAR_17].value;
   *VAR_14 = 4;
  } else {
   VAR_21 = -VAR_0;
  }
  break;
 case 135:
  FUNC_4(VAR_11, VAR_1, 0);
  VAR_18 = FUNC_2(VAR_11);
  *((uint32_t *)VAR_13) = VAR_18 > 100 ? 100 : VAR_18;
  *VAR_14 = 4;
  break;
 case 133:
  *((uint32_t *)VAR_13) = FUNC_7(VAR_11);
  *VAR_14 = 4;
  break;
 case 132:
  FUNC_3(VAR_11, VAR_5);
  *((uint32_t *)VAR_13) = FUNC_2(VAR_11) *
   VAR_6;
  *VAR_14 = 4;
  break;
 case 131:
  FUNC_3(VAR_11, VAR_4);
  *((uint32_t *)VAR_13) = FUNC_2(VAR_11) *
   VAR_6;
  *VAR_14 = 4;
  break;
 case 130:
  *((uint32_t *)VAR_13) = VAR_19->uvd_power_gated ? 0 : 1;
  *VAR_14 = 4;
  break;
 case 129:
  *((uint32_t *)VAR_13) = VAR_19->vce_power_gated ? 0 : 1;
  *VAR_14 = 4;
  break;
 case 134:
  VAR_21 = FUNC_6(VAR_11, (uint32_t *)VAR_13);
  break;
 case 128:
  VAR_22 = (FUNC_0(VAR_7, 0, VAR_10) &
   VAR_8) >>
   VAR_9;
  *((uint32_t *)VAR_13) = (uint32_t)FUNC_1((uint8_t)VAR_22);
  return 0;
 case 138:
  VAR_21 = FUNC_5(VAR_11, (uint64_t *)VAR_13);
  if (!VAR_21)
   *VAR_14 = 8;
  break;
 default:
  VAR_21 = -VAR_0;
  break;
 }

 return VAR_21;
}
