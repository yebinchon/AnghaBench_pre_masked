
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int buf_size; int buf_phy_addr_hi; int buf_phy_addr_lo; } ;
struct TYPE_3__ {TYPE_2__ cmd_setup_tmr; } ;
struct psp_gfx_cmd_resp {TYPE_1__ cmd; int cmd_id; } ;
struct psp_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct psp_context*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct psp_context *VAR_2,
     struct psp_gfx_cmd_resp *VAR_3,
     uint64_t VAR_4, uint32_t VAR_5)
{
 if (FUNC_1(VAR_2))
  VAR_3->cmd_id = VAR_1;
 else
  VAR_3->cmd_id = VAR_0;
 VAR_3->cmd.cmd_setup_tmr.buf_phy_addr_lo = FUNC_0(VAR_4);
 VAR_3->cmd.cmd_setup_tmr.buf_phy_addr_hi = FUNC_2(VAR_4);
 VAR_3->cmd.cmd_setup_tmr.buf_size = VAR_5;
}
