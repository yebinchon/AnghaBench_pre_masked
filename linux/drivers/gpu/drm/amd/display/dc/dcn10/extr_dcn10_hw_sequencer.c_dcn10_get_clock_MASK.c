
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_state {int dummy; } ;
struct dc_clock_config {int dummy; } ;
struct dc {TYPE_2__* clk_mgr; struct dc_state* current_state; } ;
typedef enum dc_clock_type { ____Placeholder_dc_clock_type } dc_clock_type ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* get_clock ) (TYPE_2__*,struct dc_state*,int,struct dc_clock_config*) ;} ;


 int FUNC_0 (TYPE_2__*,struct dc_state*,int,struct dc_clock_config*) ;

__attribute__((used)) static void FUNC_1(struct dc *VAR_0,
   enum dc_clock_type VAR_1,
   struct dc_clock_config *VAR_2)
{
 struct dc_state *VAR_3 = VAR_0->current_state;

 if (VAR_0->clk_mgr && VAR_0->clk_mgr->funcs->get_clock)
    VAR_0->clk_mgr->funcs->get_clock(VAR_0->clk_mgr, VAR_3, VAR_1, VAR_2);

}
