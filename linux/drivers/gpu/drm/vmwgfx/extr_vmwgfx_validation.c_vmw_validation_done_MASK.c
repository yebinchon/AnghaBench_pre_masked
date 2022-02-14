
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_context {scalar_t__ res_mutex; } ;
struct vmw_fence_obj {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vmw_validation_context*,struct vmw_fence_obj*) ;
 int FUNC_2 (struct vmw_validation_context*,int) ;
 int FUNC_3 (struct vmw_validation_context*) ;

void FUNC_4(struct vmw_validation_context *VAR_0,
    struct vmw_fence_obj *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, 0);
 if (VAR_0->res_mutex)
  FUNC_0(VAR_0->res_mutex);
 FUNC_3(VAR_0);
}
