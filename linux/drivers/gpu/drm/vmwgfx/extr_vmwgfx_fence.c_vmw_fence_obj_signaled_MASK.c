
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct vmw_fence_obj {TYPE_1__ base; } ;
struct vmw_fence_manager {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct vmw_fence_manager* FUNC_1 (struct vmw_fence_obj*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct vmw_fence_manager*) ;

bool FUNC_4(struct vmw_fence_obj *VAR_1)
{
 struct vmw_fence_manager *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_0, &VAR_1->base.flags))
  return 1;

 FUNC_3(VAR_2);

 return FUNC_0(&VAR_1->base);
}
