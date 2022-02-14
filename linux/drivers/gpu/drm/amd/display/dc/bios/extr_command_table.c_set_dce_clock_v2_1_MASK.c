
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct command_table_helper {int (* dc_clock_type_to_atom ) (int ,void**) ;int (* clock_source_id_to_atom ) (int ,void**) ;} ;
struct TYPE_6__ {scalar_t__ USE_GENERICA_AS_SOURCE_FOR_DPREFCLK; scalar_t__ USE_XTALIN_AS_SOURCE_FOR_DPREFCLK; scalar_t__ USE_PCIE_AS_SOURCE_FOR_DPREFCLK; scalar_t__ USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK; } ;
struct bp_set_dce_clock_parameters {int target_clock_frequency; TYPE_1__ flags; int clock_type; int pll_id; } ;
struct bios_parser {struct command_table_helper* cmd_helper; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_7__ {int ulDCEClkFreq; int ucDCEClkFlag; void* ucDCEClkType; void* ucDCEClkSrc; } ;
struct TYPE_8__ {TYPE_2__ asParam; } ;
typedef TYPE_3__ SET_DCE_CLOCK_PS_ALLOCATION_V2_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int ,void**) ;

__attribute__((used)) static enum bp_result FUNC_6(
 struct bios_parser *VAR_9,
 struct bp_set_dce_clock_parameters *VAR_10)
{
 enum bp_result VAR_11 = VAR_1;

 SET_DCE_CLOCK_PS_ALLOCATION_V2_1 VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 const struct command_table_helper *VAR_15 = VAR_9->cmd_helper;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));

 if (!VAR_15->clock_source_id_to_atom(VAR_10->pll_id, &VAR_13) ||
   !VAR_15->dc_clock_type_to_atom(VAR_10->clock_type, &VAR_14))
  return VAR_0;

 VAR_12.asParam.ucDCEClkSrc = VAR_13;
 VAR_12.asParam.ucDCEClkType = VAR_14;

 if (VAR_10->clock_type == VAR_3) {
  if (VAR_10->flags.USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK)
   VAR_12.asParam.ucDCEClkFlag |= VAR_5;

  if (VAR_10->flags.USE_PCIE_AS_SOURCE_FOR_DPREFCLK)
   VAR_12.asParam.ucDCEClkFlag |= VAR_6;

  if (VAR_10->flags.USE_XTALIN_AS_SOURCE_FOR_DPREFCLK)
   VAR_12.asParam.ucDCEClkFlag |= VAR_7;

  if (VAR_10->flags.USE_GENERICA_AS_SOURCE_FOR_DPREFCLK)
   VAR_12.asParam.ucDCEClkFlag |= VAR_4;
 }
 else


  VAR_12.asParam.ulDCEClkFreq = FUNC_1(VAR_10->target_clock_frequency / 10);

 if (FUNC_0(VAR_8, VAR_12)) {

  VAR_10->target_clock_frequency = FUNC_2(VAR_12.asParam.ulDCEClkFreq) * 10;
  VAR_11 = VAR_2;
 }

 return VAR_11;
}
