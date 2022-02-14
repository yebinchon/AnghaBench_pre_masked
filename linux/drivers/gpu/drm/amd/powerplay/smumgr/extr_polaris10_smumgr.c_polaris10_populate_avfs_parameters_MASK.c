
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct smu7_hwmgr {int avfs_vdroop_override_setting; int apply_avfs_cks_off_voltage; } ;
struct pp_hwmgr {scalar_t__ chip_id; int is_kicker; int avfs_supported; scalar_t__ pptable; struct amdgpu_device* adev; scalar_t__ smu_backend; scalar_t__ backend; } ;
struct pp_atom_ctrl__avfs_parameters {int ucEnableApplyAVFS_CKS_OFF_Voltage; int ulGB_VDROOP_TABLE_CKSOFF_a0; int ulGB_VDROOP_TABLE_CKSOFF_a1; int ulGB_VDROOP_TABLE_CKSOFF_a2; int ulAVFSGB_FUSE_TABLE_CKSOFF_m1; int usAVFSGB_FUSE_TABLE_CKSOFF_m2; int ulAVFSGB_FUSE_TABLE_CKSOFF_b; int ulGB_VDROOP_TABLE_CKSON_a0; int ulGB_VDROOP_TABLE_CKSON_a1; int ulGB_VDROOP_TABLE_CKSON_a2; int ulAVFSGB_FUSE_TABLE_CKSON_m1; int usAVFSGB_FUSE_TABLE_CKSON_m2; int ulAVFSGB_FUSE_TABLE_CKSON_b; int usMaxVoltage_0_25mv; int ulAVFS_meanNsigma_Acontant0; int ulAVFS_meanNsigma_Acontant1; int ulAVFS_meanNsigma_Acontant2; int usAVFS_meanNsigma_DC_tol_sigma; int usAVFS_meanNsigma_Platform_mean; int usPSM_Age_ComFactor; int usAVFS_meanNsigma_Platform_sigma; int ucEnableGB_VDROOP_TABLE_CKSON; int ucEnableGB_VDROOP_TABLE_CKSOFF; int ucEnableGB_FUSE_TABLE_CKSON; int ucEnableGB_FUSE_TABLE_CKSOFF; int member_0; } ;
struct TYPE_16__ {void* MaxVoltage; TYPE_2__* AVFSGB_VDROOP_TABLE; TYPE_1__* BTCGB_VDROOP_TABLE; } ;
struct polaris10_smumgr {TYPE_7__ smc_state_table; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {TYPE_3__* entries; } ;
struct amdgpu_device {TYPE_6__* pdev; } ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_18__ {void** Sclk_Offset; TYPE_5__ member_0; } ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_17__ {scalar_t__* Static_Voltage_Offset; void* Platform_sigma; void* PSM_Age_CompFactor; void* Platform_mean; void* DC_tol_sigma; void** Aconstant; TYPE_4__ member_0; } ;
struct TYPE_15__ {int device; int revision; } ;
struct TYPE_12__ {int cks_voffset; scalar_t__ sclk_offset; } ;
struct TYPE_11__ {int m1_shift; int m2_shift; void* b; void* m2; void* m1; } ;
struct TYPE_10__ {void* a2; void* a1; void* a0; } ;
typedef TYPE_7__ SMU74_Discrete_DpmTable ;
typedef TYPE_8__ AVFS_meanNsigma_t ;
typedef TYPE_9__ AVFS_Sclk_Offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct pp_hwmgr*,struct pp_atom_ctrl__avfs_parameters*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pp_hwmgr*,size_t,scalar_t__*,int,int ) ;
 int FUNC_5 (struct pp_hwmgr*,scalar_t__,size_t*,int ) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_11)
{
 struct smu7_hwmgr *VAR_12 = (struct smu7_hwmgr *)(VAR_11->backend);
 struct polaris10_smumgr *VAR_13 = (struct polaris10_smumgr *)(VAR_11->smu_backend);
 struct amdgpu_device *VAR_14 = VAR_11->adev;

 SMU74_Discrete_DpmTable *VAR_15 = &(VAR_13->smc_state_table);
 int VAR_16 = 0;
 struct pp_atom_ctrl__avfs_parameters VAR_17 = {0};
 AVFS_meanNsigma_t VAR_18 = { 0 };
 AVFS_Sclk_Offset_t VAR_19 = { 0 };
 uint32_t VAR_20, VAR_21;

 struct phm_ppt_v1_information *VAR_22 =
   (struct phm_ppt_v1_information *)VAR_11->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_23 =
   VAR_22->vdd_dep_on_sclk;


 if (!VAR_11->avfs_supported)
  return 0;

 VAR_16 = FUNC_2(VAR_11, &VAR_17);

 if (0 == VAR_16) {
  if (((VAR_14->pdev->device == 0x67ef) &&
       ((VAR_14->pdev->revision == 0xe0) ||
        (VAR_14->pdev->revision == 0xe5))) ||
      ((VAR_14->pdev->device == 0x67ff) &&
       ((VAR_14->pdev->revision == 0xcf) ||
        (VAR_14->pdev->revision == 0xef) ||
        (VAR_14->pdev->revision == 0xff)))) {
   VAR_17.ucEnableApplyAVFS_CKS_OFF_Voltage = 1;
   if ((VAR_14->pdev->device == 0x67ef && VAR_14->pdev->revision == 0xe5) ||
       (VAR_14->pdev->device == 0x67ff && VAR_14->pdev->revision == 0xef)) {
    if ((VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a0 == 0xEA522DD3) &&
        (VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a1 == 0x5645A) &&
        (VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a2 == 0x33F9E) &&
        (VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_m1 == 0xFFFFC5CC) &&
        (VAR_17.usAVFSGB_FUSE_TABLE_CKSOFF_m2 == 0x1B1A) &&
        (VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_b == 0xFFFFFCED)) {
     VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a0 = 0xF718F1D4;
     VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a1 = 0x323FD;
     VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a2 = 0x1E455;
     VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_m1 = 0;
     VAR_17.usAVFSGB_FUSE_TABLE_CKSOFF_m2 = 0;
     VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_b = 0x23;
    }
   }
  } else if (VAR_11->chip_id == VAR_6 && !VAR_11->is_kicker) {
   VAR_17.ucEnableApplyAVFS_CKS_OFF_Voltage = 1;
   VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a0 = 0xF6B024DD;
   VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a1 = 0x3005E;
   VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a2 = 0x18A5F;
   VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_m1 = 0x315;
   VAR_17.usAVFSGB_FUSE_TABLE_CKSOFF_m2 = 0xFED1;
   VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_b = 0x3B;
  } else if (((VAR_14->pdev->device == 0x67df) &&
       ((VAR_14->pdev->revision == 0xe0) ||
        (VAR_14->pdev->revision == 0xe3) ||
        (VAR_14->pdev->revision == 0xe4) ||
        (VAR_14->pdev->revision == 0xe5) ||
        (VAR_14->pdev->revision == 0xe7) ||
        (VAR_14->pdev->revision == 0xef))) ||
      ((VAR_14->pdev->device == 0x6fdf) &&
       ((VAR_14->pdev->revision == 0xef) ||
        (VAR_14->pdev->revision == 0xff)))) {
   VAR_17.ucEnableApplyAVFS_CKS_OFF_Voltage = 1;
   VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a0 = 0xF843B66B;
   VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a1 = 0x59CB5;
   VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a2 = 0xFFFF287F;
   VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_m1 = 0;
   VAR_17.usAVFSGB_FUSE_TABLE_CKSOFF_m2 = 0xFF23;
   VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_b = 0x58;
  }
 }

 if (0 == VAR_16) {
  VAR_15->BTCGB_VDROOP_TABLE[0].a0 = FUNC_0(VAR_17.ulGB_VDROOP_TABLE_CKSON_a0);
  VAR_15->BTCGB_VDROOP_TABLE[0].a1 = FUNC_0(VAR_17.ulGB_VDROOP_TABLE_CKSON_a1);
  VAR_15->BTCGB_VDROOP_TABLE[0].a2 = FUNC_0(VAR_17.ulGB_VDROOP_TABLE_CKSON_a2);
  VAR_15->BTCGB_VDROOP_TABLE[1].a0 = FUNC_0(VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a0);
  VAR_15->BTCGB_VDROOP_TABLE[1].a1 = FUNC_0(VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a1);
  VAR_15->BTCGB_VDROOP_TABLE[1].a2 = FUNC_0(VAR_17.ulGB_VDROOP_TABLE_CKSOFF_a2);
  VAR_15->AVFSGB_VDROOP_TABLE[0].m1 = FUNC_0(VAR_17.ulAVFSGB_FUSE_TABLE_CKSON_m1);
  VAR_15->AVFSGB_VDROOP_TABLE[0].m2 = FUNC_1(VAR_17.usAVFSGB_FUSE_TABLE_CKSON_m2);
  VAR_15->AVFSGB_VDROOP_TABLE[0].b = FUNC_0(VAR_17.ulAVFSGB_FUSE_TABLE_CKSON_b);
  VAR_15->AVFSGB_VDROOP_TABLE[0].m1_shift = 24;
  VAR_15->AVFSGB_VDROOP_TABLE[0].m2_shift = 12;
  VAR_15->AVFSGB_VDROOP_TABLE[1].m1 = FUNC_0(VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_m1);
  VAR_15->AVFSGB_VDROOP_TABLE[1].m2 = FUNC_1(VAR_17.usAVFSGB_FUSE_TABLE_CKSOFF_m2);
  VAR_15->AVFSGB_VDROOP_TABLE[1].b = FUNC_0(VAR_17.ulAVFSGB_FUSE_TABLE_CKSOFF_b);
  VAR_15->AVFSGB_VDROOP_TABLE[1].m1_shift = 24;
  VAR_15->AVFSGB_VDROOP_TABLE[1].m2_shift = 12;
  VAR_15->MaxVoltage = FUNC_1(VAR_17.usMaxVoltage_0_25mv);
  VAR_18.Aconstant[0] = FUNC_0(VAR_17.ulAVFS_meanNsigma_Acontant0);
  VAR_18.Aconstant[1] = FUNC_0(VAR_17.ulAVFS_meanNsigma_Acontant1);
  VAR_18.Aconstant[2] = FUNC_0(VAR_17.ulAVFS_meanNsigma_Acontant2);
  VAR_18.DC_tol_sigma = FUNC_1(VAR_17.usAVFS_meanNsigma_DC_tol_sigma);
  VAR_18.Platform_mean = FUNC_1(VAR_17.usAVFS_meanNsigma_Platform_mean);
  VAR_18.PSM_Age_CompFactor = FUNC_1(VAR_17.usPSM_Age_ComFactor);
  VAR_18.Platform_sigma = FUNC_1(VAR_17.usAVFS_meanNsigma_Platform_sigma);

  for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
   VAR_18.Static_Voltage_Offset[VAR_21] = (uint8_t)(VAR_23->entries[VAR_21].cks_voffset * 100 / 625);
   VAR_19.Sclk_Offset[VAR_21] = FUNC_1((uint16_t)(VAR_23->entries[VAR_21].sclk_offset) / 100);
  }

  VAR_16 = FUNC_5(VAR_11,
    VAR_10 + FUNC_3(VAR_9, VAR_2),
    &VAR_20, VAR_8);

  FUNC_4(VAR_11,
     VAR_20,
     (uint8_t *)&VAR_18,
     sizeof(AVFS_meanNsigma_t),
     VAR_8);

  VAR_16 = FUNC_5(VAR_11,
    VAR_10 + FUNC_3(VAR_9, VAR_3),
    &VAR_20, VAR_8);
  FUNC_4(VAR_11,
     VAR_20,
     (uint8_t *)&VAR_19,
     sizeof(AVFS_Sclk_Offset_t),
     VAR_8);

  VAR_12->avfs_vdroop_override_setting = (VAR_17.ucEnableGB_VDROOP_TABLE_CKSON << VAR_4) |
      (VAR_17.ucEnableGB_VDROOP_TABLE_CKSOFF << VAR_5) |
      (VAR_17.ucEnableGB_FUSE_TABLE_CKSON << VAR_0) |
      (VAR_17.ucEnableGB_FUSE_TABLE_CKSOFF << VAR_1);
  VAR_12->apply_avfs_cks_off_voltage = (VAR_17.ucEnableApplyAVFS_CKS_OFF_Voltage == 1) ? 1 : 0;
 }
 return VAR_16;
}
