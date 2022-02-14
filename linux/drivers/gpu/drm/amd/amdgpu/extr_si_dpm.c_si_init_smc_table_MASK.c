
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_14__ {scalar_t__ vddc; } ;
struct si_ulv_param {int cg_ulv_parameter; int cg_ulv_control; TYPE_5__ pl; scalar_t__ supported; } ;
struct TYPE_15__ {int initialState; int ULVState; int driverState; int systemFlags; int extraFlags; int thermalProtectType; } ;
struct si_power_info {int sram_end; int state_table_start; TYPE_6__ smc_statetable; struct si_ulv_param ulv; } ;
struct amdgpu_ps {int dummy; } ;
struct TYPE_12__ {int platform_caps; int backbias_response_time; struct amdgpu_ps* boot_ps; } ;
struct TYPE_13__ {int int_thermal_type; TYPE_3__ dpm; } ;
struct TYPE_11__ {scalar_t__ vram_type; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_2__ gmc; TYPE_1__* pdev; } ;
struct TYPE_10__ {int device; } ;
typedef TYPE_6__ SISLANDS_SMC_STATETABLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int *,int,int ) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ps*,int ) ;
 struct si_power_info* FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,TYPE_6__*) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_ps*,TYPE_6__*) ;
 int FUNC_7 (struct amdgpu_device*,TYPE_6__*) ;
 int FUNC_8 (struct amdgpu_device*,int *) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_20)
{
 struct si_power_info *VAR_21 = FUNC_4(VAR_20);
 struct amdgpu_ps *VAR_22 = VAR_20->pm.dpm.boot_ps;
 const struct si_ulv_param *VAR_23 = &VAR_21->ulv;
 SISLANDS_SMC_STATETABLE *VAR_24 = &VAR_21->smc_statetable;
 int VAR_25;
 u32 VAR_26;
 u32 VAR_27;

 FUNC_7(VAR_20, VAR_24);

 switch (VAR_20->pm.int_thermal_type) {
 case 128:
 case 130:
  VAR_24->thermalProtectType = VAR_15;
  break;
 case 129:
  VAR_24->thermalProtectType = VAR_16;
  break;
 default:
  VAR_24->thermalProtectType = VAR_14;
  break;
 }

 if (VAR_20->pm.dpm.platform_caps & VAR_1)
  VAR_24->systemFlags |= VAR_10;

 if (VAR_20->pm.dpm.platform_caps & VAR_2) {
  if ((VAR_20->pdev->device != 0x6818) && (VAR_20->pdev->device != 0x6819))
   VAR_24->systemFlags |= VAR_11;
 }

 if (VAR_20->pm.dpm.platform_caps & VAR_4)
  VAR_24->systemFlags |= VAR_13;

 if (VAR_20->gmc.vram_type == VAR_0)
  VAR_24->systemFlags |= VAR_9;

 if (VAR_20->pm.dpm.platform_caps & VAR_3)
  VAR_24->extraFlags |= VAR_8;

 if (VAR_20->pm.dpm.platform_caps & VAR_5) {
  VAR_24->systemFlags |= VAR_12;
  VAR_27 = VAR_20->pm.dpm.backbias_response_time;
  FUNC_10(VAR_20, VAR_19,
        VAR_27);
 }

 VAR_25 = FUNC_6(VAR_20, VAR_22, VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_5(VAR_20, VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_24->driverState = VAR_24->initialState;

 VAR_25 = FUNC_3(VAR_20, VAR_22,
           VAR_17);
 if (VAR_25)
  return VAR_25;

 if (VAR_23->supported && VAR_23->pl.vddc) {
  VAR_25 = FUNC_8(VAR_20, &VAR_24->ULVState);
  if (VAR_25)
   return VAR_25;

  VAR_25 = FUNC_9(VAR_20);
  if (VAR_25)
   return VAR_25;

  FUNC_0(VAR_6, VAR_23->cg_ulv_control);
  FUNC_0(VAR_7, VAR_23->cg_ulv_parameter);

  VAR_26 = FUNC_1(VAR_20);
  FUNC_10(VAR_20, VAR_18, VAR_26);
 } else {
  VAR_24->ULVState = VAR_24->initialState;
 }

 return FUNC_2(VAR_20, VAR_21->state_table_start,
        (u8 *)VAR_24, sizeof(SISLANDS_SMC_STATETABLE),
        VAR_21->sram_end);
}
