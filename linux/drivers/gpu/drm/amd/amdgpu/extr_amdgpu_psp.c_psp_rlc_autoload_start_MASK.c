
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_gfx_cmd_resp {int cmd_id; } ;
struct psp_context {int fence_buf_mc_addr; int adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct psp_gfx_cmd_resp*) ;
 struct psp_gfx_cmd_resp* FUNC_2 (int,int ) ;
 int FUNC_3 (struct psp_context*,int *,struct psp_gfx_cmd_resp*,int ) ;

int FUNC_4(struct psp_context *VAR_3)
{
 int VAR_4;
 struct psp_gfx_cmd_resp *VAR_5;

 if (FUNC_0(VAR_3->adev))
  return 0;

 VAR_5 = FUNC_2(sizeof(struct psp_gfx_cmd_resp), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->cmd_id = VAR_2;

 VAR_4 = FUNC_3(VAR_3, ((void*)0), VAR_5,
     VAR_3->fence_buf_mc_addr);
 FUNC_1(VAR_5);
 return VAR_4;
}
