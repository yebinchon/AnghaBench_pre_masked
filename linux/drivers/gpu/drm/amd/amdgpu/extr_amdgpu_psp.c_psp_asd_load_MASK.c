
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_gfx_cmd_resp {int dummy; } ;
struct psp_context {int fence_buf_mc_addr; int asd_ucode_size; int asd_shared_mc_addr; int fw_pri_mc_addr; int asd_start_addr; int fw_pri_buf; int adev; } ;


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
 FUNC_3(VAR_4->fw_pri_buf, VAR_4->asd_start_addr, VAR_4->asd_ucode_size);

 FUNC_6(VAR_6, VAR_4->fw_pri_mc_addr, VAR_4->asd_shared_mc_addr,
        VAR_4->asd_ucode_size, VAR_3);

 VAR_5 = FUNC_5(VAR_4, ((void*)0), VAR_6,
     VAR_4->fence_buf_mc_addr);

 FUNC_1(VAR_6);

 return VAR_5;
}
