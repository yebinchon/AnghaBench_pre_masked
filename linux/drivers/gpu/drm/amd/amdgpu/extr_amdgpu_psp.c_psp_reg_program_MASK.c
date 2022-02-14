
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psp_gfx_cmd_resp {int dummy; } ;
struct psp_context {int fence_buf_mc_addr; } ;
typedef enum psp_reg_prog_id { ____Placeholder_psp_reg_prog_id } psp_reg_prog_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct psp_gfx_cmd_resp*) ;
 struct psp_gfx_cmd_resp* FUNC_1 (int,int ) ;
 int FUNC_2 (struct psp_context*,int *,struct psp_gfx_cmd_resp*,int ) ;
 int FUNC_3 (struct psp_gfx_cmd_resp*,int,int ) ;

int FUNC_4(struct psp_context *VAR_4, enum psp_reg_prog_id VAR_5,
  uint32_t VAR_6)
{
 struct psp_gfx_cmd_resp *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (VAR_5 >= VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_1(sizeof(struct psp_gfx_cmd_resp), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_3(VAR_7, VAR_5, VAR_6);
 VAR_8 = FUNC_2(VAR_4, ((void*)0), VAR_7, VAR_4->fence_buf_mc_addr);

 FUNC_0(VAR_7);
 return VAR_8;
}
