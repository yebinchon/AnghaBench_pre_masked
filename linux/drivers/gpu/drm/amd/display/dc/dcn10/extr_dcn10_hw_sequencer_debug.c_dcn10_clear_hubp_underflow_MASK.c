
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_pool {int pipe_count; struct hubp** hubps; } ;
struct hubp {TYPE_1__* funcs; } ;
struct dcn_hubp_state {int blank_en; } ;
struct dc {struct resource_pool* res_pool; } ;
struct TYPE_4__ {struct dcn_hubp_state state; } ;
struct TYPE_3__ {int (* hubp_clear_underflow ) (struct hubp*) ;int (* hubp_read_state ) (struct hubp*) ;} ;


 TYPE_2__* FUNC_0 (struct hubp*) ;
 int FUNC_1 (struct hubp*) ;
 int FUNC_2 (struct hubp*) ;

__attribute__((used)) static void FUNC_3(struct dc *VAR_0)
{
 struct resource_pool *VAR_1 = VAR_0->res_pool;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->pipe_count; VAR_2++) {
  struct hubp *VAR_3 = VAR_1->hubps[VAR_2];
  struct dcn_hubp_state *VAR_4 = &(FUNC_0(VAR_3)->state);

  VAR_3->funcs->hubp_read_state(VAR_3);

  if (!VAR_4->blank_en)
   VAR_3->funcs->hubp_clear_underflow(VAR_3);
 }
}
