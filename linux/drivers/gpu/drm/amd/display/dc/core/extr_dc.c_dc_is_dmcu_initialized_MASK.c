
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmcu {TYPE_2__* funcs; } ;
struct dc {TYPE_1__* res_pool; } ;
struct TYPE_4__ {int (* is_dmcu_initialized ) (struct dmcu*) ;} ;
struct TYPE_3__ {struct dmcu* dmcu; } ;


 int FUNC_0 (struct dmcu*) ;

bool FUNC_1(struct dc *VAR_0)
{
 struct dmcu *VAR_1 = VAR_0->res_pool->dmcu;

 if (VAR_1)
  return VAR_1->funcs->is_dmcu_initialized(VAR_1);
 return 0;
}
