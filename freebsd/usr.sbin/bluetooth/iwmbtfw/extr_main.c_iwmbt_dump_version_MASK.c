
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwmbt_version {int fw_patch_num; int fw_build_yy; int fw_build_ww; int fw_build_num; int fw_revision; int fw_variant; int hw_revision; int hw_variant; int hw_platform; int status; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct iwmbt_version *VAR_0)
{
 FUNC_0("status       0x%02x", VAR_0->status);
 FUNC_0("hw_platform  0x%02x", VAR_0->hw_platform);
 FUNC_0("hw_variant   0x%02x", VAR_0->hw_variant);
 FUNC_0("hw_revision  0x%02x", VAR_0->hw_revision);
 FUNC_0("fw_variant   0x%02x", VAR_0->fw_variant);
 FUNC_0("fw_revision  0x%02x", VAR_0->fw_revision);
 FUNC_0("fw_build_num 0x%02x", VAR_0->fw_build_num);
 FUNC_0("fw_build_ww  0x%02x", VAR_0->fw_build_ww);
 FUNC_0("fw_build_yy  0x%02x", VAR_0->fw_build_yy);
 FUNC_0("fw_patch_num 0x%02x", VAR_0->fw_patch_num);
}
