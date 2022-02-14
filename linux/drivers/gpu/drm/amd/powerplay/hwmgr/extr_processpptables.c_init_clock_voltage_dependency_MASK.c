
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_19__ {TYPE_9__* vdd_gfx_dependency_on_sclk; TYPE_9__* mvdd_dependency_on_mclk; TYPE_9__* vddc_dependency_on_sclk; int valid_sclk_values; TYPE_9__* vddc_dependency_on_mclk; int valid_mclk_values; int max_clock_voltage_on_dc; TYPE_9__* vddci_dependency_on_mclk; TYPE_16__* cac_dtp_table; int * acp_clock_voltage_dependency_table; int * samu_clock_voltage_dependency_table; int * uvd_clock_voltage_dependency_table; int * vce_clock_voltage_dependency_table; int * ppm_parameter_table; int * vddc_dep_on_dal_pwrl; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;
typedef int VCEClockInfoArray ;
typedef int UVDClockInfoArray ;
typedef scalar_t__ UCHAR ;
struct TYPE_24__ {scalar_t__ count; } ;
struct TYPE_23__ {scalar_t__ usTableSize; } ;
struct TYPE_22__ {scalar_t__ usVddcDependencyOnSCLKOffset; scalar_t__ usVddciDependencyOnMCLKOffset; scalar_t__ usVddcDependencyOnMCLKOffset; scalar_t__ usMaxClockVoltageOnDCOffset; scalar_t__ usMvddDependencyOnMCLKOffset; } ;
struct TYPE_21__ {int power_tune_table; } ;
struct TYPE_20__ {scalar_t__ usMaximumPowerDeliveryLimit; scalar_t__ usTjMax; int power_tune_table; } ;
struct TYPE_18__ {int usDefaultTargetOperatingTemp; } ;
typedef int ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table ;
typedef int ATOM_PPLIB_UVD_Clock_Voltage_Limit_Table ;
typedef int ATOM_PPLIB_SAMClk_Voltage_Limit_Table ;
typedef TYPE_2__ ATOM_PPLIB_POWERTUNE_Table_V1 ;
typedef TYPE_3__ ATOM_PPLIB_POWERTUNE_Table ;
typedef TYPE_4__ ATOM_PPLIB_POWERPLAYTABLE4 ;
typedef TYPE_5__ ATOM_PPLIB_POWERPLAYTABLE ;
typedef int ATOM_PPLIB_Clock_Voltage_Limit_Table ;
typedef int ATOM_PPLIB_Clock_Voltage_Dependency_Table ;
typedef int ATOM_PPLIB_ACPClk_Voltage_Limit_Table ;


 int FUNC_0 (struct pp_hwmgr*,int **,int const*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,TYPE_5__ const*) ;
 int FUNC_2 (struct pp_hwmgr*,TYPE_16__**,int *,int) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*,TYPE_5__ const*) ;
 int FUNC_4 (struct pp_hwmgr*,TYPE_9__**,int *) ;
 int FUNC_5 (struct pp_hwmgr*,int *,int *) ;
 int FUNC_6 (struct pp_hwmgr*,int **,int const*) ;
 scalar_t__ FUNC_7 (struct pp_hwmgr*,TYPE_5__ const*) ;
 scalar_t__ FUNC_8 (struct pp_hwmgr*,TYPE_5__ const*) ;
 scalar_t__ FUNC_9 (struct pp_hwmgr*,TYPE_5__ const*) ;
 int FUNC_10 (struct pp_hwmgr*,int **,int const*,int const*) ;
 scalar_t__ FUNC_11 (struct pp_hwmgr*,TYPE_5__ const*) ;
 int FUNC_12 (struct pp_hwmgr*,int *,TYPE_9__*) ;
 scalar_t__ FUNC_13 (struct pp_hwmgr*,TYPE_5__ const*) ;
 int FUNC_14 (struct pp_hwmgr*,int **,int const*,int const*) ;
 scalar_t__ FUNC_15 (struct pp_hwmgr*,TYPE_5__ const*) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct pp_hwmgr *VAR_0,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_1)
{
 ATOM_PPLIB_Clock_Voltage_Dependency_Table *VAR_2;
 ATOM_PPLIB_Clock_Voltage_Limit_Table *VAR_3;
 int VAR_4 = 0;

 uint16_t VAR_5;
 uint16_t VAR_6;
 uint16_t VAR_7;

 VAR_0->dyn_state.vddc_dependency_on_sclk = ((void*)0);
 VAR_0->dyn_state.vddci_dependency_on_mclk = ((void*)0);
 VAR_0->dyn_state.vddc_dependency_on_mclk = ((void*)0);
 VAR_0->dyn_state.vddc_dep_on_dal_pwrl = ((void*)0);
 VAR_0->dyn_state.mvdd_dependency_on_mclk = ((void*)0);
 VAR_0->dyn_state.vce_clock_voltage_dependency_table = ((void*)0);
 VAR_0->dyn_state.uvd_clock_voltage_dependency_table = ((void*)0);
 VAR_0->dyn_state.samu_clock_voltage_dependency_table = ((void*)0);
 VAR_0->dyn_state.acp_clock_voltage_dependency_table = ((void*)0);
 VAR_0->dyn_state.ppm_parameter_table = ((void*)0);
 VAR_0->dyn_state.vdd_gfx_dependency_on_sclk = ((void*)0);

 VAR_5 = FUNC_13(
      VAR_0, VAR_1);
 VAR_7 = FUNC_15(VAR_0,
      VAR_1);
 if (VAR_5 > 0 && VAR_7 > 0) {
  const VCEClockInfoArray *VAR_8 = (const VCEClockInfoArray *)
    (((unsigned long) VAR_1) +
    VAR_5);
  const ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *VAR_9 =
    (const ATOM_PPLIB_VCE_Clock_Voltage_Limit_Table *)
    (((unsigned long) VAR_1) + VAR_7);
  VAR_4 = FUNC_14(VAR_0,
    &VAR_0->dyn_state.vce_clock_voltage_dependency_table,
    VAR_9, VAR_8);
 }

 VAR_6 = FUNC_9(VAR_0, VAR_1);
 VAR_7 = FUNC_11(VAR_0, VAR_1);

 if (VAR_6 > 0 && VAR_7 > 0) {
  const UVDClockInfoArray *VAR_10 = (const UVDClockInfoArray *)
    (((unsigned long) VAR_1) +
    VAR_6);
  const ATOM_PPLIB_UVD_Clock_Voltage_Limit_Table *VAR_11 =
    (const ATOM_PPLIB_UVD_Clock_Voltage_Limit_Table *)
    (((unsigned long) VAR_1) + VAR_7);
  VAR_4 = FUNC_10(VAR_0,
    &VAR_0->dyn_state.uvd_clock_voltage_dependency_table, VAR_11, VAR_10);
 }

 VAR_7 = FUNC_7(VAR_0,
           VAR_1);

 if (VAR_7 > 0) {
  const ATOM_PPLIB_SAMClk_Voltage_Limit_Table *VAR_12 =
    (const ATOM_PPLIB_SAMClk_Voltage_Limit_Table *)
    (((unsigned long) VAR_1) + VAR_7);
  VAR_4 = FUNC_6(VAR_0,
    &VAR_0->dyn_state.samu_clock_voltage_dependency_table, VAR_12);
 }

 VAR_7 = FUNC_1(VAR_0,
            VAR_1);

 if (VAR_7 > 0) {
  const ATOM_PPLIB_ACPClk_Voltage_Limit_Table *VAR_13 =
    (const ATOM_PPLIB_ACPClk_Voltage_Limit_Table *)
    (((unsigned long) VAR_1) + VAR_7);
  VAR_4 = FUNC_0(VAR_0,
    &VAR_0->dyn_state.acp_clock_voltage_dependency_table, VAR_13);
 }

 VAR_7 = FUNC_3(VAR_0, VAR_1);
 if (VAR_7 > 0) {
  UCHAR VAR_14 = *(UCHAR *)(((unsigned long)VAR_1) + VAR_7);

  if (VAR_14 > 0) {
   const ATOM_PPLIB_POWERTUNE_Table_V1 *VAR_15 =
    (const ATOM_PPLIB_POWERTUNE_Table_V1 *)
    (((unsigned long) VAR_1) + VAR_7);
   VAR_4 = FUNC_2(VAR_0, &VAR_0->dyn_state.cac_dtp_table,
    &VAR_15->power_tune_table,
    FUNC_16(VAR_15->usMaximumPowerDeliveryLimit));
   VAR_0->dyn_state.cac_dtp_table->usDefaultTargetOperatingTemp =
    FUNC_16(VAR_15->usTjMax);
  } else {
   const ATOM_PPLIB_POWERTUNE_Table *VAR_16 =
    (const ATOM_PPLIB_POWERTUNE_Table *)
    (((unsigned long) VAR_1) + VAR_7);
   VAR_4 = FUNC_2(VAR_0,
    &VAR_0->dyn_state.cac_dtp_table,
    &VAR_16->power_tune_table, 255);
  }
 }

 if (FUNC_16(VAR_1->usTableSize) >=
  sizeof(ATOM_PPLIB_POWERPLAYTABLE4)) {
  const ATOM_PPLIB_POWERPLAYTABLE4 *VAR_17 =
    (const ATOM_PPLIB_POWERPLAYTABLE4 *)VAR_1;
  if (0 != VAR_17->usVddcDependencyOnSCLKOffset) {
   VAR_2 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (((unsigned long) VAR_17) +
     FUNC_16(VAR_17->usVddcDependencyOnSCLKOffset));
   VAR_4 = FUNC_4(VAR_0,
    &VAR_0->dyn_state.vddc_dependency_on_sclk, VAR_2);
  }

  if (VAR_4 == 0 && (0 != VAR_17->usVddciDependencyOnMCLKOffset)) {
   VAR_2 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (((unsigned long) VAR_17) +
     FUNC_16(VAR_17->usVddciDependencyOnMCLKOffset));
   VAR_4 = FUNC_4(VAR_0,
    &VAR_0->dyn_state.vddci_dependency_on_mclk, VAR_2);
  }

  if (VAR_4 == 0 && (0 != VAR_17->usVddcDependencyOnMCLKOffset)) {
   VAR_2 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (((unsigned long) VAR_17) +
     FUNC_16(VAR_17->usVddcDependencyOnMCLKOffset));
   VAR_4 = FUNC_4(VAR_0,
    &VAR_0->dyn_state.vddc_dependency_on_mclk, VAR_2);
  }

  if (VAR_4 == 0 && (0 != VAR_17->usMaxClockVoltageOnDCOffset)) {
   VAR_3 = (ATOM_PPLIB_Clock_Voltage_Limit_Table *)
    (((unsigned long) VAR_17) +
     FUNC_16(VAR_17->usMaxClockVoltageOnDCOffset));
   VAR_4 = FUNC_5(VAR_0,
    &VAR_0->dyn_state.max_clock_voltage_on_dc, VAR_3);
  }

  if (VAR_4 == 0 && (((void*)0) != VAR_0->dyn_state.vddc_dependency_on_mclk) &&
   (0 != VAR_0->dyn_state.vddc_dependency_on_mclk->count))
   VAR_4 = FUNC_12(VAR_0, &VAR_0->dyn_state.valid_mclk_values,
     VAR_0->dyn_state.vddc_dependency_on_mclk);

  if(VAR_4 == 0 && (((void*)0) != VAR_0->dyn_state.vddc_dependency_on_sclk) &&
   (0 != VAR_0->dyn_state.vddc_dependency_on_sclk->count))
   VAR_4 = FUNC_12(VAR_0,
    &VAR_0->dyn_state.valid_sclk_values,
    VAR_0->dyn_state.vddc_dependency_on_sclk);

  if (VAR_4 == 0 && (0 != VAR_17->usMvddDependencyOnMCLKOffset)) {
   VAR_2 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
    (((unsigned long) VAR_17) +
     FUNC_16(VAR_17->usMvddDependencyOnMCLKOffset));
   VAR_4 = FUNC_4(VAR_0,
    &VAR_0->dyn_state.mvdd_dependency_on_mclk, VAR_2);
  }
 }

 VAR_7 = FUNC_8(VAR_0,
        VAR_1);

 if (VAR_7 > 0) {
  VAR_2 = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *)
   (((unsigned long) VAR_1) + VAR_7);
  VAR_4 = FUNC_4(VAR_0,
   &VAR_0->dyn_state.vdd_gfx_dependency_on_sclk, VAR_2);
 }

 return VAR_4;
}
