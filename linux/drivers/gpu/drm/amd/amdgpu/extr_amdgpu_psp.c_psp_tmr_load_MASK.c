
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_gfx_cmd_resp {int dummy; } ;
struct psp_context {int fence_buf_mc_addr; int tmr_mc_addr; int tmr_bo; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct psp_gfx_cmd_resp*) ;
 struct psp_gfx_cmd_resp* FUNC_3 (int,int ) ;
 int FUNC_4 (struct psp_context*,int *,struct psp_gfx_cmd_resp*,int ) ;
 int FUNC_5 (struct psp_context*,struct psp_gfx_cmd_resp*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct psp_context *VAR_2)
{
 int VAR_3;
 struct psp_gfx_cmd_resp *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct psp_gfx_cmd_resp), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(VAR_2, VAR_4, VAR_2->tmr_mc_addr,
        FUNC_1(VAR_2->tmr_bo));
 FUNC_0("reserve 0x%lx from 0x%llx for PSP TMR\n",
   FUNC_1(VAR_2->tmr_bo), VAR_2->tmr_mc_addr);

 VAR_3 = FUNC_4(VAR_2, ((void*)0), VAR_4,
     VAR_2->fence_buf_mc_addr);
 if (VAR_3)
  goto failed;

 FUNC_2(VAR_4);

 return 0;

failed:
 FUNC_2(VAR_4);
 return VAR_3;
}
