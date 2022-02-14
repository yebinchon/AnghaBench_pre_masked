
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmw_resource {TYPE_3__* backup; struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;
struct vmw_fence_obj {int dummy; } ;
struct ttm_validate_buffer {int bo; } ;
struct TYPE_4__ {scalar_t__ mem_type; } ;
struct TYPE_5__ {TYPE_1__ mem; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct vmw_fence_obj*) ;
 int FUNC_5 (struct vmw_resource*) ;
 int FUNC_6 (int *,struct vmw_private*,struct vmw_fence_obj**,int *) ;
 int FUNC_7 (struct vmw_fence_obj**) ;

__attribute__((used)) static int FUNC_8(struct vmw_resource *VAR_1,
    bool VAR_2,
    struct ttm_validate_buffer *VAR_3)
{
 struct vmw_private *VAR_4 = VAR_1->dev_priv;
 struct vmw_fence_obj *VAR_5;
 int VAR_6;

 FUNC_0(VAR_1->backup->base.mem.mem_type != VAR_0);

 FUNC_2(&VAR_4->binding_mutex);
 VAR_6 = FUNC_5(VAR_1);
 FUNC_3(&VAR_4->binding_mutex);

 if (VAR_6)
  return VAR_6;

 (void) FUNC_6(((void*)0), VAR_4,
       &VAR_5, ((void*)0));
 FUNC_4(VAR_3->bo, VAR_5);

 if (FUNC_1(VAR_5 != ((void*)0)))
  FUNC_7(&VAR_5);

 return 0;
}
