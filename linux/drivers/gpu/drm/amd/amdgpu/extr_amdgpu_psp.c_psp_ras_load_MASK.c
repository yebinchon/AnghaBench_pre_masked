
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int session_id; } ;
struct psp_gfx_cmd_resp {TYPE_2__ resp; } ;
struct TYPE_3__ {int ras_initialized; int session_id; int ras_shared_mc_addr; } ;
struct psp_context {TYPE_1__ ras; int fence_buf_mc_addr; int ta_ras_ucode_size; int fw_pri_mc_addr; int ta_ras_start_addr; int fw_pri_buf; int adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct psp_gfx_cmd_resp*) ;
 struct psp_gfx_cmd_resp* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct psp_context*,int *,struct psp_gfx_cmd_resp*,int ) ;
 int FUNC_6 (struct psp_gfx_cmd_resp*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct psp_context *VAR_4)
{
 int VAR_5;
 struct psp_gfx_cmd_resp *VAR_6;




 if (FUNC_0(VAR_4->adev))
  return 0;

 VAR_6 = FUNC_2(sizeof(struct psp_gfx_cmd_resp), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_4->fw_pri_buf, 0, VAR_2);
 FUNC_3(VAR_4->fw_pri_buf, VAR_4->ta_ras_start_addr, VAR_4->ta_ras_ucode_size);

 FUNC_6(VAR_6, VAR_4->fw_pri_mc_addr,
   VAR_4->ras.ras_shared_mc_addr,
   VAR_4->ta_ras_ucode_size, VAR_3);

 VAR_5 = FUNC_5(VAR_4, ((void*)0), VAR_6,
   VAR_4->fence_buf_mc_addr);

 if (!VAR_5) {
  VAR_4->ras.ras_initialized = 1;
  VAR_4->ras.session_id = VAR_6->resp.session_id;
 }

 FUNC_1(VAR_6);

 return VAR_5;
}
