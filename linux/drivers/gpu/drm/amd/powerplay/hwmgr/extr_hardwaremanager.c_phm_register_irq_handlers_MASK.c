
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
struct TYPE_2__ {int (* register_irq_handlers ) (struct pp_hwmgr*) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;

int FUNC_2(struct pp_hwmgr *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->hwmgr_func->register_irq_handlers != ((void*)0))
  return VAR_0->hwmgr_func->register_irq_handlers(VAR_0);

 return 0;
}
