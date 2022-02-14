
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct pp_hwmgr {int adev; } ;
struct pp_atomfwctrl_avfs_parameters {void* ucAcgEnableGbFuseTable; void* ucAcgEnableGbVdroopTable; void* ulAcgGbFuseTableB; void* ulAcgGbFuseTableM2; void* ulAcgGbFuseTableM1; void* ulAcgGbVdroopTableA2; void* ulAcgGbVdroopTableA1; void* ulAcgGbVdroopTableA0; void* ulPhyclk2GfxclkB; void* ulPhyclk2GfxclkM2; void* ulPhyclk2GfxclkM1; void* ulPixelclk2GfxclkB; void* ulPixelclk2GfxclkM2; void* ulPixelclk2GfxclkM1; void* ulDcefclk2GfxclkB; void* ulDcefclk2GfxclkM2; void* ulDcefclk2GfxclkM1; void* ulDispclk2GfxclkB; void* ulDispclk2GfxclkM2; void* ulDispclk2GfxclkM1; void* usPsmAgeComfactor; int ucEnableGbFuseTableCkson; int ucEnableGbVdroopTableCkson; void* ulGbFuseTableCksonB; void* ulGbFuseTableCksonM2; void* ulGbFuseTableCksonM1; void* ulGbFuseTableCksoffB; void* ulGbFuseTableCksoffM2; void* ulGbFuseTableCksoffM1; void* ulGbVdroopTableCksonA2; void* ulGbVdroopTableCksonA1; void* ulGbVdroopTableCksonA0; void* ulGbVdroopTableCksoffA2; void* ulGbVdroopTableCksoffA1; void* ulGbVdroopTableCksoffA0; void* usMeanNsigmaPlatformSigma; void* usMeanNsigmaPlatformMean; void* usMeanNsigmaDcTolSigma; void* ulMeanNsigmaAcontant2; void* ulMeanNsigmaAcontant1; void* ulMeanNsigmaAcontant0; void* ulMinVddc; void* ulMaxVddc; } ;
struct atom_common_table_header {int format_revision; int content_revision; } ;
struct atom_asic_profiling_info_v4_2 {int enable_acg_gb_fuse_table; int enable_acg_gb_vdroop_table; int acg_avfsgb_fuse_table_b; int acg_avfsgb_fuse_table_m2; int acg_avfsgb_fuse_table_m1; int acg_gb_vdroop_table_a2; int acg_gb_vdroop_table_a1; int acg_gb_vdroop_table_a0; int phyclk2gfxclk_c; int phyclk2gfxclk_b; int pixclk2gfxclk_c; int pixclk2gfxclk_b; int pixclk2gfxclk_a; int dcefclk2gfxclk_c; int dcefclk2gfxclk_b; int dcefclk2gfxclk_a; int dispclk2gfxclk_c; int dispclk2gfxclk_b; int dispclk2gfxclk_a; int psm_age_comfactor; int enable_gb_fuse_table_ckson; int enable_gb_vdroop_table_ckson; int avfsgb_fuse_table_ckson_b; int avfsgb_fuse_table_ckson_m2; int avfsgb_fuse_table_ckson_m1; int avfsgb_fuse_table_cksoff_b; int avfsgb_fuse_table_cksoff_m2; int avfsgb_fuse_table_cksoff_m1; int gb_vdroop_table_ckson_a2; int gb_vdroop_table_ckson_a1; int gb_vdroop_table_ckson_a0; int gb_vdroop_table_cksoff_a2; int gb_vdroop_table_cksoff_a1; int gb_vdroop_table_cksoff_a0; int avfs_meannsigma_platform_sigma; int avfs_meannsigma_platform_mean; int avfs_meannsigma_dc_tol_sigma; int avfs_meannsigma_acontant2; int avfs_meannsigma_acontant1; int avfs_meannsigma_acontant0; int minvddc; int maxvddc; } ;
struct atom_asic_profiling_info_v4_1 {int phyclk2gfxclk_a; int phyclk2gfxclk_c; int phyclk2gfxclk_b; int pixclk2gfxclk_c; int pixclk2gfxclk_b; int pixclk2gfxclk_a; int dcefclk2gfxclk_c; int dcefclk2gfxclk_b; int dcefclk2gfxclk_a; int dispclk2gfxclk_c; int dispclk2gfxclk_b; int dispclk2gfxclk_a; int psm_age_comfactor; int enable_gb_fuse_table_ckson; int enable_gb_vdroop_table_ckson; int avfsgb_fuse_table_ckson_b; int avfsgb_fuse_table_ckson_m2; int avfsgb_fuse_table_ckson_m1; int avfsgb_fuse_table_cksoff_b; int avfsgb_fuse_table_cksoff_m2; int avfsgb_fuse_table_cksoff_m1; int gb_vdroop_table_ckson_a2; int gb_vdroop_table_ckson_a1; int gb_vdroop_table_ckson_a0; int gb_vdroop_table_cksoff_a2; int gb_vdroop_table_cksoff_a1; int gb_vdroop_table_cksoff_a0; int avfs_meannsigma_platform_sigma; int avfs_meannsigma_platform_mean; int avfs_meannsigma_dc_tol_sigma; int avfs_meannsigma_acontant2; int avfs_meannsigma_acontant1; int avfs_meannsigma_acontant0; int minvddc; int maxvddc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int *) ;

