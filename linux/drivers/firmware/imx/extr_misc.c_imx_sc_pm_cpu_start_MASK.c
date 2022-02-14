
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_req_cpu_start {int address_hi; int address_lo; int enable; int resource; struct imx_sc_rpc_msg hdr; } ;
struct imx_sc_ipc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct imx_sc_ipc*,struct imx_sc_msg_req_cpu_start*,int) ;

int FUNC_1(struct imx_sc_ipc *VAR_3, u32 VAR_4,
   bool VAR_5, u64 VAR_6)
{
 struct imx_sc_msg_req_cpu_start VAR_7;
 struct imx_sc_rpc_msg *VAR_8 = &VAR_7.hdr;

 VAR_8->ver = VAR_2;
 VAR_8->svc = VAR_1;
 VAR_8->func = VAR_0;
 VAR_8->size = 4;

 VAR_7.address_hi = VAR_6 >> 32;
 VAR_7.address_lo = VAR_6;
 VAR_7.resource = VAR_4;
 VAR_7.enable = VAR_5;

 return FUNC_0(VAR_3, &VAR_7, 1);
}
