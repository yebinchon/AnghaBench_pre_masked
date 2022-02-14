
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dmcu {TYPE_3__* funcs; } ;
struct dc {TYPE_2__* ctx; TYPE_1__* res_pool; } ;
struct TYPE_10__ {TYPE_4__* ctx; } ;
struct clk_mgr_internal {int dfs_bypass_disp_clk; TYPE_5__ base; } ;
struct TYPE_9__ {struct dc* dc; } ;
struct TYPE_8__ {int (* set_psr_wait_loop ) (struct dmcu*,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_7__ {int dce_environment; } ;
struct TYPE_6__ {struct dmcu* dmcu; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct clk_mgr_internal*,int ,int) ;
 scalar_t__ FUNC_3 (struct dmcu*) ;
 int FUNC_4 (struct dmcu*,int) ;

int FUNC_5(struct clk_mgr_internal *VAR_2, int VAR_3)
{
 int VAR_4 = -1;
 struct dc *VAR_5 = VAR_2->base.ctx->dc;
 struct dmcu *VAR_6 = VAR_5->res_pool->dmcu;


 VAR_4 = FUNC_2(
   VAR_2,
   VAR_1,
   VAR_3 / 1000);


 VAR_4 = FUNC_1(VAR_0) * 1000;

 if (!FUNC_0(VAR_5->ctx->dce_environment)) {
  if (VAR_6 && VAR_6->funcs->is_dmcu_initialized(VAR_6)) {
   if (VAR_2->dfs_bypass_disp_clk != VAR_4)
    VAR_6->funcs->set_psr_wait_loop(VAR_6,
      VAR_4 / 7);
  }
 }

 return VAR_4 * 1000;
}
