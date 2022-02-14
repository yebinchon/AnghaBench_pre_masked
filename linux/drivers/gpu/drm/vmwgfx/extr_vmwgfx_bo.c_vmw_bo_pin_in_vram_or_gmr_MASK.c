
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int reservation_sem; } ;
struct ttm_buffer_object {int mem; } ;
struct vmw_buffer_object {scalar_t__ pin_count; struct ttm_buffer_object base; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int *,struct ttm_operation_ctx*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct vmw_buffer_object*,int) ;
 int FUNC_9 (struct vmw_private*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_10(struct vmw_private *VAR_4,
         struct vmw_buffer_object *VAR_5,
         bool VAR_6)
{
 struct ttm_operation_ctx VAR_7 = {VAR_6, 0 };
 struct ttm_buffer_object *VAR_8 = &VAR_5->base;
 int VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_5(&VAR_4->reservation_sem, VAR_6);
 if (FUNC_7(VAR_9 != 0))
  return VAR_9;

 FUNC_9(VAR_4);

 VAR_9 = FUNC_2(VAR_8, VAR_6, 0, ((void*)0));
 if (FUNC_7(VAR_9 != 0))
  goto err;

 if (VAR_5->pin_count > 0) {
  VAR_9 = FUNC_1(&VAR_2, &VAR_8->mem,
     &VAR_10) == 1 ? 0 : -VAR_0;
  goto out_unreserve;
 }

 VAR_9 = FUNC_4(VAR_8, &VAR_2, &VAR_7);
 if (FUNC_0(VAR_9 == 0) || VAR_9 == -VAR_1)
  goto out_unreserve;

 VAR_9 = FUNC_4(VAR_8, &VAR_3, &VAR_7);

out_unreserve:
 if (!VAR_9)
  FUNC_8(VAR_5, 1);

 FUNC_3(VAR_8);
err:
 FUNC_6(&VAR_4->reservation_sem);
 return VAR_9;
}
