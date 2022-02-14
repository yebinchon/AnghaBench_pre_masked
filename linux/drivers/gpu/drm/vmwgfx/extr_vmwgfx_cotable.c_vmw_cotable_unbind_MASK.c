
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;
struct vmw_fence_obj {int dummy; } ;
struct vmw_cotable {int ctx; int scrubbed; } ;
struct ttm_validate_buffer {struct ttm_buffer_object* bo; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_3__ {scalar_t__ mem_type; } ;
struct ttm_buffer_object {TYPE_2__ base; TYPE_1__ mem; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ttm_buffer_object*,struct vmw_fence_obj*) ;
 struct vmw_cotable* FUNC_6 (struct vmw_resource*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,struct vmw_private*,struct vmw_fence_obj**,int *) ;
 int FUNC_9 (struct vmw_fence_obj**) ;
 int FUNC_10 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_11(struct vmw_resource *VAR_1,
         bool VAR_2,
         struct ttm_validate_buffer *VAR_3)
{
 struct vmw_cotable *VAR_4 = FUNC_6(VAR_1);
 struct vmw_private *VAR_5 = VAR_1->dev_priv;
 struct ttm_buffer_object *VAR_6 = VAR_3->bo;
 struct vmw_fence_obj *VAR_7;

 if (!FUNC_10(VAR_1))
  return 0;

 FUNC_0(VAR_6->mem.mem_type != VAR_0);
 FUNC_1(VAR_6->base.resv);

 FUNC_3(&VAR_5->binding_mutex);
 if (!VAR_4->scrubbed)
  FUNC_7(VAR_4->ctx, VAR_2);
 FUNC_4(&VAR_5->binding_mutex);
 (void) FUNC_8(((void*)0), VAR_5, &VAR_7, ((void*)0));
 FUNC_5(VAR_6, VAR_7);
 if (FUNC_2(VAR_7 != ((void*)0)))
  FUNC_9(&VAR_7);

 return 0;
}
