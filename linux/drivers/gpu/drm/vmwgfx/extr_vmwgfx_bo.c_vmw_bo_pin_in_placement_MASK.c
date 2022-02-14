
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int reservation_sem; } ;
struct ttm_buffer_object {int mem; } ;
struct vmw_buffer_object {scalar_t__ pin_count; struct ttm_buffer_object base; } ;
struct ttm_placement {int dummy; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_placement*,int *,int *) ;
 int FUNC_1 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_2 (struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_operation_ctx*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmw_buffer_object*,int) ;
 int FUNC_8 (struct vmw_private*) ;

int FUNC_9(struct vmw_private *VAR_1,
       struct vmw_buffer_object *VAR_2,
       struct ttm_placement *VAR_3,
       bool VAR_4)
{
 struct ttm_operation_ctx VAR_5 = {VAR_4, 0 };
 struct ttm_buffer_object *VAR_6 = &VAR_2->base;
 int VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_4(&VAR_1->reservation_sem, VAR_4);
 if (FUNC_6(VAR_7 != 0))
  return VAR_7;

 FUNC_8(VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_4, 0, ((void*)0));
 if (FUNC_6(VAR_7 != 0))
  goto err;

 if (VAR_2->pin_count > 0)
  VAR_7 = FUNC_0(VAR_3, &VAR_6->mem,
     &VAR_8) == 1 ? 0 : -VAR_0;
 else
  VAR_7 = FUNC_3(VAR_6, VAR_3, &VAR_5);

 if (!VAR_7)
  FUNC_7(VAR_2, 1);

 FUNC_2(VAR_6);

err:
 FUNC_5(&VAR_1->reservation_sem);
 return VAR_7;
}
