
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int clk; int resource; } ;
struct TYPE_6__ {TYPE_2__ resp; TYPE_1__ req; } ;
struct imx_sc_msg_get_clock_parent {TYPE_3__ data; struct imx_sc_rpc_msg hdr; } ;
struct clk_scu {int clk_type; int rsrc_id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct imx_sc_msg_get_clock_parent*,int) ;
 int FUNC_3 (char*,int ,int) ;
 struct clk_scu* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_5(struct clk_hw *VAR_4)
{
 struct clk_scu *VAR_5 = FUNC_4(VAR_4);
 struct imx_sc_msg_get_clock_parent VAR_6;
 struct imx_sc_rpc_msg *VAR_7 = &VAR_6.hdr;
 int VAR_8;

 VAR_7->ver = VAR_2;
 VAR_7->svc = VAR_1;
 VAR_7->func = VAR_0;
 VAR_7->size = 2;

 VAR_6.data.req.resource = FUNC_1(VAR_5->rsrc_id);
 VAR_6.data.req.clk = VAR_5->clk_type;

 VAR_8 = FUNC_2(VAR_3, &VAR_6, 1);
 if (VAR_8) {
  FUNC_3("%s: failed to get clock parent %d\n",
         FUNC_0(VAR_4), VAR_8);
  return 0;
 }

 return VAR_6.data.resp.parent;
}
