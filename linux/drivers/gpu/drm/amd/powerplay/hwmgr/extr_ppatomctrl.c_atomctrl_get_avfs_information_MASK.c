
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {int adev; } ;
struct pp_atom_ctrl__avfs_parameters {int ucEnableApplyAVFS_CKS_OFF_Voltage; void* usPSM_Age_ComFactor; int ucEnableGB_FUSE_TABLE_CKSON; int ucEnableGB_FUSE_TABLE_CKSOFF; int ucEnableGB_VDROOP_TABLE_CKSON; int ucEnableGB_VDROOP_TABLE_CKSOFF; void* usMaxVoltage_0_25mv; void* ulAVFSGB_FUSE_TABLE_CKSON_b; void* usAVFSGB_FUSE_TABLE_CKSON_m2; void* ulAVFSGB_FUSE_TABLE_CKSON_m1; void* ulAVFSGB_FUSE_TABLE_CKSOFF_b; void* usAVFSGB_FUSE_TABLE_CKSOFF_m2; void* ulAVFSGB_FUSE_TABLE_CKSOFF_m1; void* ulGB_VDROOP_TABLE_CKSON_a2; void* ulGB_VDROOP_TABLE_CKSON_a1; void* ulGB_VDROOP_TABLE_CKSON_a0; void* ulGB_VDROOP_TABLE_CKSOFF_a2; void* ulGB_VDROOP_TABLE_CKSOFF_a1; void* ulGB_VDROOP_TABLE_CKSOFF_a0; void* usAVFS_meanNsigma_Platform_sigma; void* usAVFS_meanNsigma_Platform_mean; void* usAVFS_meanNsigma_DC_tol_sigma; void* ulAVFS_meanNsigma_Acontant2; void* ulAVFS_meanNsigma_Acontant1; void* ulAVFS_meanNsigma_Acontant0; } ;
struct TYPE_2__ {int ucEnableApplyAVFS_CKS_OFF_Voltage; int usPSM_Age_ComFactor; int ucEnableGB_FUSE_TABLE_CKSON; int ucEnableGB_FUSE_TABLE_CKSOFF; int ucEnableGB_VDROOP_TABLE_CKSON; int ucEnableGB_VDROOP_TABLE_CKSOFF; int usMaxVoltage_0_25mv; int ulAVFSGB_FUSE_TABLE_CKSON_b; int usAVFSGB_FUSE_TABLE_CKSON_m2; int ulAVFSGB_FUSE_TABLE_CKSON_m1; int ulAVFSGB_FUSE_TABLE_CKSOFF_b; int usAVFSGB_FUSE_TABLE_CKSOFF_m2; int ulAVFSGB_FUSE_TABLE_CKSOFF_m1; int ulGB_VDROOP_TABLE_CKSON_a2; int ulGB_VDROOP_TABLE_CKSON_a1; int ulGB_VDROOP_TABLE_CKSON_a0; int ulGB_VDROOP_TABLE_CKSOFF_a2; int ulGB_VDROOP_TABLE_CKSOFF_a1; int ulGB_VDROOP_TABLE_CKSOFF_a0; int usAVFS_meanNsigma_Platform_sigma; int usAVFS_meanNsigma_Platform_mean; int usAVFS_meanNsigma_DC_tol_sigma; int ulAVFS_meanNsigma_Acontant2; int ulAVFS_meanNsigma_Acontant1; int ulAVFS_meanNsigma_Acontant0; } ;
typedef TYPE_1__ ATOM_ASIC_PROFILING_INFO_V3_6 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int *) ;

int FUNC_4(struct pp_hwmgr *VAR_3,
      struct pp_atom_ctrl__avfs_parameters *VAR_4)
{
 ATOM_ASIC_PROFILING_INFO_V3_6 *VAR_5 = ((void*)0);

 if (VAR_4 == ((void*)0))
  return -VAR_2;

 VAR_5 = (ATOM_ASIC_PROFILING_INFO_V3_6 *)
   FUNC_3(VAR_3->adev,
     FUNC_0(VAR_1, VAR_0),
     ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_5)
  return -1;

