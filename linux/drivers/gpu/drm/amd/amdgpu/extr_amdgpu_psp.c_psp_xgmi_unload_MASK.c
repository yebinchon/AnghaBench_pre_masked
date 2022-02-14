
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_gfx_cmd_resp {int dummy; } ;
struct TYPE_2__ {int session_id; } ;
struct psp_context {int fence_buf_mc_addr; TYPE_1__ xgmi_context; int adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct psp_gfx_cmd_resp*) ;
 struct psp_gfx_cmd_resp* FUNC_2 (int,int ) ;
 int FUNC_3 (struct psp_context*,int *,struct psp_gfx_cmd_resp*,int ) ;
 int FUNC_4 (struct psp_gfx_cmd_resp*,int ) ;

__attribute__((used)) static int FUNC_5(struct psp_context *VAR_2)
{
 int VAR_3;
 struct psp_gfx_cmd_resp *VAR_4;




 if (FUNC_0(VAR_2->adev))
  return 0;

 VAR_4 = FUNC_2(sizeof(struct psp_gfx_cmd_resp), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(VAR_4, VAR_2->xgmi_context.session_id);

 VAR_3 = FUNC_3(VAR_2, ((void*)0), VAR_4,
     VAR_2->fence_buf_mc_addr);

 FUNC_1(VAR_4);

 return VAR_3;
}
