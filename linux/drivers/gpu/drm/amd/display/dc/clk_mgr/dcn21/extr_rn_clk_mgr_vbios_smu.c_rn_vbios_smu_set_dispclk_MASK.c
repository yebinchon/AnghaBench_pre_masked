
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
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
 int FUNC_1 (struct clk_mgr_internal*,int ,int) ;
 scalar_t__ FUNC_2 (struct dmcu*) ;
 int FUNC_3 (struct dmcu*,int) ;

int FUNC_4(struct clk_mgr_internal *VAR_1, int VAR_2)
{
 int VAR_3 = -1;
 struct dc *VAR_4 = VAR_1->base.ctx->dc;
 struct dmcu *VAR_5 = VAR_4->res_pool->dmcu;
 uint32_t VAR_6 = VAR_2 / 1000;

 if (VAR_6 <= 100)
  VAR_6 = 101;


 VAR_3 = FUNC_1(
   VAR_1,
   VAR_0,
   VAR_6);

 if (!FUNC_0(VAR_4->ctx->dce_environment)) {
  if (VAR_5 && VAR_5->funcs->is_dmcu_initialized(VAR_5)) {
   if (VAR_1->dfs_bypass_disp_clk != VAR_3)
    VAR_5->funcs->set_psr_wait_loop(VAR_5,
      VAR_3 / 7);
  }
 }

 return VAR_3 * 1000;
}
