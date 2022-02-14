
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int fw_type; int fw_size; int fw_phy_addr_hi; int fw_phy_addr_lo; } ;
struct TYPE_4__ {TYPE_1__ cmd_load_ip_fw; } ;
struct psp_gfx_cmd_resp {TYPE_2__ cmd; int cmd_id; } ;
struct amdgpu_firmware_info {int ucode_size; int mc_addr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct psp_gfx_cmd_resp*,int ,int) ;
 int FUNC_3 (struct amdgpu_firmware_info*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_firmware_info *VAR_1,
           struct psp_gfx_cmd_resp *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4 = VAR_1->mc_addr;

 FUNC_2(VAR_2, 0, sizeof(struct psp_gfx_cmd_resp));

 VAR_2->cmd_id = VAR_0;
 VAR_2->cmd.cmd_load_ip_fw.fw_phy_addr_lo = FUNC_1(VAR_4);
 VAR_2->cmd.cmd_load_ip_fw.fw_phy_addr_hi = FUNC_4(VAR_4);
 VAR_2->cmd.cmd_load_ip_fw.fw_size = VAR_1->ucode_size;

 VAR_3 = FUNC_3(VAR_1, &VAR_2->cmd.cmd_load_ip_fw.fw_type);
 if (VAR_3)
  FUNC_0("Unknown firmware type\n");

 return VAR_3;
}
