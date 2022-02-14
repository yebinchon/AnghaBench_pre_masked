
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_set_clock_parent {int parent; int clk; int resource; struct imx_sc_rpc_msg hdr; } ;
struct clk_scu {int clk_type; int rsrc_id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct imx_sc_msg_set_clock_parent*,int) ;
 struct clk_scu* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct clk_scu *VAR_6 = FUNC_2(VAR_4);
 struct imx_sc_msg_set_clock_parent VAR_7;
 struct imx_sc_rpc_msg *VAR_8 = &VAR_7.hdr;

 VAR_8->ver = VAR_2;
 VAR_8->svc = VAR_1;
 VAR_8->func = VAR_0;
 VAR_8->size = 2;

 VAR_7.resource = FUNC_0(VAR_6->rsrc_id);
 VAR_7.clk = VAR_6->clk_type;
 VAR_7.parent = VAR_5;

 return FUNC_1(VAR_3, &VAR_7, 1);
}
