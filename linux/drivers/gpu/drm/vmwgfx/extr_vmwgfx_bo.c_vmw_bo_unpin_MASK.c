
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int reservation_sem; } ;
struct ttm_buffer_object {int dummy; } ;
struct vmw_buffer_object {struct ttm_buffer_object base; } ;


 int FUNC_0 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct vmw_buffer_object*,int) ;

int FUNC_6(struct vmw_private *VAR_0,
   struct vmw_buffer_object *VAR_1,
   bool VAR_2)
{
 struct ttm_buffer_object *VAR_3 = &VAR_1->base;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_0->reservation_sem, VAR_2);
 if (FUNC_4(VAR_4 != 0))
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2, 0, ((void*)0));
 if (FUNC_4(VAR_4 != 0))
  goto err;

 FUNC_5(VAR_1, 0);

 FUNC_1(VAR_3);

err:
 FUNC_3(&VAR_0->reservation_sem);
 return VAR_4;
}
