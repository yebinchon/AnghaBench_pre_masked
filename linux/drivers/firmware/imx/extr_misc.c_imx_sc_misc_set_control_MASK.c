
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int u8 ;
typedef void* u32 ;
struct imx_sc_rpc_msg {int size; void* func; void* svc; int ver; } ;
struct imx_sc_msg_req_misc_set_ctrl {void* resource; void* val; int ctrl; struct imx_sc_rpc_msg hdr; } ;
struct imx_sc_ipc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct imx_sc_ipc*,struct imx_sc_msg_req_misc_set_ctrl*,int) ;

int FUNC_1(struct imx_sc_ipc *VAR_3, u32 VAR_4,
       u8 VAR_5, u32 VAR_6)
{
 struct imx_sc_msg_req_misc_set_ctrl VAR_7;
 struct imx_sc_rpc_msg *VAR_8 = &VAR_7.hdr;

 VAR_8->ver = VAR_2;
 VAR_8->svc = (uint8_t)VAR_1;
 VAR_8->func = (uint8_t)VAR_0;
 VAR_8->size = 4;

 VAR_7.ctrl = VAR_5;
 VAR_7.val = VAR_6;
 VAR_7.resource = VAR_4;

 return FUNC_0(VAR_3, &VAR_7, 1);
}
