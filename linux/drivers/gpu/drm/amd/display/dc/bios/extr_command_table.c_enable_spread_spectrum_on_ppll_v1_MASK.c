
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ CENTER_SPREAD; scalar_t__ EXTERNAL_SS; } ;
struct TYPE_6__ {int range; scalar_t__ delay; scalar_t__ step; } ;
struct bp_spread_spectrum_parameters {scalar_t__ percentage; scalar_t__ pll_id; TYPE_2__ flags; TYPE_1__ ver1; } ;
struct bios_parser {int dummy; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_8__ {int ucPpll; int ucSpreadSpectrumType; void* ucSpreadSpectrumRange; void* ucSpreadSpectrumDelay; void* ucSpreadSpectrumStep; int usSpreadSpectrumPercentage; int ucEnable; } ;
typedef TYPE_3__ ENABLE_SPREAD_SPECTRUM_ON_PPLL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ,TYPE_3__) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_11,
 struct bp_spread_spectrum_parameters *VAR_12,
 bool VAR_13)
{
 enum bp_result VAR_14 = VAR_6;
 ENABLE_SPREAD_SPECTRUM_ON_PPLL VAR_15;

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));

 if ((VAR_13 == 1) && (VAR_12->percentage > 0))
  VAR_15.ucEnable = VAR_1;
 else
  VAR_15.ucEnable = VAR_0;

 VAR_15.usSpreadSpectrumPercentage =
   FUNC_2((uint16_t)VAR_12->percentage);
 VAR_15.ucSpreadSpectrumStep =
   (uint8_t)VAR_12->ver1.step;
 VAR_15.ucSpreadSpectrumDelay =
   (uint8_t)VAR_12->ver1.delay;

 VAR_15.ucSpreadSpectrumRange =
   (uint8_t)(VAR_12->ver1.range / 10000);

 if (VAR_12->flags.EXTERNAL_SS)
  VAR_15.ucSpreadSpectrumType |= VAR_2;

 if (VAR_12->flags.CENTER_SPREAD)
  VAR_15.ucSpreadSpectrumType |= VAR_5;

 if (VAR_12->pll_id == VAR_8)
  VAR_15.ucPpll = VAR_3;
 else if (VAR_12->pll_id == VAR_9)
  VAR_15.ucPpll = VAR_4;
 else
  FUNC_0();

 if (FUNC_1(VAR_10, VAR_15))
  VAR_14 = VAR_7;

 return VAR_14;
}
