
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int feedback_amount; int nfrac_amount; scalar_t__ ds_frac_size; } ;
struct TYPE_6__ {scalar_t__ CENTER_SPREAD; scalar_t__ EXTERNAL_SS; } ;
struct bp_spread_spectrum_parameters {scalar_t__ pll_id; scalar_t__ percentage; TYPE_2__ ds; TYPE_1__ flags; } ;
struct bios_parser {int dummy; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_8__ {int ucEnable; void* usSpreadSpectrumAmount; int ucSpreadSpectrumType; void* usSpreadSpectrumStep; void* usSpreadSpectrumPercentage; } ;
typedef TYPE_3__ ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2 ;


 int VAR_0 ;
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
 int FUNC_0 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (int ,TYPE_3__) ;
 int VAR_14 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_15,
 struct bp_spread_spectrum_parameters *VAR_16,
 bool VAR_17)
{
 enum bp_result VAR_18 = VAR_10;
 ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2 VAR_19;

 FUNC_3(&VAR_19, 0, sizeof(VAR_19));

 if (VAR_16->pll_id == VAR_12)
  VAR_19.ucSpreadSpectrumType = VAR_8;
 else if (VAR_16->pll_id == VAR_13)
  VAR_19.ucSpreadSpectrumType = VAR_9;
 else
  FUNC_0();

 if ((VAR_17 == 1) && (VAR_16->percentage > 0)) {
  VAR_19.ucEnable = VAR_1;

  VAR_19.usSpreadSpectrumPercentage =
    FUNC_2((uint16_t)(VAR_16->percentage));
  VAR_19.usSpreadSpectrumStep =
    FUNC_2((uint16_t)(VAR_16->ds.ds_frac_size));

  if (VAR_16->flags.EXTERNAL_SS)
   VAR_19.ucSpreadSpectrumType |=
     VAR_7;

  if (VAR_16->flags.CENTER_SPREAD)
   VAR_19.ucSpreadSpectrumType |=
     VAR_6;




  VAR_19.usSpreadSpectrumAmount = FUNC_2((uint16_t)(
    ((VAR_16->ds.feedback_amount <<
      VAR_3) &
      VAR_2) |
      ((VAR_16->ds.nfrac_amount <<
        VAR_5) &
        VAR_4)));
 } else
  VAR_19.ucEnable = VAR_0;

 if (FUNC_1(VAR_14, VAR_19))
  VAR_18 = VAR_11;

 return VAR_18;
}