 VAR_4->ulAVFS_meanNsigma_Acontant0 = FUNC_2(VAR_5->ulAVFS_meanNsigma_Acontant0);
 VAR_4->ulAVFS_meanNsigma_Acontant1 = FUNC_2(VAR_5->ulAVFS_meanNsigma_Acontant1);
 VAR_4->ulAVFS_meanNsigma_Acontant2 = FUNC_2(VAR_5->ulAVFS_meanNsigma_Acontant2);
 VAR_4->usAVFS_meanNsigma_DC_tol_sigma = FUNC_1(VAR_5->usAVFS_meanNsigma_DC_tol_sigma);
 VAR_4->usAVFS_meanNsigma_Platform_mean = FUNC_1(VAR_5->usAVFS_meanNsigma_Platform_mean);
 VAR_4->usAVFS_meanNsigma_Platform_sigma = FUNC_1(VAR_5->usAVFS_meanNsigma_Platform_sigma);
 VAR_4->ulGB_VDROOP_TABLE_CKSOFF_a0 = FUNC_2(VAR_5->ulGB_VDROOP_TABLE_CKSOFF_a0);
 VAR_4->ulGB_VDROOP_TABLE_CKSOFF_a1 = FUNC_2(VAR_5->ulGB_VDROOP_TABLE_CKSOFF_a1);
 VAR_4->ulGB_VDROOP_TABLE_CKSOFF_a2 = FUNC_2(VAR_5->ulGB_VDROOP_TABLE_CKSOFF_a2);
 VAR_4->ulGB_VDROOP_TABLE_CKSON_a0 = FUNC_2(VAR_5->ulGB_VDROOP_TABLE_CKSON_a0);
 VAR_4->ulGB_VDROOP_TABLE_CKSON_a1 = FUNC_2(VAR_5->ulGB_VDROOP_TABLE_CKSON_a1);
 VAR_4->ulGB_VDROOP_TABLE_CKSON_a2 = FUNC_2(VAR_5->ulGB_VDROOP_TABLE_CKSON_a2);
 VAR_4->ulAVFSGB_FUSE_TABLE_CKSOFF_m1 = FUNC_2(VAR_5->ulAVFSGB_FUSE_TABLE_CKSOFF_m1);
 VAR_4->usAVFSGB_FUSE_TABLE_CKSOFF_m2 = FUNC_1(VAR_5->usAVFSGB_FUSE_TABLE_CKSOFF_m2);
 VAR_4->ulAVFSGB_FUSE_TABLE_CKSOFF_b = FUNC_2(VAR_5->ulAVFSGB_FUSE_TABLE_CKSOFF_b);
 VAR_4->ulAVFSGB_FUSE_TABLE_CKSON_m1 = FUNC_2(VAR_5->ulAVFSGB_FUSE_TABLE_CKSON_m1);
 VAR_4->usAVFSGB_FUSE_TABLE_CKSON_m2 = FUNC_1(VAR_5->usAVFSGB_FUSE_TABLE_CKSON_m2);
 VAR_4->ulAVFSGB_FUSE_TABLE_CKSON_b = FUNC_2(VAR_5->ulAVFSGB_FUSE_TABLE_CKSON_b);
 VAR_4->usMaxVoltage_0_25mv = FUNC_1(VAR_5->usMaxVoltage_0_25mv);
 VAR_4->ucEnableGB_VDROOP_TABLE_CKSOFF = VAR_5->ucEnableGB_VDROOP_TABLE_CKSOFF;
 VAR_4->ucEnableGB_VDROOP_TABLE_CKSON = VAR_5->ucEnableGB_VDROOP_TABLE_CKSON;
 VAR_4->ucEnableGB_FUSE_TABLE_CKSOFF = VAR_5->ucEnableGB_FUSE_TABLE_CKSOFF;
 VAR_4->ucEnableGB_FUSE_TABLE_CKSON = VAR_5->ucEnableGB_FUSE_TABLE_CKSON;
 VAR_4->usPSM_Age_ComFactor = FUNC_1(VAR_5->usPSM_Age_ComFactor);
 VAR_4->ucEnableApplyAVFS_CKS_OFF_Voltage = VAR_5->ucEnableApplyAVFS_CKS_OFF_Voltage;

 return 0;
}
