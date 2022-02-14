
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;
struct ttm_validate_buffer {struct ttm_buffer_object* bo; } ;
struct TYPE_2__ {scalar_t__ mem_type; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_4(struct vmw_resource *VAR_1,
         struct ttm_validate_buffer *VAR_2)
{
 struct vmw_private *VAR_3 = VAR_1->dev_priv;
 struct ttm_buffer_object *VAR_4 = VAR_2->bo;

 FUNC_0(VAR_4->mem.mem_type != VAR_0);
 FUNC_1(&VAR_3->binding_mutex);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_3->binding_mutex);

 return 0;
}
