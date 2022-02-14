
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc {int hwseq; TYPE_2__* res_pool; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* destroy ) (TYPE_2__**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**) ;

void FUNC_2(struct dc *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->res_pool)
   VAR_0->res_pool->funcs->destroy(&VAR_0->res_pool);

  FUNC_0(VAR_0->hwseq);
 }
}
