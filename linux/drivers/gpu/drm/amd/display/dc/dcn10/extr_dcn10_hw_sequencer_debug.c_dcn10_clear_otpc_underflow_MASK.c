
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {TYPE_1__* funcs; } ;
struct resource_pool {int timing_generator_count; struct timing_generator** timing_generators; } ;
struct dcn_otg_state {int otg_enabled; int member_0; } ;
struct dc {struct resource_pool* res_pool; } ;
struct TYPE_2__ {int (* clear_optc_underflow ) (struct timing_generator*) ;} ;


 int FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,struct dcn_otg_state*) ;
 int FUNC_2 (struct timing_generator*) ;

__attribute__((used)) static void FUNC_3(struct dc *VAR_0)
{
 struct resource_pool *VAR_1 = VAR_0->res_pool;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->timing_generator_count; VAR_2++) {
  struct timing_generator *VAR_3 = VAR_1->timing_generators[VAR_2];
  struct dcn_otg_state VAR_4 = {0};

  FUNC_1(FUNC_0(VAR_3), &VAR_4);

  if (VAR_4.otg_enabled & 1)
   VAR_3->funcs->clear_optc_underflow(VAR_3);
 }
}
