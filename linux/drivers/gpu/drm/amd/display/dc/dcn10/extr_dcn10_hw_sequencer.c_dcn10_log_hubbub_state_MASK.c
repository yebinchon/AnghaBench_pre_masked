
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dcn_hubbub_wm_set {int dram_clk_chanage; int sr_exit; int sr_enter; int pte_meta_urgent; int data_urgent; int wm_set; } ;
struct dcn_hubbub_wm {struct dcn_hubbub_wm_set* sets; } ;
struct dc_log_buffer_ctx {int dummy; } ;
struct dc_context {int dummy; } ;
struct dc {TYPE_2__* res_pool; struct dc_context* ctx; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {TYPE_3__* hubbub; } ;
struct TYPE_4__ {int (* wm_read_state ) (TYPE_3__*,struct dcn_hubbub_wm*) ;} ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dcn_hubbub_wm*,int ,int) ;
 int FUNC_3 (TYPE_3__*,struct dcn_hubbub_wm*) ;

void FUNC_4(struct dc *VAR_0, struct dc_log_buffer_ctx *VAR_1)
{
 struct dc_context *VAR_2 = VAR_0->ctx;
 struct dcn_hubbub_wm VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(struct dcn_hubbub_wm));
 VAR_0->res_pool->hubbub->funcs->wm_read_state(VAR_0->res_pool->hubbub, &VAR_3);

 FUNC_0("HUBBUB WM:      data_urgent  pte_meta_urgent"
   "         sr_enter          sr_exit  dram_clk_change\n");

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  struct dcn_hubbub_wm_set *VAR_5;

  VAR_5 = &VAR_3.sets[VAR_4];
  FUNC_0("WM_Set[%d]:", VAR_5->wm_set);
  FUNC_1(VAR_5->data_urgent);
  FUNC_1(VAR_5->pte_meta_urgent);
  FUNC_1(VAR_5->sr_enter);
  FUNC_1(VAR_5->sr_exit);
  FUNC_1(VAR_5->dram_clk_chanage);
  FUNC_0("\n");
 }

 FUNC_0("\n");
}
