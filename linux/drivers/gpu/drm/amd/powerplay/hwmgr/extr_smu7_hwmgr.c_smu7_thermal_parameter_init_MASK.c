
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


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_12__ {int platformCaps; } ;
struct TYPE_10__ {TYPE_3__* cac_dtp_table; } ;
struct TYPE_7__ {int usFanPWMStep; int usFanRPMMaxLimit; int usFanRPMStep; int usDefaultMaxFanRPM; int usMaxFanRPM; scalar_t__ usDefaultMaxFanPWM; scalar_t__ usMaxFanPWM; scalar_t__ ucMinimumPWMLimit; void* usFanRPMMinLimit; void* usFanPWMMaxLimit; void* usFanPWMMinLimit; scalar_t__ ucFanControlMode; } ;
struct TYPE_8__ {TYPE_1__ advanceFanControlParameters; } ;
struct pp_hwmgr {int feature_mask; TYPE_6__ platform_descriptor; TYPE_4__ dyn_state; TYPE_2__ thermal_controller; int device; scalar_t__ pptable; } ;
struct pp_atomctrl_gpio_pin_assignment {int uc_gpio_pin_bit_shift; } ;
struct phm_ppt_v1_information {TYPE_5__* cac_dtp_table; } ;
struct TYPE_11__ {int usDefaultTargetOperatingTemp; int usOperatingTempMaxLimit; int usOperatingTempStep; int usOperatingTempHyst; int usTargetOperatingTemp; int usOperatingTempMinLimit; } ;
struct TYPE_9__ {int usOperatingTempMaxLimit; int usDefaultTargetOperatingTemp; int usOperatingTempStep; int usTargetOperatingTemp; int usOperatingTempMinLimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,int ,struct pp_atomctrl_gpio_pin_assignment*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_10)
{
 struct pp_atomctrl_gpio_pin_assignment VAR_11;
 uint32_t VAR_12;
 struct phm_ppt_v1_information *VAR_13 =
   (struct phm_ppt_v1_information *)(VAR_10->pptable);


 if (FUNC_1(VAR_10, VAR_8, &VAR_11)) {
  VAR_12 = FUNC_2(VAR_10->device, VAR_0, VAR_9);
  switch (VAR_11.uc_gpio_pin_bit_shift) {
  case 0:
   VAR_12 = FUNC_0(VAR_12, VAR_1, VAR_5, 0x1);
   break;
  case 1:
   VAR_12 = FUNC_0(VAR_12, VAR_1, VAR_5, 0x2);
   break;
  case 2:
   VAR_12 = FUNC_0(VAR_12, VAR_1, VAR_4, 0x1);
   break;
  case 3:
   VAR_12 = FUNC_0(VAR_12, VAR_1, VAR_3, 0x1);
   break;
  case 4:
   VAR_12 = FUNC_0(VAR_12, VAR_1, VAR_2, 0x1);
   break;
  default:
   break;
  }
  FUNC_3(VAR_10->device, VAR_0, VAR_9, VAR_12);
 }

 if (VAR_13 == ((void*)0))
  return 0;

 if (VAR_13->cac_dtp_table->usDefaultTargetOperatingTemp != 0 &&
  VAR_10->thermal_controller.advanceFanControlParameters.ucFanControlMode) {
  VAR_10->thermal_controller.advanceFanControlParameters.usFanPWMMinLimit =
   (uint16_t)VAR_10->thermal_controller.advanceFanControlParameters.ucMinimumPWMLimit;

  VAR_10->thermal_controller.advanceFanControlParameters.usFanPWMMaxLimit =
   (uint16_t)VAR_10->thermal_controller.advanceFanControlParameters.usDefaultMaxFanPWM;

  VAR_10->thermal_controller.advanceFanControlParameters.usFanPWMStep = 1;

  VAR_10->thermal_controller.advanceFanControlParameters.usFanRPMMaxLimit = 100;

  VAR_10->thermal_controller.advanceFanControlParameters.usFanRPMMinLimit =
   (uint16_t)VAR_10->thermal_controller.advanceFanControlParameters.ucMinimumPWMLimit;

  VAR_10->thermal_controller.advanceFanControlParameters.usFanRPMStep = 1;

  VAR_13->cac_dtp_table->usDefaultTargetOperatingTemp = (VAR_13->cac_dtp_table->usDefaultTargetOperatingTemp >= 50) ?
        (VAR_13->cac_dtp_table->usDefaultTargetOperatingTemp - 50) : 0;

  VAR_13->cac_dtp_table->usOperatingTempMaxLimit = VAR_13->cac_dtp_table->usDefaultTargetOperatingTemp;
  VAR_13->cac_dtp_table->usOperatingTempStep = 1;
  VAR_13->cac_dtp_table->usOperatingTempHyst = 1;

  VAR_10->thermal_controller.advanceFanControlParameters.usMaxFanPWM =
          VAR_10->thermal_controller.advanceFanControlParameters.usDefaultMaxFanPWM;

  VAR_10->thermal_controller.advanceFanControlParameters.usMaxFanRPM =
          VAR_10->thermal_controller.advanceFanControlParameters.usDefaultMaxFanRPM;

  VAR_10->dyn_state.cac_dtp_table->usOperatingTempMinLimit =
          VAR_13->cac_dtp_table->usOperatingTempMinLimit;

  VAR_10->dyn_state.cac_dtp_table->usOperatingTempMaxLimit =
          VAR_13->cac_dtp_table->usOperatingTempMaxLimit;

  VAR_10->dyn_state.cac_dtp_table->usDefaultTargetOperatingTemp =
          VAR_13->cac_dtp_table->usDefaultTargetOperatingTemp;

  VAR_10->dyn_state.cac_dtp_table->usOperatingTempStep =
          VAR_13->cac_dtp_table->usOperatingTempStep;

  VAR_10->dyn_state.cac_dtp_table->usTargetOperatingTemp =
          VAR_13->cac_dtp_table->usTargetOperatingTemp;
  if (VAR_10->feature_mask & VAR_7)
   FUNC_4(VAR_10->platform_descriptor.platformCaps,
     VAR_6);
 }

 return 0;
}
