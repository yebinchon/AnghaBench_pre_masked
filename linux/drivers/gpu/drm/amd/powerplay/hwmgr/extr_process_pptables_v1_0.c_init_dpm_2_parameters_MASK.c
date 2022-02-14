
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ TDPODLimit; int VidMaxLimit; int VidStep; int platformCaps; scalar_t__ VidMinLimit; scalar_t__ VidAdjustmentPolarity; scalar_t__ VidAdjustment; scalar_t__ TDPAdjustment; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; scalar_t__ pptable; } ;
struct phm_ppt_v1_information {int * vddgfx_lookup_table; int * vddc_lookup_table; int * ppm_parameter_table; void* us_ulv_voltage_offset; } ;
struct TYPE_5__ {scalar_t__ usUlvVoltageOffset; scalar_t__ usPowerControlLimit; scalar_t__ usVddcLookupTableOffset; scalar_t__ usVddgfxLookupTableOffset; scalar_t__ usPPMTableOffset; } ;
typedef int ATOM_Tonga_Voltage_Lookup_Table ;
typedef int ATOM_Tonga_PPM_Table ;
typedef TYPE_2__ ATOM_Tonga_POWERPLAYTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pp_hwmgr*,int *) ;
 int FUNC_1 (struct pp_hwmgr*,int **,int const*,int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(
  struct pp_hwmgr *VAR_2,
  const ATOM_Tonga_POWERPLAYTABLE *VAR_3
  )
{
 int VAR_4 = 0;
 struct phm_ppt_v1_information *VAR_5 = (struct phm_ppt_v1_information *)(VAR_2->pptable);
 ATOM_Tonga_PPM_Table *VAR_6;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 VAR_5->us_ulv_voltage_offset =
  FUNC_2(VAR_3->usUlvVoltageOffset);

 VAR_5->ppm_parameter_table = ((void*)0);
 VAR_5->vddc_lookup_table = ((void*)0);
 VAR_5->vddgfx_lookup_table = ((void*)0);

 VAR_2->platform_descriptor.TDPODLimit =
  FUNC_2(VAR_3->usPowerControlLimit);
 VAR_2->platform_descriptor.TDPAdjustment = 0;
 VAR_2->platform_descriptor.VidAdjustment = 0;
 VAR_2->platform_descriptor.VidAdjustmentPolarity = 0;
 VAR_2->platform_descriptor.VidMinLimit = 0;
 VAR_2->platform_descriptor.VidMaxLimit = 1500000;
 VAR_2->platform_descriptor.VidStep = 6250;

 VAR_8 = 0;
 if (0 == VAR_8) {

  if (VAR_2->platform_descriptor.TDPODLimit != 0)
   FUNC_3(VAR_2->platform_descriptor.platformCaps,
   VAR_1);
 }

 if (0 != VAR_3->usVddcLookupTableOffset) {
  const ATOM_Tonga_Voltage_Lookup_Table *VAR_9 =
   (ATOM_Tonga_Voltage_Lookup_Table *)(((unsigned long)VAR_3) +
   FUNC_2(VAR_3->usVddcLookupTableOffset));

  VAR_4 = FUNC_1(VAR_2,
   &VAR_5->vddc_lookup_table, VAR_9, 16);
 }

 if (0 != VAR_3->usVddgfxLookupTableOffset) {
  const ATOM_Tonga_Voltage_Lookup_Table *VAR_10 =
   (ATOM_Tonga_Voltage_Lookup_Table *)(((unsigned long)VAR_3) +
   FUNC_2(VAR_3->usVddgfxLookupTableOffset));

  VAR_4 = FUNC_1(VAR_2,
   &VAR_5->vddgfx_lookup_table, VAR_10, 16);
 }

 VAR_7 = 0;
 if (0 == VAR_7) {
  VAR_6 = (ATOM_Tonga_PPM_Table *)
   (((unsigned long)VAR_3) + FUNC_2(VAR_3->usPPMTableOffset));

  if (0 != VAR_3->usPPMTableOffset) {
   if (FUNC_0(VAR_2, VAR_6) == 0) {
    FUNC_3(VAR_2->platform_descriptor.platformCaps,
     VAR_0);
   }
  }
 }

 return VAR_4;
}
