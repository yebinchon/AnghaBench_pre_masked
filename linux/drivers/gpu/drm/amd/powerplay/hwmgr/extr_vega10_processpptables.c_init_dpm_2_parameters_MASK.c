
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int VidMaxLimit; int VidStep; int platformCaps; void* TDPODLimit; scalar_t__ VidMinLimit; scalar_t__ VidAdjustmentPolarity; scalar_t__ VidAdjustment; scalar_t__ TDPAdjustment; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; scalar_t__ pptable; } ;
struct phm_ppt_v2_information {int * vddci_lookup_table; int * vddmem_lookup_table; int * vddc_lookup_table; int * ppm_parameter_table; void* uc_dcef_dpm_voltage_mode; void* uc_mp0_dpm_voltage_mode; void* uc_vce_dpm_voltage_mode; void* uc_uvd_dpm_voltage_mode; void* uc_uclk_dpm_voltage_mode; void* uc_soc_dpm_voltage_mode; void* uc_gfx_dpm_voltage_mode; void* us_gfxclk_slew_rate; void* us_ulv_gfxclk_bypass; void* us_ulv_mp1clk_did; void* us_ulv_smnclk_did; void* us_ulv_voltage_offset; } ;
struct TYPE_5__ {scalar_t__ usVddciLookupTableOffset; scalar_t__ usVddmemLookupTableOffset; scalar_t__ usVddcLookupTableOffset; scalar_t__ usPowerControlLimit; scalar_t__ ucDcefVoltageMode; scalar_t__ ucMp0VoltageMode; scalar_t__ ucVceVoltageMode; scalar_t__ ucUvdVoltageMode; scalar_t__ ucUclkVoltageMode; scalar_t__ ucSocVoltageMode; scalar_t__ ucGfxVoltageMode; scalar_t__ usGfxclkSlewRate; scalar_t__ usUlvGfxclkBypass; scalar_t__ usUlvMp1clkDid; scalar_t__ usUlvSmnclkDid; scalar_t__ usUlvVoltageOffset; } ;
typedef int ATOM_Vega10_Voltage_Lookup_Table ;
typedef TYPE_2__ ATOM_Vega10_POWERPLAYTABLE ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int **,int const*,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(
  struct pp_hwmgr *VAR_1,
  const ATOM_Vega10_POWERPLAYTABLE *VAR_2)
{
 int VAR_3 = 0;
 struct phm_ppt_v2_information *VAR_4 =
   (struct phm_ppt_v2_information *)(VAR_1->pptable);
 uint32_t VAR_5 = 0;

 VAR_4->us_ulv_voltage_offset =
  FUNC_1(VAR_2->usUlvVoltageOffset);

 VAR_4->us_ulv_smnclk_did =
   FUNC_1(VAR_2->usUlvSmnclkDid);
 VAR_4->us_ulv_mp1clk_did =
   FUNC_1(VAR_2->usUlvMp1clkDid);
 VAR_4->us_ulv_gfxclk_bypass =
   FUNC_1(VAR_2->usUlvGfxclkBypass);
 VAR_4->us_gfxclk_slew_rate =
   FUNC_1(VAR_2->usGfxclkSlewRate);
 VAR_4->uc_gfx_dpm_voltage_mode =
   FUNC_1(VAR_2->ucGfxVoltageMode);
 VAR_4->uc_soc_dpm_voltage_mode =
   FUNC_1(VAR_2->ucSocVoltageMode);
 VAR_4->uc_uclk_dpm_voltage_mode =
   FUNC_1(VAR_2->ucUclkVoltageMode);
 VAR_4->uc_uvd_dpm_voltage_mode =
   FUNC_1(VAR_2->ucUvdVoltageMode);
 VAR_4->uc_vce_dpm_voltage_mode =
   FUNC_1(VAR_2->ucVceVoltageMode);
 VAR_4->uc_mp0_dpm_voltage_mode =
   FUNC_1(VAR_2->ucMp0VoltageMode);
 VAR_4->uc_dcef_dpm_voltage_mode =
   FUNC_1(VAR_2->ucDcefVoltageMode);

 VAR_4->ppm_parameter_table = ((void*)0);
 VAR_4->vddc_lookup_table = ((void*)0);
 VAR_4->vddmem_lookup_table = ((void*)0);
 VAR_4->vddci_lookup_table = ((void*)0);


 VAR_1->platform_descriptor.TDPODLimit =
  FUNC_1(VAR_2->usPowerControlLimit);
 VAR_1->platform_descriptor.TDPAdjustment = 0;
 VAR_1->platform_descriptor.VidAdjustment = 0;
 VAR_1->platform_descriptor.VidAdjustmentPolarity = 0;
 VAR_1->platform_descriptor.VidMinLimit = 0;
 VAR_1->platform_descriptor.VidMaxLimit = 1500000;
 VAR_1->platform_descriptor.VidStep = 6250;

 VAR_5 = 0;
 if (!VAR_5) {

  if (VAR_1->platform_descriptor.TDPODLimit)
   FUNC_2(VAR_1->platform_descriptor.platformCaps,
   VAR_0);
 }

 if (VAR_2->usVddcLookupTableOffset) {
  const ATOM_Vega10_Voltage_Lookup_Table *VAR_6 =
    (ATOM_Vega10_Voltage_Lookup_Table *)
    (((unsigned long)VAR_2) +
    FUNC_1(VAR_2->usVddcLookupTableOffset));
  VAR_3 = FUNC_0(VAR_1,
    &VAR_4->vddc_lookup_table, VAR_6, 8);
 }

 if (VAR_2->usVddmemLookupTableOffset) {
  const ATOM_Vega10_Voltage_Lookup_Table *VAR_7 =
    (ATOM_Vega10_Voltage_Lookup_Table *)
    (((unsigned long)VAR_2) +
    FUNC_1(VAR_2->usVddmemLookupTableOffset));
  VAR_3 = FUNC_0(VAR_1,
    &VAR_4->vddmem_lookup_table, VAR_7, 4);
 }

 if (VAR_2->usVddciLookupTableOffset) {
  const ATOM_Vega10_Voltage_Lookup_Table *VAR_8 =
    (ATOM_Vega10_Voltage_Lookup_Table *)
    (((unsigned long)VAR_2) +
    FUNC_1(VAR_2->usVddciLookupTableOffset));
  VAR_3 = FUNC_0(VAR_1,
    &VAR_4->vddci_lookup_table, VAR_8, 4);
 }

 return VAR_3;
}
