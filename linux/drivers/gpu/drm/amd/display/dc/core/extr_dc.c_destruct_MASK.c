
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc {TYPE_1__* vm_helper; TYPE_1__* dcn_ip; TYPE_1__* dcn_soc; TYPE_1__* bw_dceip; TYPE_1__* bw_vbios; TYPE_1__* ctx; int * clk_mgr; int * current_state; } ;
struct TYPE_2__ {int perf_trace; int dc_bios; scalar_t__ created_bios; scalar_t__ gpio_service; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dc*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct dc *VAR_0)
{
 if (VAR_0->current_state) {
  FUNC_5(VAR_0->current_state);
  VAR_0->current_state = ((void*)0);
 }

 FUNC_6(VAR_0);

 if (VAR_0->clk_mgr) {
  FUNC_2(VAR_0->clk_mgr);
  VAR_0->clk_mgr = ((void*)0);
 }

 FUNC_3(VAR_0);

 if (VAR_0->ctx->gpio_service)
  FUNC_1(&VAR_0->ctx->gpio_service);

 if (VAR_0->ctx->created_bios)
  FUNC_0(&VAR_0->ctx->dc_bios);

 FUNC_4(&VAR_0->ctx->perf_trace);

 FUNC_7(VAR_0->ctx);
 VAR_0->ctx = ((void*)0);

 FUNC_7(VAR_0->bw_vbios);
 VAR_0->bw_vbios = ((void*)0);

 FUNC_7(VAR_0->bw_dceip);
 VAR_0->bw_dceip = ((void*)0);
}
