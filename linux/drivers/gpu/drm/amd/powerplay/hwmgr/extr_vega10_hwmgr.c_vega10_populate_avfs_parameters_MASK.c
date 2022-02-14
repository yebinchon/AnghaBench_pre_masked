
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef void* uint16_t ;
struct TYPE_22__ {int m1_shift; int m2_shift; scalar_t__ b_shift; int b; int m2; int m1; } ;
struct TYPE_21__ {int a0_shift; int a1_shift; int a2_shift; int a2; int a1; int a0; } ;
struct TYPE_18__ {int m1_shift; int m2_shift; scalar_t__ b_shift; void* b; void* m2; void* m1; } ;
struct TYPE_17__ {int m1_shift; int m2_shift; scalar_t__ b_shift; void* b; void* m2; void* m1; } ;
struct TYPE_16__ {int a0_shift; int a1_shift; int a2_shift; void* a2; void* a1; void* a0; } ;
struct TYPE_15__ {int a0_shift; int a1_shift; int a2_shift; void* a2; void* a1; void* a0; } ;
struct TYPE_13__ {TYPE_9__ AcgAvfsGb; TYPE_8__ AcgBtcGbVdroopTable; TYPE_7__* DisplayClock2Gfxclk; scalar_t__* StaticVoltageOffsetVid; TYPE_5__ AvfsGbCksOff; int OverrideAvfsGbCksOn; TYPE_4__ AvfsGbCksOn; TYPE_3__ BtcGbVdroopTableCksOn; int OverrideBtcGbCksOn; TYPE_2__ BtcGbVdroopTableCksOff; void* PSM_Age_CompFactor; void* Platform_sigma; void* Platform_mean; void* DC_tol_sigma; void** AConstant; void* MaxVoltageVid; void* MinVoltageVid; } ;
struct TYPE_14__ {TYPE_11__ pp_table; } ;
struct vega10_hwmgr {scalar_t__ disp_clk_quad_eqn_a; scalar_t__ disp_clk_quad_eqn_b; scalar_t__ dcef_clk_quad_eqn_a; scalar_t__ dcef_clk_quad_eqn_b; scalar_t__ pixel_clk_quad_eqn_a; scalar_t__ pixel_clk_quad_eqn_b; scalar_t__ phy_clk_quad_eqn_a; scalar_t__ phy_clk_quad_eqn_b; TYPE_10__* smu_features; scalar_t__ phy_clk_quad_eqn_c; scalar_t__ pixel_clk_quad_eqn_c; scalar_t__ dcef_clk_quad_eqn_c; scalar_t__ disp_clk_quad_eqn_c; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct pp_atomfwctrl_avfs_parameters {int ulAcgGbFuseTableB; int ulAcgGbFuseTableM2; int ulAcgGbFuseTableM1; int ulAcgGbVdroopTableA2; int ulAcgGbVdroopTableA1; int ulAcgGbVdroopTableA0; scalar_t__ ulPhyclk2GfxclkB; scalar_t__ ulPhyclk2GfxclkM2; scalar_t__ ulPhyclk2GfxclkM1; scalar_t__ ulPixelclk2GfxclkB; scalar_t__ ulPixelclk2GfxclkM2; scalar_t__ ulPixelclk2GfxclkM1; scalar_t__ ulDcefclk2GfxclkB; scalar_t__ ulDcefclk2GfxclkM2; scalar_t__ ulDcefclk2GfxclkM1; scalar_t__ ulDispclk2GfxclkB; scalar_t__ ulDispclk2GfxclkM2; scalar_t__ ulDispclk2GfxclkM1; int ulGbFuseTableCksoffB; int ulGbFuseTableCksoffM2; int ulGbFuseTableCksoffM1; int ucEnableGbFuseTableCkson; int ulGbFuseTableCksonB; int ulGbFuseTableCksonM2; int ulGbFuseTableCksonM1; int ulGbVdroopTableCksonA2; int ulGbVdroopTableCksonA1; int ulGbVdroopTableCksonA0; int ucEnableGbVdroopTableCkson; int ulGbVdroopTableCksoffA2; int ulGbVdroopTableCksoffA1; int ulGbVdroopTableCksoffA0; int usPsmAgeComfactor; int usMeanNsigmaDcTolSigma; int usMeanNsigmaPlatformMean; int ulMeanNsigmaAcontant2; int ulMeanNsigmaAcontant1; int ulMeanNsigmaAcontant0; scalar_t__ ulMaxVddc; scalar_t__ ulMinVddc; int member_0; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_6__* entries; } ;
typedef void* int32_t ;
struct TYPE_20__ {int m1_shift; int m2_shift; int b_shift; void* b; void* m2; void* m1; } ;
struct TYPE_19__ {scalar_t__ sclk_offset; } ;
struct TYPE_12__ {int supported; } ;
typedef TYPE_11__ PPTable_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct pp_hwmgr*,struct pp_atomfwctrl_avfs_parameters*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_6)
{
 struct vega10_hwmgr *VAR_7 = VAR_6->backend;
 PPTable_t *VAR_8 = &(VAR_7->smc_state_table.pp_table);
 struct phm_ppt_v2_information *VAR_9 =
   (struct phm_ppt_v2_information *)(VAR_6->pptable);
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_10 =
   VAR_9->vdd_dep_on_sclk;
 struct pp_atomfwctrl_avfs_parameters VAR_11 = {0};
 int VAR_12 = 0;
 uint32_t VAR_13;

 VAR_8->MinVoltageVid = (uint8_t)0xff;
 VAR_8->MaxVoltageVid = (uint8_t)0;

 if (VAR_7->smu_features[VAR_4].supported) {
  VAR_12 = FUNC_3(VAR_6, &VAR_11);
  if (!VAR_12) {
   VAR_8->MinVoltageVid = (uint8_t)
     FUNC_0((uint16_t)(VAR_11.ulMinVddc));
   VAR_8->MaxVoltageVid = (uint8_t)
     FUNC_0((uint16_t)(VAR_11.ulMaxVddc));

   VAR_8->AConstant[0] = FUNC_2(VAR_11.ulMeanNsigmaAcontant0);
   VAR_8->AConstant[1] = FUNC_2(VAR_11.ulMeanNsigmaAcontant1);
   VAR_8->AConstant[2] = FUNC_2(VAR_11.ulMeanNsigmaAcontant2);
   VAR_8->DC_tol_sigma = FUNC_1(VAR_11.usMeanNsigmaDcTolSigma);
   VAR_8->Platform_mean = FUNC_1(VAR_11.usMeanNsigmaPlatformMean);
   VAR_8->Platform_sigma = FUNC_1(VAR_11.usMeanNsigmaDcTolSigma);
   VAR_8->PSM_Age_CompFactor = FUNC_1(VAR_11.usPsmAgeComfactor);

   VAR_8->BtcGbVdroopTableCksOff.a0 =
     FUNC_2(VAR_11.ulGbVdroopTableCksoffA0);
   VAR_8->BtcGbVdroopTableCksOff.a0_shift = 20;
   VAR_8->BtcGbVdroopTableCksOff.a1 =
     FUNC_2(VAR_11.ulGbVdroopTableCksoffA1);
   VAR_8->BtcGbVdroopTableCksOff.a1_shift = 20;
   VAR_8->BtcGbVdroopTableCksOff.a2 =
     FUNC_2(VAR_11.ulGbVdroopTableCksoffA2);
   VAR_8->BtcGbVdroopTableCksOff.a2_shift = 20;

   VAR_8->OverrideBtcGbCksOn = VAR_11.ucEnableGbVdroopTableCkson;
   VAR_8->BtcGbVdroopTableCksOn.a0 =
     FUNC_2(VAR_11.ulGbVdroopTableCksonA0);
   VAR_8->BtcGbVdroopTableCksOn.a0_shift = 20;
   VAR_8->BtcGbVdroopTableCksOn.a1 =
     FUNC_2(VAR_11.ulGbVdroopTableCksonA1);
   VAR_8->BtcGbVdroopTableCksOn.a1_shift = 20;
   VAR_8->BtcGbVdroopTableCksOn.a2 =
     FUNC_2(VAR_11.ulGbVdroopTableCksonA2);
   VAR_8->BtcGbVdroopTableCksOn.a2_shift = 20;

   VAR_8->AvfsGbCksOn.m1 =
     FUNC_2(VAR_11.ulGbFuseTableCksonM1);
   VAR_8->AvfsGbCksOn.m2 =
     FUNC_2(VAR_11.ulGbFuseTableCksonM2);
   VAR_8->AvfsGbCksOn.b =
     FUNC_2(VAR_11.ulGbFuseTableCksonB);
   VAR_8->AvfsGbCksOn.m1_shift = 24;
   VAR_8->AvfsGbCksOn.m2_shift = 12;
   VAR_8->AvfsGbCksOn.b_shift = 0;

   VAR_8->OverrideAvfsGbCksOn =
     VAR_11.ucEnableGbFuseTableCkson;
   VAR_8->AvfsGbCksOff.m1 =
     FUNC_2(VAR_11.ulGbFuseTableCksoffM1);
   VAR_8->AvfsGbCksOff.m2 =
     FUNC_2(VAR_11.ulGbFuseTableCksoffM2);
   VAR_8->AvfsGbCksOff.b =
     FUNC_2(VAR_11.ulGbFuseTableCksoffB);
   VAR_8->AvfsGbCksOff.m1_shift = 24;
   VAR_8->AvfsGbCksOff.m2_shift = 12;
   VAR_8->AvfsGbCksOff.b_shift = 0;

   for (VAR_13 = 0; VAR_13 < VAR_10->count; VAR_13++)
    VAR_8->StaticVoltageOffsetVid[VAR_13] =
      FUNC_0((uint8_t)(VAR_10->entries[VAR_13].sclk_offset));

   if ((VAR_5 !=
     VAR_7->disp_clk_quad_eqn_a) &&
    (VAR_5 !=
     VAR_7->disp_clk_quad_eqn_b)) {
    VAR_8->DisplayClock2Gfxclk[VAR_1].m1 =
      (int32_t)VAR_7->disp_clk_quad_eqn_a;
    VAR_8->DisplayClock2Gfxclk[VAR_1].m2 =
      (int32_t)VAR_7->disp_clk_quad_eqn_b;
    VAR_8->DisplayClock2Gfxclk[VAR_1].b =
      (int32_t)VAR_7->disp_clk_quad_eqn_c;
   } else {
    VAR_8->DisplayClock2Gfxclk[VAR_1].m1 =
      (int32_t)VAR_11.ulDispclk2GfxclkM1;
    VAR_8->DisplayClock2Gfxclk[VAR_1].m2 =
      (int32_t)VAR_11.ulDispclk2GfxclkM2;
    VAR_8->DisplayClock2Gfxclk[VAR_1].b =
      (int32_t)VAR_11.ulDispclk2GfxclkB;
   }

   VAR_8->DisplayClock2Gfxclk[VAR_1].m1_shift = 24;
   VAR_8->DisplayClock2Gfxclk[VAR_1].m2_shift = 12;
   VAR_8->DisplayClock2Gfxclk[VAR_1].b_shift = 12;

   if ((VAR_5 !=
     VAR_7->dcef_clk_quad_eqn_a) &&
    (VAR_5 !=
     VAR_7->dcef_clk_quad_eqn_b)) {
    VAR_8->DisplayClock2Gfxclk[VAR_0].m1 =
      (int32_t)VAR_7->dcef_clk_quad_eqn_a;
    VAR_8->DisplayClock2Gfxclk[VAR_0].m2 =
      (int32_t)VAR_7->dcef_clk_quad_eqn_b;
    VAR_8->DisplayClock2Gfxclk[VAR_0].b =
      (int32_t)VAR_7->dcef_clk_quad_eqn_c;
   } else {
    VAR_8->DisplayClock2Gfxclk[VAR_0].m1 =
      (int32_t)VAR_11.ulDcefclk2GfxclkM1;
    VAR_8->DisplayClock2Gfxclk[VAR_0].m2 =
      (int32_t)VAR_11.ulDcefclk2GfxclkM2;
    VAR_8->DisplayClock2Gfxclk[VAR_0].b =
      (int32_t)VAR_11.ulDcefclk2GfxclkB;
   }

   VAR_8->DisplayClock2Gfxclk[VAR_0].m1_shift = 24;
   VAR_8->DisplayClock2Gfxclk[VAR_0].m2_shift = 12;
   VAR_8->DisplayClock2Gfxclk[VAR_0].b_shift = 12;

   if ((VAR_5 !=
     VAR_7->pixel_clk_quad_eqn_a) &&
    (VAR_5 !=
     VAR_7->pixel_clk_quad_eqn_b)) {
    VAR_8->DisplayClock2Gfxclk[VAR_3].m1 =
      (int32_t)VAR_7->pixel_clk_quad_eqn_a;
    VAR_8->DisplayClock2Gfxclk[VAR_3].m2 =
      (int32_t)VAR_7->pixel_clk_quad_eqn_b;
    VAR_8->DisplayClock2Gfxclk[VAR_3].b =
      (int32_t)VAR_7->pixel_clk_quad_eqn_c;
   } else {
    VAR_8->DisplayClock2Gfxclk[VAR_3].m1 =
      (int32_t)VAR_11.ulPixelclk2GfxclkM1;
    VAR_8->DisplayClock2Gfxclk[VAR_3].m2 =
      (int32_t)VAR_11.ulPixelclk2GfxclkM2;
    VAR_8->DisplayClock2Gfxclk[VAR_3].b =
      (int32_t)VAR_11.ulPixelclk2GfxclkB;
   }

   VAR_8->DisplayClock2Gfxclk[VAR_3].m1_shift = 24;
   VAR_8->DisplayClock2Gfxclk[VAR_3].m2_shift = 12;
   VAR_8->DisplayClock2Gfxclk[VAR_3].b_shift = 12;
   if ((VAR_5 !=
     VAR_7->phy_clk_quad_eqn_a) &&
    (VAR_5 !=
     VAR_7->phy_clk_quad_eqn_b)) {
    VAR_8->DisplayClock2Gfxclk[VAR_2].m1 =
      (int32_t)VAR_7->phy_clk_quad_eqn_a;
    VAR_8->DisplayClock2Gfxclk[VAR_2].m2 =
      (int32_t)VAR_7->phy_clk_quad_eqn_b;
    VAR_8->DisplayClock2Gfxclk[VAR_2].b =
      (int32_t)VAR_7->phy_clk_quad_eqn_c;
   } else {
    VAR_8->DisplayClock2Gfxclk[VAR_2].m1 =
      (int32_t)VAR_11.ulPhyclk2GfxclkM1;
    VAR_8->DisplayClock2Gfxclk[VAR_2].m2 =
      (int32_t)VAR_11.ulPhyclk2GfxclkM2;
    VAR_8->DisplayClock2Gfxclk[VAR_2].b =
      (int32_t)VAR_11.ulPhyclk2GfxclkB;
   }

   VAR_8->DisplayClock2Gfxclk[VAR_2].m1_shift = 24;
   VAR_8->DisplayClock2Gfxclk[VAR_2].m2_shift = 12;
   VAR_8->DisplayClock2Gfxclk[VAR_2].b_shift = 12;

   VAR_8->AcgBtcGbVdroopTable.a0 = VAR_11.ulAcgGbVdroopTableA0;
   VAR_8->AcgBtcGbVdroopTable.a0_shift = 20;
   VAR_8->AcgBtcGbVdroopTable.a1 = VAR_11.ulAcgGbVdroopTableA1;
   VAR_8->AcgBtcGbVdroopTable.a1_shift = 20;
   VAR_8->AcgBtcGbVdroopTable.a2 = VAR_11.ulAcgGbVdroopTableA2;
   VAR_8->AcgBtcGbVdroopTable.a2_shift = 20;

   VAR_8->AcgAvfsGb.m1 = VAR_11.ulAcgGbFuseTableM1;
   VAR_8->AcgAvfsGb.m2 = VAR_11.ulAcgGbFuseTableM2;
   VAR_8->AcgAvfsGb.b = VAR_11.ulAcgGbFuseTableB;
   VAR_8->AcgAvfsGb.m1_shift = 24;
   VAR_8->AcgAvfsGb.m2_shift = 12;
   VAR_8->AcgAvfsGb.b_shift = 0;

  } else {
   VAR_7->smu_features[VAR_4].supported = 0;
  }
 }

 return 0;
}
