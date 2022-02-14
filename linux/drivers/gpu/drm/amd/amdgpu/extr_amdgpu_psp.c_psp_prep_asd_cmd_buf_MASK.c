
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_3__ {void* cmd_buf_len; void* cmd_buf_phy_addr_hi; void* cmd_buf_phy_addr_lo; void* app_len; void* app_phy_addr_hi; void* app_phy_addr_lo; } ;
struct TYPE_4__ {TYPE_1__ cmd_load_ta; } ;
struct psp_gfx_cmd_resp {TYPE_2__ cmd; int cmd_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct psp_gfx_cmd_resp *VAR_1,
     uint64_t VAR_2, uint64_t VAR_3,
     uint32_t VAR_4, uint32_t VAR_5)
{
 VAR_1->cmd_id = VAR_0;
 VAR_1->cmd.cmd_load_ta.app_phy_addr_lo = FUNC_0(VAR_2);
 VAR_1->cmd.cmd_load_ta.app_phy_addr_hi = FUNC_1(VAR_2);
 VAR_1->cmd.cmd_load_ta.app_len = VAR_4;

 VAR_1->cmd.cmd_load_ta.cmd_buf_phy_addr_lo = FUNC_0(VAR_3);
 VAR_1->cmd.cmd_load_ta.cmd_buf_phy_addr_hi = FUNC_1(VAR_3);
 VAR_1->cmd.cmd_load_ta.cmd_buf_len = VAR_5;
}
