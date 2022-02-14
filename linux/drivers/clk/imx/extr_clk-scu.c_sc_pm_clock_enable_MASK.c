
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_req_clock_enable {int enable; int autog; int clk; int resource; struct imx_sc_rpc_msg hdr; } ;
struct imx_sc_ipc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct imx_sc_msg_req_clock_enable*,int) ;

__attribute__((used)) static int FUNC_2(struct imx_sc_ipc *VAR_4, u16 VAR_5,
         u8 VAR_6, bool VAR_7, bool VAR_8)
{
 struct imx_sc_msg_req_clock_enable VAR_9;
 struct imx_sc_rpc_msg *VAR_10 = &VAR_9.hdr;

 VAR_10->ver = VAR_2;
 VAR_10->svc = VAR_1;
 VAR_10->func = VAR_0;
 VAR_10->size = 3;

 VAR_9.resource = FUNC_0(VAR_5);
 VAR_9.clk = VAR_6;
 VAR_9.enable = VAR_7;
 VAR_9.autog = VAR_8;

 return FUNC_1(VAR_3, &VAR_9, 1);
}
