
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_context {int bo_list; int ticket; } ;
struct vmw_fence_obj {int dummy; } ;


 int FUNC_0 (int *,int *,void*) ;

__attribute__((used)) static inline void
FUNC_1(struct vmw_validation_context *VAR_0,
   struct vmw_fence_obj *VAR_1)
{
 FUNC_0(&VAR_0->ticket, &VAR_0->bo_list,
        (void *) VAR_1);
}
