
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {void* MaxVoltage; TYPE_4__* AVFSGB_FUSE_TABLE; TYPE_3__* BTCGB_VDROOP_TABLE; } ;
struct vegam_smumgr {TYPE_6__ smc_state_table; } ;
struct smu7_hwmgr {int avfs_vdroop_override_setting; int apply_avfs_cks_off_voltage; } ;
struct pp_hwmgr {int avfs_supported; scalar_t__ pptable; scalar_t__ smu_backend; scalar_t__ backend; } ;
struct pp_atom_ctrl__avfs_parameters {int usAVFSGB_FUSE_TABLE_CKSON_m2; int usAVFSGB_FUSE_TABLE_CKSOFF_m2; int usMaxVoltage_0_25mv; int usAVFS_meanNsigma_DC_tol_sigma; int usAVFS_meanNsigma_Platform_mean; int usPSM_Age_ComFactor; int usAVFS_meanNsigma_Platform_sigma; int ucEnableGB_VDROOP_TABLE_CKSON; int ucEnableGB_VDROOP_TABLE_CKSOFF; int ucEnableGB_FUSE_TABLE_CKSON; int ucEnableGB_FUSE_TABLE_CKSOFF; int ucEnableApplyAVFS_CKS_OFF_Voltage; int ulAVFS_meanNsigma_Acontant2; int ulAVFS_meanNsigma_Acontant1; int ulAVFS_meanNsigma_Acontant0; int ulAVFSGB_FUSE_TABLE_CKSOFF_b; int ulAVFSGB_FUSE_TABLE_CKSOFF_m1; int ulAVFSGB_FUSE_TABLE_CKSON_b; int ulAVFSGB_FUSE_TABLE_CKSON_m1; int ulGB_VDROOP_TABLE_CKSOFF_a2; int ulGB_VDROOP_TABLE_CKSOFF_a1; int ulGB_VDROOP_TABLE_CKSOFF_a0; int ulGB_VDROOP_TABLE_CKSON_a2; int ulGB_VDROOP_TABLE_CKSON_a1; int ulGB_VDROOP_TABLE_CKSON_a0; int member_0; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_5__* entries; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_16__ {void** Sclk_Offset; TYPE_2__ member_0; } ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_15__ {scalar_t__* Static_Voltage_Offset; void* Platform_sigma; void* PSM_Age_CompFactor; void* Platform_mean; void* DC_tol_sigma; void** Aconstant; TYPE_1__ member_0; } ;
struct TYPE_13__ {int cks_voffset; scalar_t__ sclk_offset; } ;
struct TYPE_12__ {int m1_shift; int m2_shift; void* b; void* m2; void* m1; } ;
struct TYPE_11__ {void* a2; void* a1; void* a0; } ;
typedef TYPE_6__ SMU75_Discrete_DpmTable ;
typedef TYPE_7__ AVFS_meanNsigma_t ;
typedef TYPE_8__ AVFS_Sclk_Offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct pp_hwmgr*,struct pp_atom_ctrl__avfs_parameters*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pp_hwmgr*,size_t,scalar_t__*,int,int ) ;
 int FUNC_5 (struct pp_hwmgr*,scalar_t__,size_t*,int ) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_9)
{
 struct smu7_hwmgr *VAR_10 = (struct smu7_hwmgr *)(VAR_9->backend);
 struct vegam_smumgr *VAR_11 = (struct vegam_smumgr *)(VAR_9->smu_backend);

 SMU75_Discrete_DpmTable *VAR_12 = &(VAR_11->smc_state_table);
 int VAR_13 = 0;
 struct pp_atom_ctrl__avfs_parameters VAR_14 = {0};
 AVFS_meanNsigma_t VAR_15 = { 0 };
 AVFS_Sclk_Offset_t VAR_16 = { 0 };
 uint32_t VAR_17, VAR_18;

 struct phm_ppt_v1_information *VAR_19 =
   (struct phm_ppt_v1_information *)VAR_9->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_20 =
   VAR_19->vdd_dep_on_sclk;

 if (!VAR_9->avfs_supported)
  return 0;

 VAR_13 = FUNC_2(VAR_9, &VAR_14);

 if (0 == VAR_13) {
  VAR_12->BTCGB_VDROOP_TABLE[0].a0 =
    FUNC_0(VAR_14.ulGB_VDROOP_TABLE_CKSON_a0);
  VAR_12->BTCGB_VDROOP_TABLE[0].a1 =
    FUNC_0(VAR_14.ulGB_VDROOP_TABLE_CKSON_a1);
  VAR_12->BTCGB_VDROOP_TABLE[0].a2 =
    FUNC_0(VAR_14.ulGB_VDROOP_TABLE_CKSON_a2);
  VAR_12->BTCGB_VDROOP_TABLE[1].a0 =
    FUNC_0(VAR_14.ulGB_VDROOP_TABLE_CKSOFF_a0);
  VAR_12->BTCGB_VDROOP_TABLE[1].a1 =
    FUNC_0(VAR_14.ulGB_VDROOP_TABLE_CKSOFF_a1);
  VAR_12->BTCGB_VDROOP_TABLE[1].a2 =
    FUNC_0(VAR_14.ulGB_VDROOP_TABLE_CKSOFF_a2);
  VAR_12->AVFSGB_FUSE_TABLE[0].m1 =
    FUNC_0(VAR_14.ulAVFSGB_FUSE_TABLE_CKSON_m1);
  VAR_12->AVFSGB_FUSE_TABLE[0].m2 =
    FUNC_1(VAR_14.usAVFSGB_FUSE_TABLE_CKSON_m2);
  VAR_12->AVFSGB_FUSE_TABLE[0].b =
    FUNC_0(VAR_14.ulAVFSGB_FUSE_TABLE_CKSON_b);
  VAR_12->AVFSGB_FUSE_TABLE[0].m1_shift = 24;
  VAR_12->AVFSGB_FUSE_TABLE[0].m2_shift = 12;
  VAR_12->AVFSGB_FUSE_TABLE[1].m1 =
    FUNC_0(VAR_14.ulAVFSGB_FUSE_TABLE_CKSOFF_m1);
  VAR_12->AVFSGB_FUSE_TABLE[1].m2 =
    FUNC_1(VAR_14.usAVFSGB_FUSE_TABLE_CKSOFF_m2);
  VAR_12->AVFSGB_FUSE_TABLE[1].b =
    FUNC_0(VAR_14.ulAVFSGB_FUSE_TABLE_CKSOFF_b);
  VAR_12->AVFSGB_FUSE_TABLE[1].m1_shift = 24;
  VAR_12->AVFSGB_FUSE_TABLE[1].m2_shift = 12;
  VAR_12->MaxVoltage = FUNC_1(VAR_14.usMaxVoltage_0_25mv);
  VAR_15.Aconstant[0] =
    FUNC_0(VAR_14.ulAVFS_meanNsigma_Acontant0);
  VAR_15.Aconstant[1] =
    FUNC_0(VAR_14.ulAVFS_meanNsigma_Acontant1);
  VAR_15.Aconstant[2] =
    FUNC_0(VAR_14.ulAVFS_meanNsigma_Acontant2);
  VAR_15.DC_tol_sigma =
    FUNC_1(VAR_14.usAVFS_meanNsigma_DC_tol_sigma);
  VAR_15.Platform_mean =
    FUNC_1(VAR_14.usAVFS_meanNsigma_Platform_mean);
  VAR_15.PSM_Age_CompFactor =
    FUNC_1(VAR_14.usPSM_Age_ComFactor);
  VAR_15.Platform_sigma =
    FUNC_1(VAR_14.usAVFS_meanNsigma_Platform_sigma);

  for (VAR_18 = 0; VAR_18 < VAR_20->count; VAR_18++) {
   VAR_15.Static_Voltage_Offset[VAR_18] =
     (uint8_t)(VAR_20->entries[VAR_18].cks_voffset * 100 / 625);
   VAR_16.Sclk_Offset[VAR_18] =
     FUNC_1((uint16_t)
       (VAR_20->entries[VAR_18].sclk_offset) / 100);
  }

  VAR_13 = FUNC_5(VAR_9,
    VAR_8 +
    FUNC_3(VAR_7, VAR_2),
    &VAR_17, VAR_6);
  FUNC_4(VAR_9,
     VAR_17,
     (uint8_t *)&VAR_15,
     sizeof(AVFS_meanNsigma_t),
     VAR_6);

  VAR_13 = FUNC_5(VAR_9,
    VAR_8 +
    FUNC_3(VAR_7, VAR_3),
    &VAR_17, VAR_6);
  FUNC_4(VAR_9,
     VAR_17,
     (uint8_t *)&VAR_16,
     sizeof(AVFS_Sclk_Offset_t),
     VAR_6);

  VAR_10->avfs_vdroop_override_setting =
    (VAR_14.ucEnableGB_VDROOP_TABLE_CKSON << VAR_4) |
    (VAR_14.ucEnableGB_VDROOP_TABLE_CKSOFF << VAR_5) |
    (VAR_14.ucEnableGB_FUSE_TABLE_CKSON << VAR_0) |
    (VAR_14.ucEnableGB_FUSE_TABLE_CKSOFF << VAR_1);
  VAR_10->apply_avfs_cks_off_voltage =
    (VAR_14.ucEnableApplyAVFS_CKS_OFF_Voltage == 1) ? 1 : 0;
 }
 return VAR_13;
}
