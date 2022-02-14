
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* reg_id; void* reg_value; } ;
struct TYPE_4__ {TYPE_1__ cmd_setup_reg_prog; } ;
struct psp_gfx_cmd_resp {TYPE_2__ cmd; int cmd_id; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct psp_gfx_cmd_resp *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 VAR_1->cmd_id = VAR_0;
 VAR_1->cmd.cmd_setup_reg_prog.reg_value = VAR_3;
 VAR_1->cmd.cmd_setup_reg_prog.reg_id = VAR_2;
}
