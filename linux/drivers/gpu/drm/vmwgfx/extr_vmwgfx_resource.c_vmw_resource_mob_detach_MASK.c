
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_resource {int used_prio; int mob_head; struct vmw_buffer_object* backup; } ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct vmw_buffer_object {TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_buffer_object*,int ) ;
 scalar_t__ FUNC_3 (struct vmw_resource*) ;

void FUNC_4(struct vmw_resource *VAR_0)
{
 struct vmw_buffer_object *VAR_1 = VAR_0->backup;

 FUNC_0(VAR_1->base.base.resv);
 if (FUNC_3(VAR_0)) {
  FUNC_1(&VAR_0->mob_head);
  FUNC_2(VAR_1, VAR_0->used_prio);
 }
}
