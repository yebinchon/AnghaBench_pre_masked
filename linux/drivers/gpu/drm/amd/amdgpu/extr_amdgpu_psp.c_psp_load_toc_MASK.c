
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct psp_gfx_cmd_resp {int dummy; } ;
struct psp_context {TYPE_2__* cmd_buf_mem; int fence_buf_mc_addr; int toc_bin_size; int fw_pri_mc_addr; int toc_start_addr; int fw_pri_buf; } ;
struct TYPE_3__ {int tmr_size; } ;
struct TYPE_4__ {TYPE_1__ resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psp_gfx_cmd_resp*) ;
 struct psp_gfx_cmd_resp* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct psp_context*,int *,struct psp_gfx_cmd_resp*,int ) ;
 int FUNC_5 (struct psp_gfx_cmd_resp*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct psp_context *VAR_3,
   uint32_t *VAR_4)
{
 int VAR_5;
 struct psp_gfx_cmd_resp *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct psp_gfx_cmd_resp), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_3->fw_pri_buf, 0, VAR_2);
 FUNC_2(VAR_3->fw_pri_buf, VAR_3->toc_start_addr, VAR_3->toc_bin_size);

 FUNC_5(VAR_6, VAR_3->fw_pri_mc_addr, VAR_3->toc_bin_size);

 VAR_5 = FUNC_4(VAR_3, ((void*)0), VAR_6,
     VAR_3->fence_buf_mc_addr);
 if (!VAR_5)
  *VAR_4 = VAR_3->cmd_buf_mem->resp.tmr_size;
 FUNC_0(VAR_6);
 return VAR_5;
}
