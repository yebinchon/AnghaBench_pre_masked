
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_req_set_clock_rate {int clk; int resource; int rate; struct imx_sc_rpc_msg hdr; } ;
struct clk_scu {int clk_type; int rsrc_id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,struct imx_sc_msg_req_set_clock_rate*,int) ;
 struct clk_scu* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_4, unsigned long VAR_5,
       unsigned long VAR_6)
{
 struct clk_scu *VAR_7 = FUNC_3(VAR_4);
 struct imx_sc_msg_req_set_clock_rate VAR_8;
 struct imx_sc_rpc_msg *VAR_9 = &VAR_8.hdr;

 VAR_9->ver = VAR_2;
 VAR_9->svc = VAR_1;
 VAR_9->func = VAR_0;
 VAR_9->size = 3;

 VAR_8.rate = FUNC_1(VAR_5);
 VAR_8.resource = FUNC_0(VAR_7->rsrc_id);
 VAR_8.clk = VAR_7->clk_type;

 return FUNC_2(VAR_3, &VAR_8, 1);
}
