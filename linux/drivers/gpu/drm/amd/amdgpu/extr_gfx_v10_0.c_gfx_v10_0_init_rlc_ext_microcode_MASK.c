
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rlc_firmware_header_v2_1 {int reg_list_format_direct_reg_list_length; int save_restore_list_srm_offset_bytes; int save_restore_list_srm_size_bytes; int save_restore_list_srm_feature_ver; int save_restore_list_srm_ucode_ver; int save_restore_list_gpm_offset_bytes; int save_restore_list_gpm_size_bytes; int save_restore_list_gpm_feature_ver; int save_restore_list_gpm_ucode_ver; int save_restore_list_cntl_offset_bytes; int save_restore_list_cntl_size_bytes; int save_restore_list_cntl_feature_ver; int save_restore_list_cntl_ucode_ver; } ;
struct TYPE_5__ {int save_restore_list_cntl_size_bytes; int save_restore_list_gpm_size_bytes; int save_restore_list_srm_size_bytes; int reg_list_format_direct_reg_list_length; int * save_restore_list_srm; int * save_restore_list_gpm; int * save_restore_list_cntl; } ;
struct TYPE_6__ {int rlc_srlc_fw_version; int rlc_srlc_feature_version; int rlc_srlg_fw_version; int rlc_srlg_feature_version; int rlc_srls_fw_version; int rlc_srls_feature_version; TYPE_2__ rlc; TYPE_1__* rlc_fw; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 const struct rlc_firmware_header_v2_1 *VAR_1;

 VAR_1 = (const struct rlc_firmware_header_v2_1 *)VAR_0->gfx.rlc_fw->data;
 VAR_0->gfx.rlc_srlc_fw_version = FUNC_0(VAR_1->save_restore_list_cntl_ucode_ver);
 VAR_0->gfx.rlc_srlc_feature_version = FUNC_0(VAR_1->save_restore_list_cntl_feature_ver);
 VAR_0->gfx.rlc.save_restore_list_cntl_size_bytes = FUNC_0(VAR_1->save_restore_list_cntl_size_bytes);
 VAR_0->gfx.rlc.save_restore_list_cntl = (u8 *)VAR_1 + FUNC_0(VAR_1->save_restore_list_cntl_offset_bytes);
 VAR_0->gfx.rlc_srlg_fw_version = FUNC_0(VAR_1->save_restore_list_gpm_ucode_ver);
 VAR_0->gfx.rlc_srlg_feature_version = FUNC_0(VAR_1->save_restore_list_gpm_feature_ver);
 VAR_0->gfx.rlc.save_restore_list_gpm_size_bytes = FUNC_0(VAR_1->save_restore_list_gpm_size_bytes);
 VAR_0->gfx.rlc.save_restore_list_gpm = (u8 *)VAR_1 + FUNC_0(VAR_1->save_restore_list_gpm_offset_bytes);
 VAR_0->gfx.rlc_srls_fw_version = FUNC_0(VAR_1->save_restore_list_srm_ucode_ver);
 VAR_0->gfx.rlc_srls_feature_version = FUNC_0(VAR_1->save_restore_list_srm_feature_ver);
 VAR_0->gfx.rlc.save_restore_list_srm_size_bytes = FUNC_0(VAR_1->save_restore_list_srm_size_bytes);
 VAR_0->gfx.rlc.save_restore_list_srm = (u8 *)VAR_1 + FUNC_0(VAR_1->save_restore_list_srm_offset_bytes);
 VAR_0->gfx.rlc.reg_list_format_direct_reg_list_length =
   FUNC_0(VAR_1->reg_list_format_direct_reg_list_length);
}
