
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmw_resource {int used_prio; int mob_head; TYPE_3__* func; scalar_t__ res_dirty; struct vmw_buffer_object* backup; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct vmw_buffer_object {int res_list; TYPE_2__ base; } ;
struct TYPE_6__ {int prio; int dirty_prio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vmw_buffer_object*,int ) ;

void FUNC_3(struct vmw_resource *VAR_0)
{
 struct vmw_buffer_object *VAR_1 = VAR_0->backup;

 FUNC_0(VAR_0->backup->base.base.resv);
 VAR_0->used_prio = (VAR_0->res_dirty) ? VAR_0->func->dirty_prio :
  VAR_0->func->prio;
 FUNC_1(&VAR_0->mob_head, &VAR_1->res_list);
 FUNC_2(VAR_1, VAR_0->used_prio);
}
