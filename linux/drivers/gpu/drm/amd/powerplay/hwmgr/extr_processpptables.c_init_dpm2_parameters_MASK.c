
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_10__ {int VidMaxLimit; int VidStep; int platformCaps; scalar_t__ LoadLineSlope; void* CACLeakage; void* SQRampingThreshold; scalar_t__ TDPODLimit; void* nearTDPLimitAdjusted; scalar_t__ VidMinLimit; scalar_t__ VidAdjustmentPolarity; scalar_t__ VidAdjustment; scalar_t__ TDPAdjustment; void* nearTDPLimit; void* TDPLimit; } ;
struct TYPE_9__ {int * ppm_parameter_table; int * cac_leakage_table; } ;
struct pp_hwmgr {TYPE_2__ platform_descriptor; TYPE_1__ dyn_state; } ;
struct TYPE_15__ {scalar_t__ usPPMTableOffset; scalar_t__ usSize; } ;
struct TYPE_14__ {scalar_t__ usTableSize; } ;
struct TYPE_13__ {scalar_t__ usExtendendedHeaderOffset; } ;
struct TYPE_12__ {int basicTable3; } ;
struct TYPE_11__ {scalar_t__ usTDPODLimit; scalar_t__ usCACLeakageTableOffset; scalar_t__ usLoadLineSlope; int ulCACLeakage; int ulSQRampingThreshold; int ulNearTDPLimit; int ulTDPLimit; int basicTable4; } ;
typedef int ATOM_PPLIB_PPM_Table ;
typedef TYPE_3__ ATOM_PPLIB_POWERPLAYTABLE5 ;
typedef TYPE_4__ ATOM_PPLIB_POWERPLAYTABLE4 ;
typedef TYPE_5__ ATOM_PPLIB_POWERPLAYTABLE3 ;
typedef TYPE_6__ ATOM_PPLIB_POWERPLAYTABLE ;
typedef TYPE_7__ ATOM_PPLIB_EXTENDEDHEADER ;
typedef int ATOM_PPLIB_CAC_Leakage_Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int **,int const*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_3,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_2(VAR_4->usTableSize) >=
     sizeof(ATOM_PPLIB_POWERPLAYTABLE5)) {
  const ATOM_PPLIB_POWERPLAYTABLE5 *VAR_6 =
    (const ATOM_PPLIB_POWERPLAYTABLE5 *)VAR_4;
  const ATOM_PPLIB_POWERPLAYTABLE4 *VAR_7 =
    (const ATOM_PPLIB_POWERPLAYTABLE4 *)
    (&VAR_6->basicTable4);
  const ATOM_PPLIB_POWERPLAYTABLE3 *VAR_8 =
    (const ATOM_PPLIB_POWERPLAYTABLE3 *)
    (&VAR_7->basicTable3);
  const ATOM_PPLIB_EXTENDEDHEADER *VAR_9;
  uint16_t VAR_10;
  ATOM_PPLIB_PPM_Table *VAR_11;

  VAR_3->platform_descriptor.TDPLimit = FUNC_3(VAR_6->ulTDPLimit);
  VAR_3->platform_descriptor.nearTDPLimit = FUNC_3(VAR_6->ulNearTDPLimit);

  VAR_3->platform_descriptor.TDPODLimit = FUNC_2(VAR_6->usTDPODLimit);
  VAR_3->platform_descriptor.TDPAdjustment = 0;

  VAR_3->platform_descriptor.VidAdjustment = 0;
  VAR_3->platform_descriptor.VidAdjustmentPolarity = 0;
  VAR_3->platform_descriptor.VidMinLimit = 0;
  VAR_3->platform_descriptor.VidMaxLimit = 1500000;
  VAR_3->platform_descriptor.VidStep = 6250;

  VAR_3->platform_descriptor.nearTDPLimitAdjusted = FUNC_3(VAR_6->ulNearTDPLimit);

  if (VAR_3->platform_descriptor.TDPODLimit != 0)
   FUNC_4(VAR_3->platform_descriptor.platformCaps,
     VAR_1);

  VAR_3->platform_descriptor.SQRampingThreshold = FUNC_3(VAR_6->ulSQRampingThreshold);

  VAR_3->platform_descriptor.CACLeakage = FUNC_3(VAR_6->ulCACLeakage);

  VAR_3->dyn_state.cac_leakage_table = ((void*)0);

  if (0 != VAR_6->usCACLeakageTableOffset) {
   const ATOM_PPLIB_CAC_Leakage_Table *VAR_12 =
    (ATOM_PPLIB_CAC_Leakage_Table *)(((unsigned long)VAR_6) +
    FUNC_2(VAR_6->usCACLeakageTableOffset));
   VAR_5 = FUNC_0(VAR_3,
    &VAR_3->dyn_state.cac_leakage_table, VAR_12);
  }

  VAR_3->platform_descriptor.LoadLineSlope = FUNC_2(VAR_6->usLoadLineSlope);

  VAR_3->dyn_state.ppm_parameter_table = ((void*)0);

  if (0 != VAR_8->usExtendendedHeaderOffset) {
   VAR_9 = (const ATOM_PPLIB_EXTENDEDHEADER *)
     (((unsigned long)VAR_4) +
     FUNC_2(VAR_8->usExtendendedHeaderOffset));
   if ((VAR_9->usPPMTableOffset > 0) &&
    FUNC_2(VAR_9->usSize) >=
        VAR_2) {
    VAR_10 = FUNC_2(VAR_9->usPPMTableOffset);
    VAR_11 = (ATOM_PPLIB_PPM_Table *)
     (((unsigned long)VAR_4) + VAR_10);
    if (0 == FUNC_1(VAR_3, VAR_11))
     FUNC_4(VAR_3->platform_descriptor.platformCaps,
      VAR_0);
   }
  }
 }
 return VAR_5;
}