int FUNC_5(struct pp_hwmgr *VAR_2,
  struct pp_atomfwctrl_avfs_parameters *VAR_3)
{
 uint16_t VAR_4;
 uint8_t VAR_5, VAR_6;

 struct atom_asic_profiling_info_v4_1 *VAR_7;
 struct atom_asic_profiling_info_v4_2 *VAR_8;

 VAR_4 = FUNC_0(VAR_1);
 VAR_7 = (struct atom_asic_profiling_info_v4_1 *)
   FUNC_4(VAR_2->adev,
     VAR_4, ((void*)0), ((void*)0), ((void*)0));

 if (!VAR_7)
  return -1;

 VAR_5 = ((struct atom_common_table_header *)VAR_7)->format_revision;
 VAR_6 = ((struct atom_common_table_header *)VAR_7)->content_revision;

 if (VAR_5 == 4 && VAR_6 == 1) {
  VAR_3->ulMaxVddc = FUNC_2(VAR_7->maxvddc);
  VAR_3->ulMinVddc = FUNC_2(VAR_7->minvddc);
  VAR_3->ulMeanNsigmaAcontant0 =
    FUNC_2(VAR_7->avfs_meannsigma_acontant0);
  VAR_3->ulMeanNsigmaAcontant1 =
    FUNC_2(VAR_7->avfs_meannsigma_acontant1);
  VAR_3->ulMeanNsigmaAcontant2 =
    FUNC_2(VAR_7->avfs_meannsigma_acontant2);
  VAR_3->usMeanNsigmaDcTolSigma =
    FUNC_1(VAR_7->avfs_meannsigma_dc_tol_sigma);
  VAR_3->usMeanNsigmaPlatformMean =
    FUNC_1(VAR_7->avfs_meannsigma_platform_mean);
  VAR_3->usMeanNsigmaPlatformSigma =
    FUNC_1(VAR_7->avfs_meannsigma_platform_sigma);
  VAR_3->ulGbVdroopTableCksoffA0 =
    FUNC_2(VAR_7->gb_vdroop_table_cksoff_a0);
  VAR_3->ulGbVdroopTableCksoffA1 =
    FUNC_2(VAR_7->gb_vdroop_table_cksoff_a1);
  VAR_3->ulGbVdroopTableCksoffA2 =
    FUNC_2(VAR_7->gb_vdroop_table_cksoff_a2);
  VAR_3->ulGbVdroopTableCksonA0 =
    FUNC_2(VAR_7->gb_vdroop_table_ckson_a0);
  VAR_3->ulGbVdroopTableCksonA1 =
    FUNC_2(VAR_7->gb_vdroop_table_ckson_a1);
  VAR_3->ulGbVdroopTableCksonA2 =
    FUNC_2(VAR_7->gb_vdroop_table_ckson_a2);
  VAR_3->ulGbFuseTableCksoffM1 =
    FUNC_2(VAR_7->avfsgb_fuse_table_cksoff_m1);
  VAR_3->ulGbFuseTableCksoffM2 =
    FUNC_2(VAR_7->avfsgb_fuse_table_cksoff_m2);
  VAR_3->ulGbFuseTableCksoffB =
    FUNC_2(VAR_7->avfsgb_fuse_table_cksoff_b);
  VAR_3->ulGbFuseTableCksonM1 =
    FUNC_2(VAR_7->avfsgb_fuse_table_ckson_m1);
  VAR_3->ulGbFuseTableCksonM2 =
    FUNC_2(VAR_7->avfsgb_fuse_table_ckson_m2);
  VAR_3->ulGbFuseTableCksonB =
    FUNC_2(VAR_7->avfsgb_fuse_table_ckson_b);

  VAR_3->ucEnableGbVdroopTableCkson =
    VAR_7->enable_gb_vdroop_table_ckson;
  VAR_3->ucEnableGbFuseTableCkson =
    VAR_7->enable_gb_fuse_table_ckson;
  VAR_3->usPsmAgeComfactor =
    FUNC_1(VAR_7->psm_age_comfactor);

  VAR_3->ulDispclk2GfxclkM1 =
    FUNC_2(VAR_7->dispclk2gfxclk_a);
  VAR_3->ulDispclk2GfxclkM2 =
    FUNC_2(VAR_7->dispclk2gfxclk_b);
  VAR_3->ulDispclk2GfxclkB =
    FUNC_2(VAR_7->dispclk2gfxclk_c);
  VAR_3->ulDcefclk2GfxclkM1 =
    FUNC_2(VAR_7->dcefclk2gfxclk_a);
  VAR_3->ulDcefclk2GfxclkM2 =
    FUNC_2(VAR_7->dcefclk2gfxclk_b);
  VAR_3->ulDcefclk2GfxclkB =
    FUNC_2(VAR_7->dcefclk2gfxclk_c);
  VAR_3->ulPixelclk2GfxclkM1 =
    FUNC_2(VAR_7->pixclk2gfxclk_a);
  VAR_3->ulPixelclk2GfxclkM2 =
    FUNC_2(VAR_7->pixclk2gfxclk_b);
  VAR_3->ulPixelclk2GfxclkB =
    FUNC_2(VAR_7->pixclk2gfxclk_c);
  VAR_3->ulPhyclk2GfxclkM1 =
    FUNC_2(VAR_7->phyclk2gfxclk_a);
  VAR_3->ulPhyclk2GfxclkM2 =
    FUNC_2(VAR_7->phyclk2gfxclk_b);
  VAR_3->ulPhyclk2GfxclkB =
    FUNC_2(VAR_7->phyclk2gfxclk_c);
  VAR_3->ulAcgGbVdroopTableA0 = 0;
  VAR_3->ulAcgGbVdroopTableA1 = 0;
  VAR_3->ulAcgGbVdroopTableA2 = 0;
  VAR_3->ulAcgGbFuseTableM1 = 0;
  VAR_3->ulAcgGbFuseTableM2 = 0;
  VAR_3->ulAcgGbFuseTableB = 0;
  VAR_3->ucAcgEnableGbVdroopTable = 0;
  VAR_3->ucAcgEnableGbFuseTable = 0;
 } else if (VAR_5 == 4 && VAR_6 == 2) {
  VAR_8 = (struct atom_asic_profiling_info_v4_2 *)VAR_7;
  VAR_3->ulMaxVddc = FUNC_2(VAR_8->maxvddc);
  VAR_3->ulMinVddc = FUNC_2(VAR_8->minvddc);
  VAR_3->ulMeanNsigmaAcontant0 =
    FUNC_2(VAR_8->avfs_meannsigma_acontant0);
  VAR_3->ulMeanNsigmaAcontant1 =
    FUNC_2(VAR_8->avfs_meannsigma_acontant1);
  VAR_3->ulMeanNsigmaAcontant2 =
    FUNC_2(VAR_8->avfs_meannsigma_acontant2);
  VAR_3->usMeanNsigmaDcTolSigma =
    FUNC_1(VAR_8->avfs_meannsigma_dc_tol_sigma);
  VAR_3->usMeanNsigmaPlatformMean =
    FUNC_1(VAR_8->avfs_meannsigma_platform_mean);
  VAR_3->usMeanNsigmaPlatformSigma =
    FUNC_1(VAR_8->avfs_meannsigma_platform_sigma);
  VAR_3->ulGbVdroopTableCksoffA0 =
    FUNC_2(VAR_8->gb_vdroop_table_cksoff_a0);
  VAR_3->ulGbVdroopTableCksoffA1 =
    FUNC_2(VAR_8->gb_vdroop_table_cksoff_a1);
  VAR_3->ulGbVdroopTableCksoffA2 =
    FUNC_2(VAR_8->gb_vdroop_table_cksoff_a2);
  VAR_3->ulGbVdroopTableCksonA0 =
    FUNC_2(VAR_8->gb_vdroop_table_ckson_a0);
  VAR_3->ulGbVdroopTableCksonA1 =
    FUNC_2(VAR_8->gb_vdroop_table_ckson_a1);
  VAR_3->ulGbVdroopTableCksonA2 =
    FUNC_2(VAR_8->gb_vdroop_table_ckson_a2);
  VAR_3->ulGbFuseTableCksoffM1 =
    FUNC_2(VAR_8->avfsgb_fuse_table_cksoff_m1);
  VAR_3->ulGbFuseTableCksoffM2 =
    FUNC_2(VAR_8->avfsgb_fuse_table_cksoff_m2);
  VAR_3->ulGbFuseTableCksoffB =
    FUNC_2(VAR_8->avfsgb_fuse_table_cksoff_b);
  VAR_3->ulGbFuseTableCksonM1 =
    FUNC_2(VAR_8->avfsgb_fuse_table_ckson_m1);
  VAR_3->ulGbFuseTableCksonM2 =
    FUNC_2(VAR_8->avfsgb_fuse_table_ckson_m2);
  VAR_3->ulGbFuseTableCksonB =
    FUNC_2(VAR_8->avfsgb_fuse_table_ckson_b);

  VAR_3->ucEnableGbVdroopTableCkson =
    VAR_8->enable_gb_vdroop_table_ckson;
  VAR_3->ucEnableGbFuseTableCkson =
    VAR_8->enable_gb_fuse_table_ckson;
  VAR_3->usPsmAgeComfactor =
    FUNC_1(VAR_8->psm_age_comfactor);

  VAR_3->ulDispclk2GfxclkM1 =
    FUNC_2(VAR_8->dispclk2gfxclk_a);
  VAR_3->ulDispclk2GfxclkM2 =
    FUNC_2(VAR_8->dispclk2gfxclk_b);
  VAR_3->ulDispclk2GfxclkB =
    FUNC_2(VAR_8->dispclk2gfxclk_c);
  VAR_3->ulDcefclk2GfxclkM1 =
    FUNC_2(VAR_8->dcefclk2gfxclk_a);
  VAR_3->ulDcefclk2GfxclkM2 =
    FUNC_2(VAR_8->dcefclk2gfxclk_b);
  VAR_3->ulDcefclk2GfxclkB =
    FUNC_2(VAR_8->dcefclk2gfxclk_c);
  VAR_3->ulPixelclk2GfxclkM1 =
    FUNC_2(VAR_8->pixclk2gfxclk_a);
  VAR_3->ulPixelclk2GfxclkM2 =
    FUNC_2(VAR_8->pixclk2gfxclk_b);
  VAR_3->ulPixelclk2GfxclkB =
    FUNC_2(VAR_8->pixclk2gfxclk_c);
  VAR_3->ulPhyclk2GfxclkM1 =
    FUNC_2(VAR_7->phyclk2gfxclk_a);
  VAR_3->ulPhyclk2GfxclkM2 =
    FUNC_2(VAR_8->phyclk2gfxclk_b);
  VAR_3->ulPhyclk2GfxclkB =
    FUNC_2(VAR_8->phyclk2gfxclk_c);
  VAR_3->ulAcgGbVdroopTableA0 = FUNC_2(VAR_8->acg_gb_vdroop_table_a0);
  VAR_3->ulAcgGbVdroopTableA1 = FUNC_2(VAR_8->acg_gb_vdroop_table_a1);
  VAR_3->ulAcgGbVdroopTableA2 = FUNC_2(VAR_8->acg_gb_vdroop_table_a2);
  VAR_3->ulAcgGbFuseTableM1 = FUNC_2(VAR_8->acg_avfsgb_fuse_table_m1);
  VAR_3->ulAcgGbFuseTableM2 = FUNC_2(VAR_8->acg_avfsgb_fuse_table_m2);
  VAR_3->ulAcgGbFuseTableB = FUNC_2(VAR_8->acg_avfsgb_fuse_table_b);
  VAR_3->ucAcgEnableGbVdroopTable = FUNC_2(VAR_8->enable_acg_gb_vdroop_table);
  VAR_3->ucAcgEnableGbFuseTable = FUNC_2(VAR_8->enable_acg_gb_fuse_table);
 } else {
  FUNC_3("Invalid VBIOS AVFS ProfilingInfo Revision!\n");
  return -VAR_0;
 }

 return 0;
}
