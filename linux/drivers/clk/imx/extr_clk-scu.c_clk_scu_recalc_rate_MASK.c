
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct TYPE_5__ {int rate; } ;
struct TYPE_4__ {int clk; int resource; } ;
struct TYPE_6__ {TYPE_2__ resp; TYPE_1__ req; } ;
struct imx_sc_msg_get_clock_rate {TYPE_3__ data; struct imx_sc_rpc_msg hdr; } ;
struct clk_scu {int clk_type; int rsrc_id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct imx_sc_msg_get_clock_rate*,int) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 struct clk_scu* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk_hw *VAR_4,
      unsigned long VAR_5)
{
 struct clk_scu *VAR_6 = FUNC_5(VAR_4);
 struct imx_sc_msg_get_clock_rate VAR_7;
 struct imx_sc_rpc_msg *VAR_8 = &VAR_7.hdr;
 int VAR_9;

 VAR_8->ver = VAR_2;
 VAR_8->svc = VAR_1;
 VAR_8->func = VAR_0;
 VAR_8->size = 2;

 VAR_7.data.req.resource = FUNC_1(VAR_6->rsrc_id);
 VAR_7.data.req.clk = VAR_6->clk_type;

 VAR_9 = FUNC_2(VAR_3, &VAR_7, 1);
 if (VAR_9) {
  FUNC_4("%s: failed to get clock rate %d\n",
         FUNC_0(VAR_4), VAR_9);
  return 0;
 }

 return FUNC_3(VAR_7.data.resp.rate);
}
