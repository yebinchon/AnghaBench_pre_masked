
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmcu {TYPE_3__* funcs; } ;
struct dc_link {scalar_t__ psr_enabled; TYPE_1__* ctx; } ;
struct dc {TYPE_2__* res_pool; } ;
struct TYPE_6__ {int (* set_psr_enable ) (struct dmcu*,int,int) ;scalar_t__ (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_5__ {struct dmcu* dmcu; } ;
struct TYPE_4__ {struct dc* dc; } ;


 scalar_t__ FUNC_0 (struct dmcu*) ;
 int FUNC_1 (struct dmcu*,int,int) ;

bool FUNC_2(const struct dc_link *VAR_0, bool VAR_1, bool VAR_2)
{
 struct dc *VAR_3 = VAR_0->ctx->dc;
 struct dmcu *VAR_4 = VAR_3->res_pool->dmcu;

 if ((VAR_4 != ((void*)0) && VAR_4->funcs->is_dmcu_initialized(VAR_4)) && VAR_0->psr_enabled)
  VAR_4->funcs->set_psr_enable(VAR_4, VAR_1, VAR_2);

 return 1;
}
