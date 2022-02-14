
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dc_clocks {scalar_t__ dppclk_khz; scalar_t__ dispclk_khz; } ;
struct TYPE_7__ {struct dc_clocks clk; } ;
struct TYPE_8__ {TYPE_1__ dcn; } ;
struct TYPE_9__ {TYPE_2__ bw; } ;
struct dc_state {TYPE_3__ bw_ctx; } ;
struct dc_clock_config {scalar_t__ max_clock_khz; scalar_t__ min_clock_khz; scalar_t__ bw_requirequired_clock_khz; int member_0; } ;
struct dc {TYPE_5__* clk_mgr; struct dc_state* current_state; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
typedef enum dc_clock_type { ____Placeholder_dc_clock_type } dc_clock_type ;
struct TYPE_11__ {TYPE_4__* funcs; } ;
struct TYPE_10__ {int (* update_clocks ) (TYPE_5__*,struct dc_state*,int) ;int (* get_clock ) (TYPE_5__*,struct dc_state*,int,struct dc_clock_config*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,struct dc_state*,int,struct dc_clock_config*) ;
 int FUNC_1 (TYPE_5__*,struct dc_state*,int) ;

__attribute__((used)) static enum dc_status FUNC_2(struct dc *VAR_8,
   enum dc_clock_type VAR_9,
   uint32_t VAR_10,
   uint32_t VAR_11)
{
 struct dc_state *VAR_12 = VAR_8->current_state;
 struct dc_clock_config VAR_13 = {0};
 struct dc_clocks *VAR_14 = &VAR_12->bw_ctx.bw.dcn.clk;

 if (VAR_8->clk_mgr && VAR_8->clk_mgr->funcs->get_clock)
    VAR_8->clk_mgr->funcs->get_clock(VAR_8->clk_mgr,
      VAR_12, VAR_9, &VAR_13);

 if (!VAR_8->clk_mgr->funcs->get_clock)
  return VAR_6;

 if (VAR_10 > VAR_13.max_clock_khz)
  return VAR_5;

 if (VAR_10 < VAR_13.min_clock_khz)
  return VAR_4;

 if (VAR_10 < VAR_13.bw_requirequired_clock_khz)
  return VAR_3;


 if (VAR_9 == VAR_0)
  VAR_14->dispclk_khz = VAR_10;
 else if (VAR_9 == VAR_1)
  VAR_14->dppclk_khz = VAR_10;
 else
  return VAR_2;

 if (VAR_8->clk_mgr && VAR_8->clk_mgr->funcs->update_clocks)
    VAR_8->clk_mgr->funcs->update_clocks(VAR_8->clk_mgr,
    VAR_12, 1);
 return VAR_7;

}
