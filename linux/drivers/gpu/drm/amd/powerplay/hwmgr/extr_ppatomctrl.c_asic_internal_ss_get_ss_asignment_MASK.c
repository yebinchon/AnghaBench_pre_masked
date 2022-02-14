
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct pp_hwmgr {int adev; } ;
struct TYPE_11__ {int speed_spectrum_percentage; int speed_spectrum_rate; void* speed_spectrum_mode; } ;
typedef TYPE_2__ pp_atomctrl_internal_ss_info ;
struct TYPE_10__ {int usStructureSize; } ;
struct TYPE_13__ {TYPE_1__ sHeader; TYPE_3__* asSpreadSpectrum; } ;
struct TYPE_12__ {scalar_t__ const ucClockIndication; int ucSpreadSpectrumMode; int usSpreadRateInKhz; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
typedef TYPE_3__ ATOM_ASIC_SS_ASSIGNMENT ;
typedef TYPE_4__ ATOM_ASIC_INTERNAL_SS_INFO ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_2,
  const uint8_t VAR_3,
  const uint32_t VAR_4,
  pp_atomctrl_internal_ss_info *VAR_5)
{
 ATOM_ASIC_INTERNAL_SS_INFO *VAR_6;
 ATOM_ASIC_SS_ASSIGNMENT *VAR_7;
 int VAR_8 = 0;

 FUNC_5(VAR_5, 0x00, sizeof(pp_atomctrl_internal_ss_info));

 VAR_6 = FUNC_2(VAR_2->adev);

 if (((void*)0) == VAR_6)
  return -1;

 VAR_7 = &VAR_6->asSpreadSpectrum[0];

 while (((uint8_t *)VAR_7 - (uint8_t *)VAR_6) <
  FUNC_3(VAR_6->sHeader.usStructureSize)) {
  if ((VAR_3 == VAR_7->ucClockIndication) &&
   ((uint32_t)VAR_4 <= FUNC_4(VAR_7->ulTargetClockRange))) {
   VAR_8 = 1;
   break;
  }

  VAR_7 = (ATOM_ASIC_SS_ASSIGNMENT *)((uint8_t *)VAR_7 +
    sizeof(ATOM_ASIC_SS_ASSIGNMENT));
 }

 if (VAR_8) {
  VAR_5->speed_spectrum_percentage =
   FUNC_3(VAR_7->usSpreadSpectrumPercentage);
  VAR_5->speed_spectrum_rate = FUNC_3(VAR_7->usSpreadRateInKhz);

  if (((FUNC_0(VAR_6) == 2) &&
   (FUNC_1(VAR_6) >= 2)) ||
   (FUNC_0(VAR_6) == 3)) {
   VAR_5->speed_spectrum_rate /= 100;
  }

  switch (VAR_7->ucSpreadSpectrumMode) {
  case 0:
   VAR_5->speed_spectrum_mode =
    VAR_1;
   break;
  case 1:
   VAR_5->speed_spectrum_mode =
    VAR_0;
   break;
  default:
   VAR_5->speed_spectrum_mode =
    VAR_1;
   break;
  }
 }

 return VAR_8 ? 0 : 1;
}
